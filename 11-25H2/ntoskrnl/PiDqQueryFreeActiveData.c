/*
 * XREFs of PiDqQueryFreeActiveData @ 0x140839030
 * Callers:
 *     PiDqIrpQueryGetResult @ 0x140836400 (PiDqIrpQueryGetResult.c)
 *     PiDqIrpQueryCreate @ 0x140837A74 (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1408380E0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x14083856C (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryRelease @ 0x140839334 (PiDqQueryRelease.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140839434 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryAppendActionEntry @ 0x1408D1A38 (PiDqQueryAppendActionEntry.c)
 * Callees:
 *     RtlIsGenericTableEmptyAvl @ 0x14044F790 (RtlIsGenericTableEmptyAvl.c)
 *     PiDqQueryActionQueueEntryFree @ 0x140838C50 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x140838F48 (PiDqActionDataFree.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140839AA8 (PiDqQueryDeleteObjectFromResultSet.c)
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
