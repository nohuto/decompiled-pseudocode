/*
 * XREFs of sub_180010C50 @ 0x180010C50
 * Callers:
 *     sub_1800108F8 @ 0x1800108F8 (sub_1800108F8.c)
 *     sub_18001219C @ 0x18001219C (sub_18001219C.c)
 *     sub_18005DCBC @ 0x18005DCBC (sub_18005DCBC.c)
 *     sub_1800BFAD4 @ 0x1800BFAD4 (sub_1800BFAD4.c)
 * Callees:
 *     sub_1800119FC @ 0x1800119FC (sub_1800119FC.c)
 */

__int64 __fastcall sub_180010C50(unsigned __int64 a1)
{
  if ( a1 > 0xFFFFFFFFFFFFFFFLL )
    sub_1800119FC();
  return 16 * a1;
}
