/*
 * XREFs of PpmSetSimulatedIdle @ 0x1404CD620
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     KeGetProcessorIndexFromNumber @ 0x140352BB0 (KeGetProcessorIndexFromNumber.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall PpmSetSimulatedIdle(__int64 a1)
{
  ULONG ProcessorIndexFromNumber; // eax
  char v4; // cl
  __int64 v5; // rcx
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rdx
  _PPM_IDLE_STATES *IdleStates; // rax
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(a1 + 4));
  if ( ProcessorIndexFromNumber == -1 )
    return 3221225485LL;
  *(_DWORD *)Affinity.Reserved = 0;
  Affinity.Reserved[2] = 0;
  v4 = *((_DWORD *)KiGlobalState + ProcessorIndexFromNumber) & 0x3F;
  Affinity.Group = *((_DWORD *)KiGlobalState + ProcessorIndexFromNumber) >> 6;
  Affinity.Mask = 1LL << v4;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentIrql = KeGetCurrentIrql();
  v8 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v5, 2LL);
  }
  IdleStates = CurrentPrcb->PowerState.IdleStates;
  if ( IdleStates )
  {
    v11 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 < IdleStates->ProcessorIdleCount )
    {
      IdleStates->IdleOverride = 1;
      v10 = 0;
      IdleStates->OverrideIndex = v11;
    }
    else
    {
      v10 = -1073741811;
    }
  }
  else
  {
    v10 = -1073741637;
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v8) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
  }
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v10;
}
