/*
 * XREFs of sub_18003CF64 @ 0x18003CF64
 * Callers:
 *     sub_18003D454 @ 0x18003D454 (sub_18003D454.c)
 *     sub_18003D494 @ 0x18003D494 (sub_18003D494.c)
 *     sub_18004A808 @ 0x18004A808 (sub_18004A808.c)
 *     sub_18004B2D4 @ 0x18004B2D4 (sub_18004B2D4.c)
 *     sub_18006939C @ 0x18006939C (sub_18006939C.c)
 * Callees:
 *     sub_1800119FC @ 0x1800119FC (sub_1800119FC.c)
 */

__int64 __fastcall sub_18003CF64(unsigned __int64 a1)
{
  if ( a1 > 0x333333333333333LL )
    sub_1800119FC();
  return 80 * a1;
}
