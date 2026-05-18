/*
 * XREFs of sub_18004B78C @ 0x18004B78C
 * Callers:
 *     sub_18004A390 @ 0x18004A390 (sub_18004A390.c)
 *     sub_18004A458 @ 0x18004A458 (sub_18004A458.c)
 *     sub_18005DC9C @ 0x18005DC9C (sub_18005DC9C.c)
 * Callees:
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 */

__int64 __fastcall sub_18004B78C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180011B5C(v2 + 32);
  return sub_180024584(a1);
}
