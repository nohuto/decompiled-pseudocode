/*
 * XREFs of PpmUpdateProcessorIdleVeto @ 0x1405CCCF0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     PopExecuteOnTargetProcessors @ 0x140370234 (PopExecuteOnTargetProcessors.c)
 *     KeGetProcessorIndexFromNumber @ 0x140370440 (KeGetProcessorIndexFromNumber.c)
 *     PpmUpdateIdleVeto @ 0x1403A5250 (PpmUpdateIdleVeto.c)
 *     PpmEventProcessorVetoRequest @ 0x1405D6E18 (PpmEventProcessorVetoRequest.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PpmUpdateProcessorIdleVeto(__int64 a1)
{
  ULONG ProcessorIndexFromNumber; // r14d
  struct _KPRCB *Prcb; // rsi
  int updated; // ebx
  KIRQL v5; // al
  _PPM_IDLE_STATES *IdleStates; // rdx
  KIRQL v7; // bp
  __int64 v9; // rax
  __int64 v10; // r9
  _BYTE v11[16]; // [rsp+20h] [rbp-148h] BYREF
  _DWORD v12[2]; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v13[264]; // [rsp+38h] [rbp-130h] BYREF

  v11[0] = 0;
  memset_0(v13, 0, 0x100uLL);
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(a1 + 4));
  Prcb = (struct _KPRCB *)KeGetPrcb(ProcessorIndexFromNumber);
  if ( ProcessorIndexFromNumber == -1 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    IdleStates = Prcb->PowerState.IdleStates;
    v7 = v5;
    if ( IdleStates )
    {
      v9 = *(unsigned int *)(a1 + 8);
      if ( (unsigned int)v9 < IdleStates->ProcessorIdleCount )
      {
        updated = PpmUpdateIdleVeto(
                    *(_BYTE *)(a1 + 16),
                    *(_DWORD *)(a1 + 12),
                    (__int64)&IdleStates->State[v9].VetoAccounting,
                    v11);
        if ( updated >= 0 )
        {
          LOBYTE(v10) = *(_BYTE *)(a1 + 16);
          PpmEventProcessorVetoRequest(Prcb, *(unsigned int *)(a1 + 8), *(unsigned int *)(a1 + 12), v10);
          if ( v11[0] )
          {
            if ( Prcb != KeGetCurrentPrcb() )
            {
              KeReleaseSpinLock(&PpmIdleVetoLock, v7);
              v12[1] = 0;
              v12[0] = 2097153;
              memset_0(v13, 0, 0x100uLL);
              KeAddProcessorAffinityEx((unsigned __int16 *)v12, ProcessorIndexFromNumber);
              PopExecuteOnTargetProcessors((__int64)v12, (__int64)PdcCreateWatchdogAroundClientCall, 0LL, 0LL);
              return (unsigned int)updated;
            }
          }
        }
      }
      else
      {
        updated = -1073741811;
      }
    }
    else
    {
      updated = -1073741637;
    }
    KeReleaseSpinLock(&PpmIdleVetoLock, v7);
  }
  return (unsigned int)updated;
}
