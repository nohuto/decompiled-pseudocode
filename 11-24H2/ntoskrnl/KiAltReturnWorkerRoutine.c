/*
 * XREFs of KiAltReturnWorkerRoutine @ 0x1405C9C30
 * Callers:
 *     <none>
 * Callees:
 *     ExInterlockedRemoveHeadList @ 0x14042ECB0 (ExInterlockedRemoveHeadList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

PLIST_ENTRY __fastcall KiAltReturnWorkerRoutine(PLIST_ENTRY ListHead)
{
  struct _LIST_ENTRY *v1; // rbx
  KSPIN_LOCK *v2; // rdx
  PLIST_ENTRY result; // rax
  __int64 v4; // r8
  __int64 v5; // r9

  v1 = ListHead;
  v2 = (KSPIN_LOCK *)&ListHead[1];
  while ( 1 )
  {
    result = ExInterlockedRemoveHeadList(ListHead, v2);
    if ( !result )
      break;
    guard_dispatch_icall_no_overrides(v1, result, v4, v5);
    v2 = (KSPIN_LOCK *)&v1[1];
    ListHead = v1;
  }
  return result;
}
