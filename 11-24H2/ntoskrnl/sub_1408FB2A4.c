/*
 * XREFs of sub_1408FB2A4 @ 0x1408FB2A4
 * Callers:
 *     sub_1408F94D0 @ 0x1408F94D0 (sub_1408F94D0.c)
 *     sub_1408FBE0C @ 0x1408FBE0C (sub_1408FBE0C.c)
 *     sub_1408FCD58 @ 0x1408FCD58 (sub_1408FCD58.c)
 *     sub_1408FD018 @ 0x1408FD018 (sub_1408FD018.c)
 *     WbCreateHeapExecutedBlock @ 0x1408FDAD8 (WbCreateHeapExecutedBlock.c)
 *     WbHeapExecutionUnloadModule @ 0x140A50CFC (WbHeapExecutionUnloadModule.c)
 * Callees:
 *     SddlpFree @ 0x140863910 (SddlpFree.c)
 *     sub_1408FB304 @ 0x1408FB304 (sub_1408FB304.c)
 */

signed __int64 __fastcall sub_1408FB2A4(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rdi

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 80));
    if ( !v2 )
    {
      if ( *(_QWORD *)(a2 + 40) )
      {
        sub_1408FB304(a1);
        *(_QWORD *)(a2 + 40) = 0LL;
        *(_QWORD *)(a2 + 24) = 0LL;
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_DWORD *)(a2 + 72) = 0;
      }
      SddlpFree((void *)a2);
    }
  }
  return v2;
}
