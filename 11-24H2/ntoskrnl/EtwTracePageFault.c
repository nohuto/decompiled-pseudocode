/*
 * XREFs of EtwTracePageFault @ 0x140216580
 * Callers:
 *     MiConvertFaultStatus @ 0x1402163C0 (MiConvertFaultStatus.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     EtwTraceSiloKernelEvent @ 0x140348590 (EtwTraceSiloKernelEvent.c)
 *     PsGetThreadServerSilo @ 0x140348A90 (PsGetThreadServerSilo.c)
 *     EtwpCoverageSamplerPageFault @ 0x140652298 (EtwpCoverageSamplerPageFault.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall EtwTracePageFault(int a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  __int16 v5; // di
  struct _KTHREAD *CurrentThread; // rsi
  int ThreadServerSilo; // eax
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  bool v14; // zf
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+38h] [rbp-40h]
  _QWORD v17[2]; // [rsp+40h] [rbp-38h] BYREF

  switch ( a1 )
  {
    case 273:
      v5 = 523;
      break;
    case 272:
      v5 = 522;
      break;
    case 274:
      v5 = 524;
      break;
    case 276:
      v5 = 526;
      break;
    case 275:
      v5 = 525;
      break;
    case -1073741819:
      v5 = 527;
      break;
    default:
      return;
  }
  v15 = a2;
  v16 = 0LL;
  if ( a4 )
    v16 = *(_QWORD *)(a4 + 360);
  v17[1] = 16LL;
  v17[0] = &v15;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x10) != 0 )
  {
    ThreadServerSilo = PsGetThreadServerSilo(CurrentThread);
    EtwTraceSiloKernelEvent(ThreadServerSilo, (unsigned int)v17, 1, 4096, v5, 33554690);
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    LODWORD(CurrentThread[1].Queue) |= 0x10u;
    v8 = 50338050;
    if ( a3 )
      v8 = 33558786;
    v9 = PsGetThreadServerSilo(CurrentThread);
    EtwTraceSiloKernelEvent(v9, (unsigned int)v17, 1, 4096, v5, v8);
    LODWORD(CurrentThread[1].Queue) &= ~0x10u;
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v11, v10, v12, v13);
    if ( EtwpHostSiloState != -4844 && (*(_DWORD *)(EtwpHostSiloState + 4844) & 0x1000) != 0 )
      EtwpCoverageSamplerPageFault(v16, v15, a3);
  }
}
