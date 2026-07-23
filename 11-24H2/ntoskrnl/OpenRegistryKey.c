/*
 * XREFs of OpenRegistryKey @ 0x1406597CC
 * Callers:
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1406595AC (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall OpenRegistryKey(__int64 a1, UNICODE_STRING *a2, HANDLE *a3)
{
  OBJECT_ATTRIBUTES v4; // [rsp+20h] [rbp-38h] BYREF

  v4.ObjectName = a2;
  v4.RootDirectory = 0LL;
  *(_QWORD *)&v4.Length = 48LL;
  *(_QWORD *)&v4.Attributes = 576LL;
  *(_OWORD *)&v4.SecurityDescriptor = 0LL;
  return ZwOpenKey(a3, 8u, &v4);
}
