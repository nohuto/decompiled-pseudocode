/*
 * XREFs of PiDqQueryFreeActiveData @ 0x1408D1670
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B237C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryAppendActionEntry @ 0x1408B26E0 (PiDqQueryAppendActionEntry.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1408D07C0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x1408D0C6C (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryRelease @ 0x1408D19A0 (PiDqQueryRelease.c)
 *     PiDqIrpQueryGetResult @ 0x1409F1D48 (PiDqIrpQueryGetResult.c)
 *     PiDqIrpQueryCreate @ 0x1409F2380 (PiDqIrpQueryCreate.c)
 * Callees:
 *     RtlIsGenericTableEmptyAvl @ 0x140446200 (RtlIsGenericTableEmptyAvl.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1408D1324 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x1408D161C (PiDqActionDataFree.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140A46BEC (PiDqQueryDeleteObjectFromResultSet.c)
 */

void __fastcall PiDqQueryFreeActiveData(__int64 a1)
{
  _RTL_AVL_TABLE *i; // rcx
  _QWORD **v3; // rdi
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax

  for ( i = (_RTL_AVL_TABLE *)(a1 + 72); !RtlIsGenericTableEmptyAvl(i); i = (_RTL_AVL_TABLE *)(a1 + 72) )
    PiDqQueryDeleteObjectFromResultSet(a1, *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL));
  v3 = (_QWORD **)(a1 + 192);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v6 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v6;
    v6[1] = v3;
    PiDqQueryActionQueueEntryFree(v4);
  }
  *(_DWORD *)(a1 + 208) = 0;
  v5 = *(_QWORD **)(a1 + 184);
  if ( v5 )
  {
    PiDqActionDataFree(v5);
    *(_QWORD *)(a1 + 184) = 0LL;
  }
}
