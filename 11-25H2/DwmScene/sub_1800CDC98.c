/*
 * XREFs of sub_1800CDC98 @ 0x1800CDC98
 * Callers:
 *     sub_1800CF900 @ 0x1800CF900 (sub_1800CF900.c)
 * Callees:
 *     sub_1800D14A4 @ 0x1800D14A4 (sub_1800D14A4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CDC98(__int64 a1, __int64 a2, __int64 *a3)
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
  sub_1800D14A4(a1 + 32);
  return a1;
}
