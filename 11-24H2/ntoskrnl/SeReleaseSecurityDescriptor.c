/*
 * XREFs of SeReleaseSecurityDescriptor @ 0x140912CC0
 * Callers:
 *     SeAccessCheckByType @ 0x14042DC70 (SeAccessCheckByType.c)
 *     CmpCopySaclToVirtualKey @ 0x1407DD0CC (CmpCopySaclToVirtualKey.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObReferenceObjectByNameEx @ 0x14086BC94 (ObReferenceObjectByNameEx.c)
 *     NtOpenObjectAuditAlarm @ 0x140911F00 (NtOpenObjectAuditAlarm.c)
 *     ObDeleteCapturedInsertInfo @ 0x14092FB70 (ObDeleteCapturedInsertInfo.c)
 *     ObpInsertOrLocateNamedObject @ 0x1409DF020 (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
