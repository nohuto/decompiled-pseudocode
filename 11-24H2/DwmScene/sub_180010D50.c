/*
 * XREFs of sub_180010D50 @ 0x180010D50
 * Callers:
 *     sub_1800109F8 @ 0x1800109F8 (sub_1800109F8.c)
 *     sub_18001229C @ 0x18001229C (sub_18001229C.c)
 *     sub_18005DE1C @ 0x18005DE1C (sub_18005DE1C.c)
 *     sub_1800BFC34 @ 0x1800BFC34 (sub_1800BFC34.c)
 * Callees:
 *     sub_180011AFC @ 0x180011AFC (sub_180011AFC.c)
 */

__int64 __fastcall sub_180010D50(unsigned __int64 a1)
{
  if ( a1 > 0xFFFFFFFFFFFFFFFLL )
    sub_180011AFC();
  return 16 * a1;
}
