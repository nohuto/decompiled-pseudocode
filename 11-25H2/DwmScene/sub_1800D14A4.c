/*
 * XREFs of sub_1800D14A4 @ 0x1800D14A4
 * Callers:
 *     sub_1800CDC98 @ 0x1800CDC98 (sub_1800CDC98.c)
 *     sub_1800CF92C @ 0x1800CF92C (sub_1800CF92C.c)
 *     sub_1800D0150 @ 0x1800D0150 (sub_1800D0150.c)
 * Callees:
 *     sub_18003FD80 @ 0x18003FD80 (sub_18003FD80.c)
 *     sub_1800CFAB8 @ 0x1800CFAB8 (sub_1800CFAB8.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D14A4(__int64 a1)
{
  __int64 v2; // rdi

  *(_DWORD *)a1 = 5;
  *(_OWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 7LL;
  *(_WORD *)(a1 + 8) = 0;
  v2 = a1 + 64;
  *(_DWORD *)(a1 + 64) = 0;
  sub_1800CFAB8((_QWORD *)(a1 + 72));
  *(_QWORD *)(v2 + 24) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 48) = 7LL;
  *(_QWORD *)(v2 + 56) = 8LL;
  *(_DWORD *)v2 = 1065353216;
  sub_18003FD80(v2 + 24, 0x10uLL, *(_QWORD *)(v2 + 8));
  return a1;
}
