/*
 * XREFs of sub_1800B5F4C @ 0x1800B5F4C
 * Callers:
 *     sub_1800B9D90 @ 0x1800B9D90 (sub_1800B9D90.c)
 * Callees:
 *     sub_18001E640 @ 0x18001E640 (sub_18001E640.c)
 */

__int64 __fastcall sub_1800B5F4C(__int64 a1, __int64 a2, void **a3)
{
  void **v4; // rax

  v4 = sub_18001E640(a3, a2, (__int64)a3, 3uLL);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v4;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)v4 + 1);
  v4[2] = 0LL;
  v4[3] = (void *)7;
  *(_WORD *)v4 = 0;
  return a1;
}
