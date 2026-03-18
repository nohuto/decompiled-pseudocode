/*
 * XREFs of IopLiveDumpAddTriageDumpData @ 0x1405949C0
 * Callers:
 *     <none>
 * Callees:
 *     KeValidateBugCheckCallbackRecord @ 0x1405AEFE0 (KeValidateBugCheckCallbackRecord.c)
 *     KiValidateComponentName @ 0x1405B0AF8 (KiValidateComponentName.c)
 *     KiValidateTriageDumpDataArray @ 0x1405B0BA0 (KiValidateTriageDumpDataArray.c)
 *     MmAddRangeToCrashDump @ 0x14066C040 (MmAddRangeToCrashDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IopLiveDumpAddTriageDumpData()
{
  PVOID *v0; // rbx
  PVOID *v2; // [rsp+B8h] [rbp+48h] BYREF

  v0 = (PVOID *)KeBugCheckReasonCallbackListHead;
  if ( KeBugCheckReasonCallbackListHead && qword_140F216E8 )
  {
    v2 = &KeBugCheckReasonCallbackListHead;
    while ( v0 != &KeBugCheckReasonCallbackListHead )
    {
      if ( (unsigned __int8)KeValidateBugCheckCallbackRecord(v0, 7LL, &v2) )
      {
        guard_dispatch_icall_no_overrides(7LL);
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
