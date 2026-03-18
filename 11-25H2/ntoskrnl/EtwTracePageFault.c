/*
 * XREFs of EtwTracePageFault @ 0x1403BF7D0
 * Callers:
 *     MiConvertFaultStatus @ 0x1403BF610 (MiConvertFaultStatus.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140310730 (EtwTraceSiloKernelEvent.c)
 *     PsGetThreadServerSilo @ 0x140310C30 (PsGetThreadServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     EtwpCoverageSamplerPageFault @ 0x1406462E8 (EtwpCoverageSamplerPageFault.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall EtwTracePageFault(int a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  unsigned __int16 v5; // di
  struct _KTHREAD *CurrentThread; // rsi
  __int64 ThreadServerSilo; // rax
  unsigned int v8; // ebx
  __int64 v9; // rax
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
    ThreadServerSilo = PsGetThreadServerSilo((__int64)CurrentThread);
    EtwTraceSiloKernelEvent(ThreadServerSilo, (struct _KTHREAD *)v13, 1u, 0x1000u, v5, 0x2000102u);
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    LODWORD(CurrentThread[1].Queue) |= 0x10u;
    v8 = 50338050;
    if ( a3 )
      v8 = 33558786;
    v9 = PsGetThreadServerSilo((__int64)CurrentThread);
    EtwTraceSiloKernelEvent(v9, (struct _KTHREAD *)v13, 1u, 0x1000u, v5, v8);
    LODWORD(CurrentThread[1].Queue) &= ~0x10u;
    v10 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v10 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    if ( EtwpHostSiloState != -4572 && (*(_DWORD *)(EtwpHostSiloState + 4572) & 0x1000) != 0 )
      EtwpCoverageSamplerPageFault(v12, v11, a3);
  }
}
