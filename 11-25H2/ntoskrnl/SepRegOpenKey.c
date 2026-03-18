/*
 * XREFs of SepRegOpenKey @ 0x140A2A1F4
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1405FD1CC (SepBuildCapPolicyTable.c)
 *     SepRmFetchGlobalSacl @ 0x14078520C (SepRmFetchGlobalSacl.c)
 *     SepReadAndInsertCaps @ 0x140785F10 (SepReadAndInsertCaps.c)
 *     SepReadAndPopulateCapes @ 0x140786268 (SepReadAndPopulateCapes.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140787030 (SepAdtOpenRegAndSetupNotification.c)
 *     SepRegQueryDwordValue @ 0x140A29FD4 (SepRegQueryDwordValue.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
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
