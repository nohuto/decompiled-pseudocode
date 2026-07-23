/*
 * XREFs of SepRegOpenKey @ 0x140A245B4
 * Callers:
 *     SepBuildCapPolicyTable @ 0x140607C74 (SepBuildCapPolicyTable.c)
 *     SepRmFetchGlobalSacl @ 0x1407946EC (SepRmFetchGlobalSacl.c)
 *     SepReadAndInsertCaps @ 0x1407953F0 (SepReadAndInsertCaps.c)
 *     SepReadAndPopulateCapes @ 0x140795748 (SepReadAndPopulateCapes.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140796510 (SepAdtOpenRegAndSetupNotification.c)
 *     SepRegQueryDwordValue @ 0x140A24394 (SepRegQueryDwordValue.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall SepRegOpenKey(PCWSTR SourceString, ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  UNICODE_STRING v6; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v6 = 0LL;
  RtlInitUnicodeString(&v6, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  *KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &v6;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
}
