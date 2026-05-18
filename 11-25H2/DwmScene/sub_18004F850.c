/*
 * XREFs of sub_18004F850 @ 0x18004F850
 * Callers:
 *     sub_18004F130 @ 0x18004F130 (sub_18004F130.c)
 * Callees:
 *     sub_18004E740 @ 0x18004E740 (sub_18004E740.c)
 *     sub_18004E82C @ 0x18004E82C (sub_18004E82C.c)
 *     sub_18004E918 @ 0x18004E918 (sub_18004E918.c)
 *     sub_18004EA04 @ 0x18004EA04 (sub_18004EA04.c)
 *     sub_18004EAF0 @ 0x18004EAF0 (sub_18004EAF0.c)
 *     sub_18004EBDC @ 0x18004EBDC (sub_18004EBDC.c)
 *     sub_18004ECC8 @ 0x18004ECC8 (sub_18004ECC8.c)
 */

int __fastcall sub_18004F850(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 496;
  sub_18004EA04(a1 + 496);
  sub_18004E740(v1);
  sub_18004E918(v1);
  sub_18004ECC8(v1);
  sub_18004E82C(v1);
  sub_18004EBDC(v1);
  sub_18004EAF0(v1);
  return sub_18004EDB4(v1);
}
