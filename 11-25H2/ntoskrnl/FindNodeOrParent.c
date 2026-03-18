/*
 * XREFs of FindNodeOrParent @ 0x1403E1010
 * Callers:
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1403E0D80 (RtlEnumerateGenericTableLikeADirectory.c)
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x1403E0F70 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PiDmCompareObjects @ 0x14099C640 (PiDmCompareObjects.c)
 *     PnpCompareInstancePath @ 0x1409B9560 (PnpCompareInstancePath.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x140A01800 (PiPnpRtlObjectEventCompareObjects.c)
 */

__int64 __fastcall FindNodeOrParent(struct _RTL_AVL_TABLE *Table, PVOID FirstStruct, _RTL_BALANCED_LINKS **a3)
{
  _RTL_BALANCED_LINKS *i; // rbx
  _RTL_GENERIC_COMPARE_RESULTS (__fastcall *CompareRoutine)(_RTL_AVL_TABLE *, void *, void *); // rax
  _RTL_BALANCED_LINKS *v8; // r8
  RTL_GENERIC_COMPARE_RESULTS v9; // eax
  __int64 result; // rax

  if ( !Table->NumberGenericTableElements )
    return 0LL;
  for ( i = Table->BalancedRoot.RightChild; ; i = i->LeftChild )
  {
    while ( 1 )
    {
      CompareRoutine = Table->CompareRoutine;
      v8 = i + 1;
      if ( (char *)CompareRoutine == (char *)PiDmCompareObjects )
      {
        v9 = PiDmCompareObjects(Table, FirstStruct, v8);
      }
      else if ( (char *)CompareRoutine == (char *)PnpCompareInstancePath )
      {
        v9 = (unsigned int)PnpCompareInstancePath(Table, FirstStruct, v8);
      }
      else
      {
        v9 = (char *)CompareRoutine == (char *)PiPnpRtlObjectEventCompareObjects
           ? PiPnpRtlObjectEventCompareObjects(Table, FirstStruct, v8)
           : (unsigned int)guard_dispatch_icall_no_overrides(Table, FirstStruct);
      }
      if ( v9 == GenericLessThan )
        break;
      if ( v9 != GenericGreaterThan )
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
