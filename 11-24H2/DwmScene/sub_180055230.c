/*
 * XREFs of sub_180055230 @ 0x180055230
 * Callers:
 *     sub_180054878 @ 0x180054878 (sub_180054878.c)
 * Callees:
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 */

__int64 __fastcall sub_180055230(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180011B5C(v2 + 40);
  return sub_180029C3C(a1);
}
