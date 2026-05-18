/*
 * XREFs of sub_18001C38C @ 0x18001C38C
 * Callers:
 *     sub_18001BCFC @ 0x18001BCFC (sub_18001BCFC.c)
 *     sub_180028E60 @ 0x180028E60 (sub_180028E60.c)
 *     sub_18002C6BC @ 0x18002C6BC (sub_18002C6BC.c)
 *     sub_18002E0F8 @ 0x18002E0F8 (sub_18002E0F8.c)
 *     sub_18004AA58 @ 0x18004AA58 (sub_18004AA58.c)
 *     sub_18004AB4C @ 0x18004AB4C (sub_18004AB4C.c)
 * Callees:
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 */

__int64 __fastcall sub_18001C38C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180011B5C(v2 + 32);
  return sub_18001C308(a1);
}
