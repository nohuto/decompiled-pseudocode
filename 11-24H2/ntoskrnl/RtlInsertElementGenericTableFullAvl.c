/*
 * XREFs of RtlInsertElementGenericTableFullAvl @ 0x1403E48E0
 * Callers:
 *     PiDmAddCacheReferenceForObject @ 0x1408B2214 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventCreate @ 0x1408C92A0 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1408C9D00 (PiPnpRtlCacheObjectBaseKey.c)
 * Callees:
 *     RebalanceNode @ 0x1403E4A70 (RebalanceNode.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PiPnpRtlOperationAllocateGenericTableEntry @ 0x140A1B2D0 (PiPnpRtlOperationAllocateGenericTableEntry.c)
 *     SshpCacheDatabaseAllocate @ 0x140A5CB30 (SshpCacheDatabaseAllocate.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 */

PVOID __stdcall RtlInsertElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement,
        PVOID NodeOrParent,
        TABLE_SEARCH_RESULT SearchResult)
{
  size_t v7; // rsi
  SIZE_T v10; // rdx
  void *(__fastcall *AllocateRoutine)(_RTL_AVL_TABLE *, unsigned int); // rax
  _RTL_BALANCED_LINKS *GenericTableEntry; // rax
  char *v13; // rdi
  _RTL_BALANCED_LINKS *v14; // rcx
  _RTL_BALANCED_LINKS *v15; // r8
  _RTL_BALANCED_LINKS *i; // rdx
  bool v17; // zf
  char v18; // al
  char Balance; // dl

  v7 = BufferSize;
  if ( SearchResult == TableFoundNode )
  {
    v13 = (char *)NodeOrParent;
LABEL_18:
    if ( NewElement )
      *NewElement = SearchResult != TableFoundNode;
    Table->WhichOrderedElement = 0;
    Table->OrderedPointer = 0LL;
    return v13 + 32;
  }
  v10 = BufferSize + 32;
  if ( (unsigned int)v10 >= BufferSize )
  {
    AllocateRoutine = Table->AllocateRoutine;
    if ( (char *)AllocateRoutine == (char *)PiPnpRtlOperationAllocateGenericTableEntry )
    {
      GenericTableEntry = (_RTL_BALANCED_LINKS *)PiPnpRtlOperationAllocateGenericTableEntry(Table, v10);
    }
    else if ( (char *)AllocateRoutine == (char *)SshpCacheDatabaseAllocate )
    {
      GenericTableEntry = (_RTL_BALANCED_LINKS *)SshpCacheDatabaseAllocate(Table, v10);
    }
    else
    {
      GenericTableEntry = (char *)AllocateRoutine == (char *)ExAllocatePoolWithTag
                        ? (_RTL_BALANCED_LINKS *)ExAllocatePoolWithTag((POOL_TYPE)Table, v10, BufferSize)
                        : (_RTL_BALANCED_LINKS *)guard_dispatch_icall_no_overrides(Table, v10);
    }
    v13 = (char *)GenericTableEntry;
    if ( GenericTableEntry )
    {
      *(_OWORD *)&GenericTableEntry->Parent = 0LL;
      *(_OWORD *)&GenericTableEntry->RightChild = 0LL;
      ++Table->NumberGenericTableElements;
      if ( SearchResult )
      {
        v14 = (_RTL_BALANCED_LINKS *)NodeOrParent;
        v15 = GenericTableEntry;
        if ( SearchResult == TableInsertAsLeft )
          *((_QWORD *)NodeOrParent + 1) = GenericTableEntry;
        else
          *((_QWORD *)NodeOrParent + 2) = GenericTableEntry;
        GenericTableEntry->Parent = (_RTL_BALANCED_LINKS *)NodeOrParent;
        Table->BalancedRoot.Balance = -1;
        for ( i = GenericTableEntry->Parent; ; v14 = i )
        {
          v17 = i->LeftChild == v15;
          v18 = -1;
          Balance = v14->Balance;
          if ( !v17 )
            v18 = 1;
          if ( Balance )
            break;
          i = v14->Parent;
          v15 = v14;
          v14->Balance = v18;
        }
        if ( Balance == v18 )
        {
          RebalanceNode(v14);
        }
        else
        {
          v14->Balance = 0;
          if ( !Table->BalancedRoot.Balance )
            ++Table->DepthOfTree;
        }
      }
      else
      {
        Table->BalancedRoot.RightChild = GenericTableEntry;
        GenericTableEntry->Parent = &Table->BalancedRoot;
        Table->DepthOfTree = 1;
      }
      memmove(v13 + 32, Buffer, v7);
      goto LABEL_18;
    }
  }
  if ( NewElement )
    *NewElement = 0;
  return 0LL;
}
