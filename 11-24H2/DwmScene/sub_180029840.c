/*
 * XREFs of sub_180029840 @ 0x180029840
 * Callers:
 *     sub_18002A6C0 @ 0x18002A6C0 (sub_18002A6C0.c)
 *     sub_180033660 @ 0x180033660 (sub_180033660.c)
 *     sub_180034CF0 @ 0x180034CF0 (sub_180034CF0.c)
 *     sub_1800361CC @ 0x1800361CC (sub_1800361CC.c)
 *     sub_180052F4C @ 0x180052F4C (sub_180052F4C.c)
 *     sub_180053C10 @ 0x180053C10 (sub_180053C10.c)
 *     sub_180053D64 @ 0x180053D64 (sub_180053D64.c)
 *     sub_1800D2798 @ 0x1800D2798 (sub_1800D2798.c)
 *     sub_1800D2818 @ 0x1800D2818 (sub_1800D2818.c)
 * Callees:
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 */

__int64 __fastcall sub_180029840(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = 0;
  sub_180011C30(a2);
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
