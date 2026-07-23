/*
 * XREFs of RtlOpenCurrentUser @ 0x180017270
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180011648 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     OpenGlobalizationUserSettingsKey @ 0x1800149A0 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpLoadLanguageConfigList @ 0x180014A40 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800C8B80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x1800C9BA0 (RtlpLoadUserUIByPolicy.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180018C40 (RtlFormatCurrentUserKeyPath.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
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
