/*
 * XREFs of EtwTracePageFault @ 0x140260AD0
 * Callers:
 *     MiConvertFaultStatus @ 0x140260910 (MiConvertFaultStatus.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     EtwTraceSiloKernelEvent @ 0x1403C1FD0 (EtwTraceSiloKernelEvent.c)
 *     PsGetThreadServerSilo @ 0x1403C24D0 (PsGetThreadServerSilo.c)
 *     EtwpCoverageSamplerPageFault @ 0x140650998 (EtwpCoverageSamplerPageFault.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall EtwTracePageFault(int a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  __int16 v5; // di
  struct _KTHREAD *CurrentThread; // rsi
  int ThreadServerSilo; // eax
  int v8; // ebx
  int v9; // eax
  bool v10; // zf
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+38h] [rbp-40h]
  _QWORD v13[2]; // [rsp+40h] [rbp-38h] BYREF

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
  v11 = a2;
  v12 = 0LL;
  if ( a4 )
    v12 = *(_QWORD *)(a4 + 360);
  v13[1] = 16LL;
  v13[0] = &v11;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x10) != 0 )
  {
    ThreadServerSilo = PsGetThreadServerSilo(CurrentThread);
    EtwTraceSiloKernelEvent(ThreadServerSilo, (unsigned int)v13, 1, 4096, v5, 33554690);
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    LODWORD(CurrentThread[1].Queue) |= 0x10u;
    v8 = 50338050;
    if ( a3 )
      v8 = 33558786;
    v9 = PsGetThreadServerSilo(CurrentThread);
    EtwTraceSiloKernelEvent(v9, (unsigned int)v13, 1, 4096, v5, v8);
    LODWORD(CurrentThread[1].Queue) &= ~0x10u;
    v10 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v10 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    if ( EtwpHostSiloState != -4844 && (*(_DWORD *)(EtwpHostSiloState + 4844) & 0x1000) != 0 )
      EtwpCoverageSamplerPageFault(v12, v11, a3);
  }
}
