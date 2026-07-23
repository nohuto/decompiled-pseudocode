/*
 * XREFs of EtwTraceTimedEvent @ 0x14039F830
 * Callers:
 *     HvlpFastFlushAddressSpaceTb @ 0x14039F2D4 (HvlpFastFlushAddressSpaceTb.c)
 *     KeDisableTimer2 @ 0x1403AED68 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x1403AF288 (KiFinalizeTimer2Disablement.c)
 *     KiExpireTimer2 @ 0x1403AF650 (KiExpireTimer2.c)
 *     PerfInfoLogIpiReceive @ 0x1403F9900 (PerfInfoLogIpiReceive.c)
 *     IopTimerDispatch @ 0x140490110 (IopTimerDispatch.c)
 *     EtwTraceHvHypercall @ 0x1404C72BC (EtwTraceHvHypercall.c)
 *     EtwTraceCpuCacheFlush @ 0x14064BAC4 (EtwTraceCpuCacheFlush.c)
 *     EtwpTraceFltTimedIo @ 0x14064CF80 (EtwpTraceFltTimedIo.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

int __fastcall EtwTraceTimedEvent(__int16 a1, unsigned int a2, __int64 a3, int a4, unsigned int a5, __int64 a6)
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
  v8 = *(_DWORD *)(EtwpHostSiloState + 4520);
  v9 = !_BitScanForward((unsigned int *)&a3, v8);
  for ( i = 0; !v9; v9 = !_BitScanForward((unsigned int *)&a3, v8) )
  {
    v8 &= v8 - 1;
    LODWORD(v10) = 32 * a3;
    v11 = 32 * a3 + EtwpHostSiloState + 4556;
    if ( v11 )
    {
      v10 = v7 >> 29;
      if ( ((unsigned int)v7 & *(_DWORD *)(v11 + 4 * (v7 >> 29)) & 0x1FFFFFFF) != 0 )
      {
        v12 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * a3 + 4505) - 1LL;
        v14[1] = 8LL;
        v14[0] = a6 + 8 * v12;
        LODWORD(v10) = EtwpLogKernelEvent(
                         (__int64)v14,
                         EtwpHostSiloState,
                         *(unsigned __int8 *)(EtwpHostSiloState + 2 * a3 + 4504),
                         2u,
                         a1,
                         a5);
      }
    }
  }
  return v10;
}
