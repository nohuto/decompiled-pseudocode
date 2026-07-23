/*
 * XREFs of RtlOpenCurrentUser @ 0x140781FF0
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1404C4820 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140869650 (RtlFormatCurrentUserKeyPath.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 */

NTSTATUS __cdecl RtlOpenCurrentUser(ACCESS_MASK DesiredAccess, PHANDLE CurrentUserKey)
{
  int v4; // ebx
  UNICODE_STRING CurrentUserKeyPath; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  CurrentUserKeyPath = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v4 = RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath);
  if ( v4 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &CurrentUserKeyPath;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(CurrentUserKey, DesiredAccess, &ObjectAttributes);
    RtlFreeAnsiString(&CurrentUserKeyPath);
  }
  if ( v4 == -1073741772 )
  {
    RtlInitUnicodeString(&CurrentUserKeyPath, L"\\Registry\\User\\.Default");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &CurrentUserKeyPath;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return ZwOpenKey(CurrentUserKey, DesiredAccess, &ObjectAttributes);
  }
  return v4;
}
