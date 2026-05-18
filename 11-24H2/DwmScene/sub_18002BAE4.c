/*
 * XREFs of sub_18002BAE4 @ 0x18002BAE4
 * Callers:
 *     sub_1800354B8 @ 0x1800354B8 (sub_1800354B8.c)
 *     sub_1800B9EF0 @ 0x1800B9EF0 (sub_1800B9EF0.c)
 * Callees:
 *     sub_18001E664 @ 0x18001E664 (sub_18001E664.c)
 */

__int64 __fastcall sub_18002BAE4(__int64 a1, __int64 a2, _WORD *a3)
{
  unsigned __int64 v4; // r8
  void **v6; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( a3[v4] );
  v6 = sub_18001E664(a2, a3, v4);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v6;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)v6 + 1);
  v6[2] = 0LL;
  v6[3] = (void *)7;
  *(_WORD *)v6 = 0;
  return a1;
}
