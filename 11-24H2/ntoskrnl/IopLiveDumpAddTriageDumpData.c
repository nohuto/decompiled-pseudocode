/*
 * XREFs of IopLiveDumpAddTriageDumpData @ 0x140595050
 * Callers:
 *     <none>
 * Callees:
 *     KeValidateBugCheckCallbackRecord @ 0x1405AF8E0 (KeValidateBugCheckCallbackRecord.c)
 *     KiValidateComponentName @ 0x1405B1424 (KiValidateComponentName.c)
 *     KiValidateTriageDumpDataArray @ 0x1405B14D0 (KiValidateTriageDumpDataArray.c)
 *     MmAddRangeToCrashDump @ 0x140678B70 (MmAddRangeToCrashDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IopLiveDumpAddTriageDumpData()
{
  PVOID *v0; // rbx
  PVOID *v2; // [rsp+B8h] [rbp+48h] BYREF

  v0 = (PVOID *)KeBugCheckReasonCallbackListHead;
  if ( KeBugCheckReasonCallbackListHead && qword_140F22318 )
  {
    v2 = &KeBugCheckReasonCallbackListHead;
    while ( v0 != &KeBugCheckReasonCallbackListHead )
    {
      if ( (unsigned __int8)KeValidateBugCheckCallbackRecord(v0, 7LL, &v2) )
      {
        guard_dispatch_icall_no_overrides(7LL, v0);
      }
      else if ( !v2 )
      {
        return 0LL;
      }
      v0 = (PVOID *)*v0;
    }
  }
  return 0LL;
}
