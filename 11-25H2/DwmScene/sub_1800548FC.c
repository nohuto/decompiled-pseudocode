/*
 * XREFs of sub_1800548FC @ 0x1800548FC
 * Callers:
 *     sub_180054650 @ 0x180054650 (sub_180054650.c)
 *     sub_1800567F0 @ 0x1800567F0 (sub_1800567F0.c)
 * Callees:
 *     sub_18005439C @ 0x18005439C (sub_18005439C.c)
 *     sub_1800549A0 @ 0x1800549A0 (sub_1800549A0.c)
 */

__int64 __fastcall sub_1800548FC(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 i; // rbx
  __int64 v4; // r8

  v2 = a2;
  for ( i = a1; v2; v2 = v4 - 1 )
  {
    sub_1800549A0(a1, i, v2);
    i += 48LL;
  }
  sub_18005439C(i, i);
  return i;
}
