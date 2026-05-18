/*
 * XREFs of sub_18001C22C @ 0x18001C22C
 * Callers:
 *     sub_18001BB9C @ 0x18001BB9C (sub_18001BB9C.c)
 *     sub_180028D00 @ 0x180028D00 (sub_180028D00.c)
 *     sub_18002C55C @ 0x18002C55C (sub_18002C55C.c)
 *     sub_18002DF98 @ 0x18002DF98 (sub_18002DF98.c)
 *     sub_18004A8F8 @ 0x18004A8F8 (sub_18004A8F8.c)
 *     sub_18004A9EC @ 0x18004A9EC (sub_18004A9EC.c)
 * Callees:
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 */

__int64 __fastcall sub_18001C22C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180011A5C(v2 + 32);
  return sub_18001C1A8(a1);
}
