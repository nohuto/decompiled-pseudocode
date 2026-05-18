/*
 * XREFs of sub_18005E49C @ 0x18005E49C
 * Callers:
 *     sub_180062230 @ 0x180062230 (sub_180062230.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180037818 @ 0x180037818 (sub_180037818.c)
 *     sub_180038490 @ 0x180038490 (sub_180038490.c)
 *     sub_1800386B0 @ 0x1800386B0 (sub_1800386B0.c)
 *     sub_180038EA0 @ 0x180038EA0 (sub_180038EA0.c)
 *     __alloca_probe @ 0x1800D4DE0 (__alloca_probe.c)
 */

void __fastcall sub_18005E49C(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 v5[514]; // [rsp+30h] [rbp-1028h] BYREF

  v4 = ((char *)a2 - (char *)a1) >> 4;
  if ( v4 > 32 )
  {
    sub_180037818(v5, v4 - v4 / 2);
    sub_1800386B0(a1, a2, v4, v5[0], v5[1], (unsigned __int8 (__fastcall *)(__int64, unsigned __int64))sub_180060050);
    sub_180038EA0((__int64)v5);
  }
  else
  {
    sub_180038490(a1, a2, (__int64 (__fastcall *)(__int64 *, __int64 *))sub_180060050);
  }
}
