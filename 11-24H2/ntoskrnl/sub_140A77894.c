/*
 * XREFs of sub_140A77894 @ 0x140A77894
 * Callers:
 *     sub_1408FD018 @ 0x1408FD018 (sub_1408FD018.c)
 * Callees:
 *     SddlpFree @ 0x140863910 (SddlpFree.c)
 */

void __fastcall sub_140A77894(__int64 a1)
{
  if ( a1 )
  {
    SddlpFree(*(void **)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
}
