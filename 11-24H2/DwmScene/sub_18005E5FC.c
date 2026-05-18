/*
 * XREFs of sub_18005E5FC @ 0x18005E5FC
 * Callers:
 *     sub_180062390 @ 0x180062390 (sub_180062390.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180037978 @ 0x180037978 (sub_180037978.c)
 *     sub_1800385F0 @ 0x1800385F0 (sub_1800385F0.c)
 *     sub_180038810 @ 0x180038810 (sub_180038810.c)
 *     sub_180039000 @ 0x180039000 (sub_180039000.c)
 *     __alloca_probe @ 0x1800D4F40 (__alloca_probe.c)
 */

void __fastcall sub_18005E5FC(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 v5[514]; // [rsp+30h] [rbp-1028h] BYREF

  v4 = ((char *)a2 - (char *)a1) >> 4;
  if ( v4 > 32 )
  {
    sub_180037978(v5, v4 - v4 / 2);
    sub_180038810(a1, a2, v4, v5[0], v5[1], (unsigned __int8 (__fastcall *)(__int64, unsigned __int64))sub_1800601B0);
    sub_180039000((__int64)v5);
  }
  else
  {
    sub_1800385F0(a1, a2, (__int64 (__fastcall *)(__int64 *, __int64 *))sub_1800601B0);
  }
}
