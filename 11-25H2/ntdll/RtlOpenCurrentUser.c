/*
 * XREFs of RtlOpenCurrentUser @ 0x18005D890
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180087AE0 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x180088B20 (RtlpLoadUserUIByPolicy.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18008BBB8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18008C0B0 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpLoadLanguageConfigList @ 0x18008C150 (RtlpLoadLanguageConfigList.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18005F470 (RtlFormatCurrentUserKeyPath.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 */

NTSTATUS __cdecl RtlOpenCurrentUser(ACCESS_MASK DesiredAccess, PHANDLE CurrentUserKey)
{
  int v4; // ebx
  size_t v5; // rax
  _UNICODE_STRING CurrentUserKeyPath; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  CurrentUserKeyPath = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v4 = RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath);
  if ( v4 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &CurrentUserKeyPath;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = NtOpenKey(CurrentUserKey, DesiredAccess, &ObjectAttributes);
    if ( CurrentUserKeyPath.Buffer )
      RtlpSysVolFree(CurrentUserKeyPath.Buffer);
  }
  if ( v4 != -1073741772 )
    return v4;
  *(_QWORD *)&CurrentUserKeyPath.Length = 0LL;
  CurrentUserKeyPath.Buffer = L"\\Registry\\User\\.Default";
  if ( L"\\Registry\\User\\.Default" )
  {
    v5 = 2 * wcslen(L"\\Registry\\User\\.Default");
    if ( v5 >= 0xFFFE )
      LOWORD(v5) = -4;
    CurrentUserKeyPath.Length = v5;
    CurrentUserKeyPath.MaximumLength = v5 + 2;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &CurrentUserKeyPath;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 1600;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return NtOpenKey(CurrentUserKey, DesiredAccess, &ObjectAttributes);
}
