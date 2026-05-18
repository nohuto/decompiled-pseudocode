/*
 * XREFs of sub_1800572BC @ 0x1800572BC
 * Callers:
 *     sub_180059330 @ 0x180059330 (sub_180059330.c)
 * Callees:
 *     sub_180059A6C @ 0x180059A6C (sub_180059A6C.c)
 */

// local variable allocation has failed, the output may be wrong!
_OWORD *__fastcall sub_1800572BC(__int64 a1, double a2, double a3, double a4, unsigned int a5)
{
  __int128 v5; // xmm0
  _OWORD *v6; // r8
  _OWORD *result; // rax

  *((double *)&v5 + 1) = *(&a2 + 1);
  *(_QWORD *)a1 = 1065353216LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 20) = 1065353216LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 40) = 1065353216LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(double *)&v5 = sub_180059A6C();
  *v6 = v5;
  result = v6;
  v6[1] = *(_OWORD *)&a3;
  v6[2] = *(_OWORD *)&a4;
  v6[3] = a5;
  return result;
}
