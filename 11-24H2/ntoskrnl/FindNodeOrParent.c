/*
 * XREFs of FindNodeOrParent @ 0x1403EA460
 * Callers:
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1403EA1D0 (RtlEnumerateGenericTableLikeADirectory.c)
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x1403EA3C0 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PiDmCompareObjects @ 0x14099F010 (PiDmCompareObjects.c)
 *     PnpCompareInstancePath @ 0x1409AB010 (PnpCompareInstancePath.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1409FF8B0 (PiPnpRtlObjectEventCompareObjects.c)
 */

__int64 __fastcall FindNodeOrParent(
        struct _RTL_AVL_TABLE *Table,
        PVOID FirstStruct,
        _RTL_BALANCED_LINKS **a3,
        __int64 a4)
{
  _RTL_BALANCED_LINKS *i; // rbx
  _RTL_GENERIC_COMPARE_RESULTS (__fastcall *CompareRoutine)(_RTL_AVL_TABLE *, void *, void *); // rax
  _RTL_BALANCED_LINKS *v9; // r8
  RTL_GENERIC_COMPARE_RESULTS v10; // eax
  __int64 result; // rax

  if ( !Table->NumberGenericTableElements )
    return 0LL;
  for ( i = Table->BalancedRoot.RightChild; ; i = i->LeftChild )
  {
    while ( 1 )
    {
      CompareRoutine = Table->CompareRoutine;
      v9 = i + 1;
      if ( (char *)CompareRoutine == (char *)PiDmCompareObjects )
      {
        v10 = PiDmCompareObjects(Table, FirstStruct, v9);
      }
      else if ( (char *)CompareRoutine == (char *)PnpCompareInstancePath )
      {
        v10 = (unsigned int)PnpCompareInstancePath(Table, FirstStruct, v9);
      }
      else
      {
        v10 = (char *)CompareRoutine == (char *)PiPnpRtlObjectEventCompareObjects
            ? PiPnpRtlObjectEventCompareObjects(Table, FirstStruct, v9)
            : (unsigned int)guard_dispatch_icall_no_overrides(Table, FirstStruct, v9, a4);
      }
      if ( v10 == GenericLessThan )
        break;
      if ( v10 != GenericGreaterThan )
      {
        result = 1LL;
        goto LABEL_14;
      }
      if ( !i->RightChild )
      {
        result = 3LL;
        goto LABEL_14;
      }
      i = i->RightChild;
    }
    if ( !i->LeftChild )
      break;
  }
  result = 2LL;
LABEL_14:
  *a3 = i;
  return result;
}
