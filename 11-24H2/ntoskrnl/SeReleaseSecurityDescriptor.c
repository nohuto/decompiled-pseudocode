/*
 * XREFs of SeReleaseSecurityDescriptor @ 0x1409209D0
 * Callers:
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     CmpCopySaclToVirtualKey @ 0x1407DCB7C (CmpCopySaclToVirtualKey.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObReferenceObjectByNameEx @ 0x1408679A4 (ObReferenceObjectByNameEx.c)
 *     NtOpenObjectAuditAlarm @ 0x140920280 (NtOpenObjectAuditAlarm.c)
 *     ObDeleteCapturedInsertInfo @ 0x14092DA30 (ObDeleteCapturedInsertInfo.c)
 *     ObpInsertOrLocateNamedObject @ 0x1409E45C0 (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
