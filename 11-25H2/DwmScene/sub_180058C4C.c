/*
 * XREFs of sub_180058C4C @ 0x180058C4C
 * Callers:
 *     sub_180057AB0 @ 0x180057AB0 (sub_180057AB0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180014FA0 @ 0x180014FA0 (sub_180014FA0.c)
 *     sub_1800407EC @ 0x1800407EC (sub_1800407EC.c)
 */

_QWORD *__fastcall sub_180058C4C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // [rsp+28h] [rbp-20h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  sub_1800407EC(a1 + 8, &v4);
  sub_180014FA0(a2, (__int64)&v4, v4);
  if ( v5 )
    sub_18001050C(v5);
  return a2;
}
