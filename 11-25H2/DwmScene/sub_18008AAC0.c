/*
 * XREFs of sub_18008AAC0 @ 0x18008AAC0
 * Callers:
 *     sub_18008ADA0 @ 0x18008ADA0 (sub_18008ADA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180037818 @ 0x180037818 (sub_180037818.c)
 *     sub_180038EA0 @ 0x180038EA0 (sub_180038EA0.c)
 *     sub_18008A608 @ 0x18008A608 (sub_18008A608.c)
 *     sub_18008A748 @ 0x18008A748 (sub_18008A748.c)
 *     __alloca_probe @ 0x1800D4DE0 (__alloca_probe.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18008AAC0(char *a1, float *a2, char a3)
{
  __int64 v6; // rbp
  void *v7[514]; // [rsp+30h] [rbp-1028h] BYREF

  v6 = ((char *)a2 - a1) >> 4;
  if ( v6 > 32 )
  {
    sub_180037818(v7, v6 - v6 / 2);
    sub_18008A748(a1, a2, v6, v7[0], (__int64)v7[1], a3);
    sub_180038EA0((__int64)v7);
  }
  else
  {
    sub_18008A608(a1, (char *)a2);
  }
}
