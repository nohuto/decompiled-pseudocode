/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x1403EB7E0
 * Callers:
 *     VfAvlLookupTreeNode @ 0x1403EB534 (VfAvlLookupTreeNode.c)
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x14060BED0 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1408D0B70 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlObjectEventCreate @ 0x1408D1380 (PiPnpRtlObjectEventCreate.c)
 *     PiDmAddCacheReferenceForObject @ 0x140968B58 (PiDmAddCacheReferenceForObject.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PiDmCompareObjects @ 0x14099C640 (PiDmCompareObjects.c)
 *     PnpCompareInstancePath @ 0x1409B9560 (PnpCompareInstancePath.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x140A01800 (PiPnpRtlObjectEventCompareObjects.c)
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
