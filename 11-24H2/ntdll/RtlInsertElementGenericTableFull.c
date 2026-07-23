/*
 * XREFs of RtlInsertElementGenericTableFull @ 0x1800B7E80
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlSplay @ 0x1800B80F0 (RtlSplay.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __cdecl RtlInsertElementGenericTableFull(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement,
        PVOID NodeOrParent,
        TABLE_SEARCH_RESULT SearchResult)
{
  size_t v7; // rbp
  PVOID (__cdecl *AllocateRoutine)(PVOID, ULONG, SIZE_T); // rax
  _QWORD *v11; // rax
  _RTL_SPLAY_LINKS *v12; // rbx
  _LIST_ENTRY *v13; // rax
  _LIST_ENTRY *Blink; // rdx

  v7 = BufferSize;
  if ( SearchResult == TableFoundNode )
  {
    v12 = (_RTL_SPLAY_LINKS *)NodeOrParent;
LABEL_16:
    Table->TableRoot = RtlSplay(v12);
    if ( NewElement )
      *NewElement = SearchResult != TableFoundNode;
    return &v12[1].RightChild;
  }
  if ( BufferSize + 40 >= BufferSize )
  {
    AllocateRoutine = (PVOID (__cdecl *)(PVOID, ULONG, SIZE_T))Table->AllocateRoutine;
    v11 = AllocateRoutine == RtlAllocateHeap
        ? RtlAllocateHeap(Table, BufferSize + 40, *(SIZE_T *)&BufferSize)
        : (_QWORD *)((__int64 (*)(void))AllocateRoutine)();
    v12 = (_RTL_SPLAY_LINKS *)v11;
    if ( v11 )
    {
      *v11 = v11;
      v11[1] = 0LL;
      v11[2] = 0LL;
      v13 = (_LIST_ENTRY *)(v11 + 3);
      Blink = Table->InsertOrderList.Blink;
      if ( Blink->Flink != &Table->InsertOrderList )
        __fastfail(3u);
      v13->Flink = &Table->InsertOrderList;
      v12[1].LeftChild = (_RTL_SPLAY_LINKS *)Blink;
      Blink->Flink = v13;
      Table->InsertOrderList.Blink = v13;
      ++Table->NumberGenericTableElements;
      if ( SearchResult )
      {
        if ( SearchResult == TableInsertAsLeft )
          *((_QWORD *)NodeOrParent + 1) = v12;
        else
          *((_QWORD *)NodeOrParent + 2) = v12;
        v12->Parent = (_RTL_SPLAY_LINKS *)NodeOrParent;
      }
      else
      {
        Table->TableRoot = v12;
      }
      memmove(&v12[1].RightChild, Buffer, v7);
      goto LABEL_16;
    }
  }
  if ( NewElement )
    *NewElement = 0;
  return 0LL;
}
