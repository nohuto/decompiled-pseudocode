/*
 * XREFs of RtlInsertElementGenericTableFullAvl @ 0x18008DDC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RebalanceNode @ 0x18008F1E0 (RebalanceNode.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __cdecl RtlInsertElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement,
        PVOID NodeOrParent,
        TABLE_SEARCH_RESULT SearchResult)
{
  size_t v7; // rbp
  void *(__fastcall *AllocateRoutine)(_RTL_AVL_TABLE *, unsigned int); // rax
  _RTL_BALANCED_LINKS *v11; // rax
  char *v12; // rbx
  _RTL_BALANCED_LINKS *v13; // rcx
  _RTL_BALANCED_LINKS *v14; // r8
  _RTL_BALANCED_LINKS *i; // rdx
  bool v16; // zf
  char v17; // al
  __int64 Balance; // rdx

  v7 = BufferSize;
  if ( SearchResult == TableFoundNode )
  {
    v12 = (char *)NodeOrParent;
LABEL_17:
    if ( NewElement )
      *NewElement = SearchResult != TableFoundNode;
    Table->WhichOrderedElement = 0;
    Table->OrderedPointer = 0LL;
    return v12 + 32;
  }
  if ( BufferSize + 32 >= BufferSize )
  {
    AllocateRoutine = Table->AllocateRoutine;
    v11 = (char *)AllocateRoutine == (char *)RtlAllocateHeap
        ? (_RTL_BALANCED_LINKS *)RtlAllocateHeap(Table, BufferSize + 32, *(SIZE_T *)&BufferSize)
        : (_RTL_BALANCED_LINKS *)((__int64 (*)(void))AllocateRoutine)();
    v12 = (char *)v11;
    if ( v11 )
    {
      *(_OWORD *)&v11->Parent = 0LL;
      *(_OWORD *)&v11->RightChild = 0LL;
      ++Table->NumberGenericTableElements;
      if ( SearchResult )
      {
        v13 = (_RTL_BALANCED_LINKS *)NodeOrParent;
        v14 = v11;
        if ( SearchResult == TableInsertAsLeft )
          *((_QWORD *)NodeOrParent + 1) = v11;
        else
          *((_QWORD *)NodeOrParent + 2) = v11;
        v11->Parent = (_RTL_BALANCED_LINKS *)NodeOrParent;
        Table->BalancedRoot.Balance = -1;
        for ( i = v11->Parent; ; v13 = i )
        {
          v16 = i->LeftChild == v14;
          v17 = -1;
          Balance = (unsigned __int8)v13->Balance;
          if ( !v16 )
            v17 = 1;
          if ( (_BYTE)Balance )
            break;
          i = v13->Parent;
          v14 = v13;
          v13->Balance = v17;
        }
        if ( (_BYTE)Balance == v17 )
        {
          RebalanceNode(v13, Balance, v14, 1LL);
        }
        else
        {
          v13->Balance = 0;
          if ( !Table->BalancedRoot.Balance )
            ++Table->DepthOfTree;
        }
      }
      else
      {
        Table->BalancedRoot.RightChild = v11;
        v11->Parent = &Table->BalancedRoot;
        Table->DepthOfTree = 1;
      }
      memmove(v12 + 32, Buffer, v7);
      goto LABEL_17;
    }
  }
  if ( NewElement )
    *NewElement = 0;
  return 0LL;
}
