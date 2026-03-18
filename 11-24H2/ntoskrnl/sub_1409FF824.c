/*
 * XREFs of sub_1409FF824 @ 0x1409FF824
 * Callers:
 *     sub_1408FB10C @ 0x1408FB10C (sub_1408FB10C.c)
 *     sub_1408FD018 @ 0x1408FD018 (sub_1408FD018.c)
 * Callees:
 *     SddlpFree @ 0x140863910 (SddlpFree.c)
 *     sub_1408FB1D0 @ 0x1408FB1D0 (sub_1408FB1D0.c)
 */

signed __int64 __fastcall sub_1409FF824(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
    if ( !v2 && (int)sub_1408FB1D0(a1, a2, -1) >= 0 )
    {
      SddlpFree(*(void **)(a2 + 24));
      SddlpFree((void *)a2);
    }
  }
  return v2;
}
