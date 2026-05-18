/*
 * XREFs of sub_18008AC20 @ 0x18008AC20
 * Callers:
 *     sub_18008AF00 @ 0x18008AF00 (sub_18008AF00.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180037978 @ 0x180037978 (sub_180037978.c)
 *     sub_180039000 @ 0x180039000 (sub_180039000.c)
 *     sub_18008A768 @ 0x18008A768 (sub_18008A768.c)
 *     sub_18008A8A8 @ 0x18008A8A8 (sub_18008A8A8.c)
 *     __alloca_probe @ 0x1800D4F40 (__alloca_probe.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18008AC20(char *a1, float *a2, char a3)
{
  __int64 v6; // rbp
  void *v7[514]; // [rsp+30h] [rbp-1028h] BYREF

  v6 = ((char *)a2 - a1) >> 4;
  if ( v6 > 32 )
  {
    sub_180037978(v7, v6 - v6 / 2);
    sub_18008A8A8(a1, a2, v6, v7[0], (__int64)v7[1], a3);
    sub_180039000((__int64)v7);
  }
  else
  {
    sub_18008A768(a1, (char *)a2);
  }
}
