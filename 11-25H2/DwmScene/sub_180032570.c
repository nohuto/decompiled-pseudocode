/*
 * XREFs of sub_180032570 @ 0x180032570
 * Callers:
 *     sub_180031F90 @ 0x180031F90 (sub_180031F90.c)
 *     sub_1800324D4 @ 0x1800324D4 (sub_1800324D4.c)
 *     sub_180032634 @ 0x180032634 (sub_180032634.c)
 *     sub_18003279C @ 0x18003279C (sub_18003279C.c)
 *     sub_180033500 @ 0x180033500 (sub_180033500.c)
 *     sub_180033AB8 @ 0x180033AB8 (sub_180033AB8.c)
 *     sub_180034AC8 @ 0x180034AC8 (sub_180034AC8.c)
 * Callees:
 *     sub_180028424 @ 0x180028424 (sub_180028424.c)
 *     sub_18002869C @ 0x18002869C (sub_18002869C.c)
 */

__int64 __fastcall sub_180032570(__int64 a1)
{
  __int64 v2; // rdi
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18002869C(a1 + 112, (__int64)v4);
  v2 = (__int64)(*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) >> 4;
  sub_180028424((__int64)v4);
  return (unsigned int)v2;
}
