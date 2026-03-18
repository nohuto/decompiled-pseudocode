/*
 * XREFs of SepRegOpenKey @ 0x140A2FB74
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1406096BC (SepBuildCapPolicyTable.c)
 *     SepRmFetchGlobalSacl @ 0x1407945DC (SepRmFetchGlobalSacl.c)
 *     SepReadAndInsertCaps @ 0x1407952E0 (SepReadAndInsertCaps.c)
 *     SepReadAndPopulateCapes @ 0x140795638 (SepReadAndPopulateCapes.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140796400 (SepAdtOpenRegAndSetupNotification.c)
 *     SepRegQueryDwordValue @ 0x140A2F954 (SepRegQueryDwordValue.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
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
