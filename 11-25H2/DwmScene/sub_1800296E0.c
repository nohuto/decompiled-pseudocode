/*
 * XREFs of sub_1800296E0 @ 0x1800296E0
 * Callers:
 *     sub_18002A560 @ 0x18002A560 (sub_18002A560.c)
 *     sub_180033500 @ 0x180033500 (sub_180033500.c)
 *     sub_180034B90 @ 0x180034B90 (sub_180034B90.c)
 *     sub_18003606C @ 0x18003606C (sub_18003606C.c)
 *     sub_180052DEC @ 0x180052DEC (sub_180052DEC.c)
 *     sub_180053AB0 @ 0x180053AB0 (sub_180053AB0.c)
 *     sub_180053C04 @ 0x180053C04 (sub_180053C04.c)
 *     sub_1800D2638 @ 0x1800D2638 (sub_1800D2638.c)
 *     sub_1800D26B8 @ 0x1800D26B8 (sub_1800D26B8.c)
 * Callees:
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 */

__int64 __fastcall sub_1800296E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = 0;
  sub_180011B30(a2);
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
