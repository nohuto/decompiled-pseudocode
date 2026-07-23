/*
 * XREFs of FindNodeOrParent @ 0x1403D9E20
 * Callers:
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1403D9B90 (RtlEnumerateGenericTableLikeADirectory.c)
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x1403D9D80 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PiDmCompareObjects @ 0x140987790 (PiDmCompareObjects.c)
 *     PnpCompareInstancePath @ 0x140994780 (PnpCompareInstancePath.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1409F8800 (PiPnpRtlObjectEventCompareObjects.c)
 */

__int64 __fastcall FindNodeOrParent(_RTL_AVL_TABLE *a1, PVOID a2, _RTL_BALANCED_LINKS **a3)
{
  _RTL_BALANCED_LINKS *i; // rbx
  RTL_GENERIC_COMPARE_RESULTS (__cdecl *CompareRoutine)(_RTL_AVL_TABLE *, PVOID, PVOID); // rax
  _RTL_BALANCED_LINKS *v8; // r8
  RTL_GENERIC_COMPARE_RESULTS v9; // eax
  __int64 result; // rax

  if ( !a1->NumberGenericTableElements )
    return 0LL;
  for ( i = a1->BalancedRoot.RightChild; ; i = i->LeftChild )
  {
    while ( 1 )
    {
      CompareRoutine = (RTL_GENERIC_COMPARE_RESULTS (__cdecl *)(_RTL_AVL_TABLE *, PVOID, PVOID))a1->CompareRoutine;
      v8 = i + 1;
      if ( CompareRoutine == PiDmCompareObjects )
      {
        v9 = PiDmCompareObjects(a1, a2, v8);
      }
      else if ( (char *)CompareRoutine == (char *)PnpCompareInstancePath )
      {
        v9 = (unsigned int)PnpCompareInstancePath(a1, a2, v8);
      }
      else
      {
        v9 = CompareRoutine == PiPnpRtlObjectEventCompareObjects
           ? PiPnpRtlObjectEventCompareObjects(a1, a2, v8)
           : (unsigned int)guard_dispatch_icall_no_overrides(a1, a2);
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
