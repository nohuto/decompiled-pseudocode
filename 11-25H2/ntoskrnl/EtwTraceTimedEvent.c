/*
 * XREFs of EtwTraceTimedEvent @ 0x140257700
 * Callers:
 *     HvlpFastFlushAddressSpaceTb @ 0x14027015C (HvlpFastFlushAddressSpaceTb.c)
 *     KeDisableTimer2 @ 0x14036F62C (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x14036FB48 (KiFinalizeTimer2Disablement.c)
 *     KiExpireTimer2 @ 0x140370160 (KiExpireTimer2.c)
 *     PerfInfoLogIpiReceive @ 0x1403F6DB0 (PerfInfoLogIpiReceive.c)
 *     IopTimerDispatch @ 0x1404963F0 (IopTimerDispatch.c)
 *     EtwTraceHvHypercall @ 0x1404CE10C (EtwTraceHvHypercall.c)
 *     EtwTraceCpuCacheFlush @ 0x1406414E8 (EtwTraceCpuCacheFlush.c)
 *     EtwpTraceFltTimedIo @ 0x1406429B0 (EtwpTraceFltTimedIo.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

int __fastcall EtwTraceTimedEvent(
        unsigned __int16 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // ebx
  bool v9; // zf
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD v14[3]; // [rsp+38h] [rbp-40h] BYREF
  int v15; // [rsp+50h] [rbp-28h]
  int i; // [rsp+54h] [rbp-24h]

  v14[2] = a3;
  v7 = a2;
  v15 = a4;
  v8 = *(_DWORD *)(EtwpHostSiloState + 4248);
  v9 = !_BitScanForward((unsigned int *)&a3, v8);
  for ( i = 0; !v9; v9 = !_BitScanForward((unsigned int *)&a3, v8) )
  {
    v8 &= v8 - 1;
    LODWORD(v10) = 32 * a3;
    v11 = 32 * a3 + EtwpHostSiloState + 4284;
    if ( v11 )
    {
      v10 = v7 >> 29;
      if ( ((unsigned int)v7 & *(_DWORD *)(v11 + 4 * (v7 >> 29)) & 0x1FFFFFFF) != 0 )
      {
        v12 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * a3 + 4233) - 1LL;
        v14[1] = 8LL;
        v14[0] = a6 + 8 * v12;
        LODWORD(v10) = EtwpLogKernelEvent(
                         (struct _KTHREAD *)v14,
                         EtwpHostSiloState,
                         *(unsigned __int8 *)(EtwpHostSiloState + 2 * a3 + 4232),
                         2u,
                         a1,
                         a5);
      }
    }
  }
  return v10;
}
