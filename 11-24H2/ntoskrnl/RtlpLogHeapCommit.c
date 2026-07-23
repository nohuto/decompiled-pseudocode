/*
 * XREFs of RtlpLogHeapCommit @ 0x1404F65E4
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x14035E15C (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegPageRangeCommit @ 0x14035F6F0 (RtlpHpSegPageRangeCommit.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapCommit(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v5[3]; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  _QWORD *v8; // [rsp+50h] [rbp-28h] BYREF
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]

  v7 = 0;
  v8 = v5;
  v10 = 0;
  v5[0] = a1;
  v5[1] = a2;
  v5[2] = a3;
  v6 = a4;
  v9 = 32;
  return EtwTraceKernelEvent((int)&v8, 1, 0x40000020u, 4147, 273684738);
}
