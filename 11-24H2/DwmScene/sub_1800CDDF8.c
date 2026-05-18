/*
 * XREFs of sub_1800CDDF8 @ 0x1800CDDF8
 * Callers:
 *     sub_1800CFA60 @ 0x1800CFA60 (sub_1800CFA60.c)
 * Callees:
 *     sub_1800D1604 @ 0x1800D1604 (sub_1800D1604.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CDDF8(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax

  v4 = *a3;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v4;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_QWORD *)(v4 + 24) = 7LL;
  *(_WORD *)v4 = 0;
  sub_1800D1604(a1 + 32);
  return a1;
}
