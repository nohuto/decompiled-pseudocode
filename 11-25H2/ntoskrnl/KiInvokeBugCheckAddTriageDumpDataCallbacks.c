/*
 * XREFs of KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1405B054C
 * Callers:
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 * Callees:
 *     Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsageNoInline @ 0x1405ADC78 (Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsageNoInline.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1405AEFE0 (KeValidateBugCheckCallbackRecord.c)
 *     KiDeduplicateTriageDumpDataArrays @ 0x1405AFD10 (KiDeduplicateTriageDumpDataArrays.c)
 *     KiValidateComponentName @ 0x1405B0AF8 (KiValidateComponentName.c)
 *     KiValidateTriageDumpDataArray @ 0x1405B0BA0 (KiValidateTriageDumpDataArray.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char KiInvokeBugCheckAddTriageDumpDataCallbacks()
{
  char result; // al
  PVOID *v1; // rbx
  PVOID *v2; // [rsp+A8h] [rbp+10h] BYREF
  PVOID *v3; // [rsp+B0h] [rbp+18h]
  PVOID *v4; // [rsp+B8h] [rbp+20h]

  result = 0;
  v1 = (PVOID *)KeBugCheckReasonCallbackListHead;
  if ( KeBugCheckReasonCallbackListHead && qword_140F216E8 )
  {
    v2 = &KeBugCheckReasonCallbackListHead;
    while ( 1 )
    {
      v3 = v1;
      if ( v1 == &KeBugCheckReasonCallbackListHead )
        break;
      v4 = v1;
      result = KeValidateBugCheckCallbackRecord((__int64)v1, 7, &v2);
      if ( result )
      {
        result = guard_dispatch_icall_no_overrides(7LL);
        *((_WORD *)v1 + 22) = 260;
      }
      else if ( !v2 )
      {
        return result;
      }
      v1 = (PVOID *)*v1;
    }
  }
  return result;
}
