/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x1403F1320
 * Callers:
 *     VfAvlLookupTreeNode @ 0x1403F1074 (VfAvlLookupTreeNode.c)
 *     PnpGetCurrentlyActiveWorkerThreadV2 @ 0x1405A5AB0 (PnpGetCurrentlyActiveWorkerThreadV2.c)
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x140617E90 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     PiDmAddCacheReferenceForObject @ 0x1408B4924 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventCreate @ 0x1408CB870 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1408CC2D0 (PiPnpRtlCacheObjectBaseKey.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PiDmCompareObjects @ 0x14099F010 (PiDmCompareObjects.c)
 *     PnpCompareInstancePath @ 0x1409AB010 (PnpCompareInstancePath.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1409FF8B0 (PiPnpRtlObjectEventCompareObjects.c)
 */

PVOID __stdcall RtlLookupElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  _RTL_BALANCED_LINKS *i; // rbx
  _RTL_GENERIC_COMPARE_RESULTS (__fastcall *CompareRoutine)(_RTL_AVL_TABLE *, void *, void *); // rax
  _RTL_BALANCED_LINKS *v10; // r8
  RTL_GENERIC_COMPARE_RESULTS v11; // eax

  if ( Table->NumberGenericTableElements )
  {
    for ( i = Table->BalancedRoot.RightChild; ; i = i->LeftChild )
    {
      while ( 1 )
      {
        CompareRoutine = Table->CompareRoutine;
        v10 = i + 1;
        if ( (char *)CompareRoutine == (char *)PiDmCompareObjects )
        {
          v11 = PiDmCompareObjects(Table, Buffer, v10);
        }
        else if ( (char *)CompareRoutine == (char *)PnpCompareInstancePath )
        {
          v11 = (unsigned int)PnpCompareInstancePath(Table, Buffer, v10);
        }
        else
        {
          v11 = (char *)CompareRoutine == (char *)PiPnpRtlObjectEventCompareObjects
              ? PiPnpRtlObjectEventCompareObjects(Table, Buffer, v10)
              : (unsigned int)guard_dispatch_icall_no_overrides(Table, Buffer, v10, SearchResult);
        }
        if ( v11 == GenericLessThan )
          break;
        if ( v11 != GenericGreaterThan )
        {
          *NodeOrParent = i;
          *SearchResult = TableFoundNode;
          return (char *)*NodeOrParent + 32;
        }
        if ( !i->RightChild )
        {
          *NodeOrParent = i;
          *SearchResult = TableInsertAsRight;
          return 0LL;
        }
        i = i->RightChild;
      }
      if ( !i->LeftChild )
        break;
    }
    *NodeOrParent = i;
    *SearchResult = TableInsertAsLeft;
  }
  else
  {
    *SearchResult = TableEmptyTree;
  }
  return 0LL;
}
