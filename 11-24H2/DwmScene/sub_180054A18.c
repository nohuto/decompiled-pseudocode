/*
 * XREFs of sub_180054A18 @ 0x180054A18
 * Callers:
 *     sub_18005453C @ 0x18005453C (sub_18005453C.c)
 *     sub_1800547B0 @ 0x1800547B0 (sub_1800547B0.c)
 * Callees:
 *     sub_1800544FC @ 0x1800544FC (sub_1800544FC.c)
 *     sub_180054B40 @ 0x180054B40 (sub_180054B40.c)
 */

__int64 __fastcall sub_180054A18(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 i; // r9
  __int64 v6; // r8

  v4 = a1;
  for ( i = a2; v4 != i; v4 = v6 + 48 )
  {
    sub_180054B40(a1, a3, v4, i);
    a3 += 48LL;
  }
  sub_1800544FC(a3, a3);
  return a3;
}
