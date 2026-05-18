/*
 * XREFs of sub_1800BD660 @ 0x1800BD660
 * Callers:
 *     sub_1800BE290 @ 0x1800BE290 (sub_1800BE290.c)
 *     sub_1800BE640 @ 0x1800BE640 (sub_1800BE640.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800B9A04 @ 0x1800B9A04 (sub_1800B9A04.c)
 *     sub_1800BD804 @ 0x1800BD804 (sub_1800BD804.c)
 */

_QWORD *__fastcall sub_1800BD660(__int64 a1, _QWORD *a2)
{
  __int64 v4; // [rsp+28h] [rbp-20h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  sub_1800BD804(a1, &v4);
  if ( v4 )
  {
    sub_1800B9A04(v4, a2);
    if ( v5 )
      sub_18001050C(v5);
  }
  else
  {
    if ( v5 )
      sub_18001050C(v5);
    *a2 = 0LL;
  }
  return a2;
}
