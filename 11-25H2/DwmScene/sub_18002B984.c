/*
 * XREFs of sub_18002B984 @ 0x18002B984
 * Callers:
 *     sub_180035358 @ 0x180035358 (sub_180035358.c)
 *     sub_1800B9D90 @ 0x1800B9D90 (sub_1800B9D90.c)
 * Callees:
 *     sub_18001E504 @ 0x18001E504 (sub_18001E504.c)
 */

__int64 __fastcall sub_18002B984(__int64 a1, __int64 a2, _WORD *a3)
{
  unsigned __int64 v4; // r8
  void **v6; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( a3[v4] );
  v6 = sub_18001E504(a2, a3, v4);
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
