/*
 * XREFs of KiAltReturnWorkerRoutine @ 0x1405C7360
 * Callers:
 *     <none>
 * Callees:
 *     ExInterlockedRemoveHeadList @ 0x1404209E0 (ExInterlockedRemoveHeadList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

PLIST_ENTRY __fastcall KiAltReturnWorkerRoutine(PLIST_ENTRY ListHead)
{
  _LIST_ENTRY *v1; // rbx
  KSPIN_LOCK *v2; // rdx
  PLIST_ENTRY result; // rax

  v1 = ListHead;
  v2 = (KSPIN_LOCK *)&ListHead[1];
  while ( 1 )
  {
    result = ExInterlockedRemoveHeadList(ListHead, v2);
    if ( !result )
      break;
    guard_dispatch_icall_no_overrides(v1, result);
    v2 = (KSPIN_LOCK *)&v1[1];
    ListHead = v1;
  }
  return result;
}
