/*
 * XREFs of sub_1800D1604 @ 0x1800D1604
 * Callers:
 *     sub_1800CDDF8 @ 0x1800CDDF8 (sub_1800CDDF8.c)
 *     sub_1800CFA8C @ 0x1800CFA8C (sub_1800CFA8C.c)
 *     sub_1800D02B0 @ 0x1800D02B0 (sub_1800D02B0.c)
 * Callees:
 *     sub_18003FEE0 @ 0x18003FEE0 (sub_18003FEE0.c)
 *     sub_1800CFC18 @ 0x1800CFC18 (sub_1800CFC18.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D1604(__int64 a1)
{
  __int64 v2; // rdi

  *(_DWORD *)a1 = 5;
  *(_OWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 7LL;
  *(_WORD *)(a1 + 8) = 0;
  v2 = a1 + 64;
  *(_DWORD *)(a1 + 64) = 0;
  sub_1800CFC18((_QWORD *)(a1 + 72));
  *(_QWORD *)(v2 + 24) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 48) = 7LL;
  *(_QWORD *)(v2 + 56) = 8LL;
  *(_DWORD *)v2 = 1065353216;
  sub_18003FEE0(v2 + 24, 0x10uLL, *(_QWORD *)(v2 + 8));
  return a1;
}
