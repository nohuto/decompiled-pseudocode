/*
 * XREFs of RtlpLogHeapDecommit @ 0x1404F6564
 * Callers:
 *     RtlpHpSegPageRangeCommit @ 0x14035F6F0 (RtlpHpSegPageRangeCommit.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapDecommit(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[3]; // [rsp+30h] [rbp-48h] BYREF
  int v5; // [rsp+48h] [rbp-30h]
  int v6; // [rsp+4Ch] [rbp-2Ch]
  _QWORD *v7; // [rsp+50h] [rbp-28h] BYREF
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v6 = 0;
  v7 = v4;
  v9 = 0;
  v4[0] = a1;
  v4[1] = a2;
  v4[2] = a3;
  v5 = 13;
  v8 = 32;
  return EtwTraceKernelEvent((int)&v7, 1, 0x40000020u, 4148, 273684738);
}
