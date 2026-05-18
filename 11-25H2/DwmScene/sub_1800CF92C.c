/*
 * XREFs of sub_1800CF92C @ 0x1800CF92C
 * Callers:
 *     sub_1800CF540 @ 0x1800CF540 (sub_1800CF540.c)
 *     sub_1800D1394 @ 0x1800D1394 (sub_1800D1394.c)
 * Callees:
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_1800D14A4 @ 0x1800D14A4 (sub_1800D14A4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CF92C(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  sub_180012344(a2, *a4);
  return sub_1800D14A4(a2 + 32);
}
