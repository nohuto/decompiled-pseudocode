/*
 * XREFs of sub_180054A5C @ 0x180054A5C
 * Callers:
 *     sub_1800547B0 @ 0x1800547B0 (sub_1800547B0.c)
 *     sub_180056950 @ 0x180056950 (sub_180056950.c)
 * Callees:
 *     sub_1800544FC @ 0x1800544FC (sub_1800544FC.c)
 *     sub_180054B00 @ 0x180054B00 (sub_180054B00.c)
 */

__int64 __fastcall sub_180054A5C(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 i; // rbx
  __int64 v4; // r8

  v2 = a2;
  for ( i = a1; v2; v2 = v4 - 1 )
  {
    sub_180054B00(a1, i, v2);
    i += 48LL;
  }
  sub_1800544FC(i, i);
  return i;
}
