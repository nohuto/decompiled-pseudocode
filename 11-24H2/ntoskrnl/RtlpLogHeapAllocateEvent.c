/*
 * XREFs of RtlpLogHeapAllocateEvent @ 0x1405F08F8
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x140458A08 (RtlpHpMetadataAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x1404D2B7C (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapAllocateEvent(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v5[3]; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+48h] [rbp-30h]
  _QWORD *v7; // [rsp+50h] [rbp-28h] BYREF
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v5[0] = a1;
  v7 = v5;
  v9 = 0;
  v5[1] = a3;
  v5[2] = a2;
  v6 = a4;
  v8 = 28;
  return EtwTraceKernelEvent((int)&v7, 1, 0x40000020u, 4129, 273684738);
}
