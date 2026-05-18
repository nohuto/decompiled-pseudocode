/*
 * XREFs of sub_1800173FC @ 0x1800173FC
 * Callers:
 *     sub_180015670 @ 0x180015670 (sub_180015670.c)
 *     sub_18001575C @ 0x18001575C (sub_18001575C.c)
 *     sub_180015880 @ 0x180015880 (sub_180015880.c)
 *     sub_180017428 @ 0x180017428 (sub_180017428.c)
 *     sub_180024874 @ 0x180024874 (sub_180024874.c)
 *     sub_18003017C @ 0x18003017C (sub_18003017C.c)
 *     sub_1800D5AF2 @ 0x1800D5AF2 (sub_1800D5AF2.c)
 *     sub_1800D6365 @ 0x1800D6365 (sub_1800D6365.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_1800173FC(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
    sub_18001060C(v2);
  return sub_18001AA80(a1 + 48);
}
