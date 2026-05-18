/*
 * XREFs of sub_18002752C @ 0x18002752C
 * Callers:
 *     sub_18002755C @ 0x18002755C (sub_18002755C.c)
 *     sub_18002774C @ 0x18002774C (sub_18002774C.c)
 *     sub_18003D16C @ 0x18003D16C (sub_18003D16C.c)
 *     sub_18003D3D4 @ 0x18003D3D4 (sub_18003D3D4.c)
 *     sub_180040ABC @ 0x180040ABC (sub_180040ABC.c)
 *     sub_180040C9C @ 0x180040C9C (sub_180040C9C.c)
 *     sub_180078548 @ 0x180078548 (sub_180078548.c)
 *     sub_18007ADF4 @ 0x18007ADF4 (sub_18007ADF4.c)
 *     sub_18007B03C @ 0x18007B03C (sub_18007B03C.c)
 *     sub_1800955DC @ 0x1800955DC (sub_1800955DC.c)
 *     sub_18009561C @ 0x18009561C (sub_18009561C.c)
 *     sub_1800B84DC @ 0x1800B84DC (sub_1800B84DC.c)
 * Callees:
 *     sub_1800119FC @ 0x1800119FC (sub_1800119FC.c)
 */

__int64 __fastcall sub_18002752C(unsigned __int64 a1)
{
  if ( a1 > 0x666666666666666LL )
    sub_1800119FC();
  return 40 * a1;
}
