/*
 * XREFs of sub_1800548B8 @ 0x1800548B8
 * Callers:
 *     sub_1800543DC @ 0x1800543DC (sub_1800543DC.c)
 *     sub_180054650 @ 0x180054650 (sub_180054650.c)
 * Callees:
 *     sub_18005439C @ 0x18005439C (sub_18005439C.c)
 *     sub_1800549E0 @ 0x1800549E0 (sub_1800549E0.c)
 */

__int64 __fastcall sub_1800548B8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 i; // r9
  __int64 v6; // r8

  v4 = a1;
  for ( i = a2; v4 != i; v4 = v6 + 48 )
  {
    sub_1800549E0(a1, a3, v4, i);
    a3 += 48LL;
  }
  sub_18005439C(a3, a3);
  return a3;
}
