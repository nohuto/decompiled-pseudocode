/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x1403E5040
 * Callers:
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     PnpGetCurrentlyActiveWorkerThread @ 0x1405A2990 (PnpGetCurrentlyActiveWorkerThread.c)
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x140616450 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     PiDmAddCacheReferenceForObject @ 0x1408B2214 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventCreate @ 0x1408C92A0 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1408C9D00 (PiPnpRtlCacheObjectBaseKey.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PiDmCompareObjects @ 0x140987790 (PiDmCompareObjects.c)
 *     PnpCompareInstancePath @ 0x140994780 (PnpCompareInstancePath.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1409F8800 (PiPnpRtlObjectEventCompareObjects.c)
 */

PVOID __stdcall RtlLookupElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  _RTL_BALANCED_LINKS *i; // rbx
  RTL_GENERIC_COMPARE_RESULTS (__cdecl *CompareRoutine)(_RTL_AVL_TABLE *, PVOID, PVOID); // rax
  _RTL_BALANCED_LINKS *v10; // r8
  RTL_GENERIC_COMPARE_RESULTS v11; // eax

  if ( Table->NumberGenericTableElements )
  {
    for ( i = Table->BalancedRoot.RightChild; ; i = i->LeftChild )
    {
      while ( 1 )
      {
        CompareRoutine = (RTL_GENERIC_COMPARE_RESULTS (__cdecl *)(_RTL_AVL_TABLE *, PVOID, PVOID))Table->CompareRoutine;
        v10 = i + 1;
        if ( CompareRoutine == PiDmCompareObjects )
        {
          v11 = PiDmCompareObjects(Table, Buffer, v10);
        }
        else if ( (char *)CompareRoutine == (char *)PnpCompareInstancePath )
        {
          v11 = (unsigned int)PnpCompareInstancePath(Table, Buffer, v10);
        }
        else
        {
          v11 = CompareRoutine == PiPnpRtlObjectEventCompareObjects
              ? PiPnpRtlObjectEventCompareObjects(Table, Buffer, v10)
              : (unsigned int)guard_dispatch_icall_no_overrides(Table, Buffer);
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
