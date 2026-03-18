/*
 * XREFs of SeReleaseSecurityDescriptor @ 0x14092E1B0
 * Callers:
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     CmpCopySaclToVirtualKey @ 0x1407CD3BC (CmpCopySaclToVirtualKey.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     ObDeleteCapturedInsertInfo @ 0x1409130A0 (ObDeleteCapturedInsertInfo.c)
 *     ObReferenceObjectByNameEx @ 0x140914400 (ObReferenceObjectByNameEx.c)
 *     ObpInsertOrLocateNamedObject @ 0x140915990 (ObpInsertOrLocateNamedObject.c)
 *     NtOpenObjectAuditAlarm @ 0x14092DA70 (NtOpenObjectAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140982C90 (SeTokenDefaultDaclChangedAuditAlarm.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSecurityDescriptor(void *a1, char a2, char a3)
{
  if ( a2 )
  {
    if ( a2 != 1 )
      return;
  }
  else if ( a3 != 1 )
  {
    return;
  }
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
