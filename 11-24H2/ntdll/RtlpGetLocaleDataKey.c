/*
 * XREFs of RtlpGetLocaleDataKey @ 0x18009A4D4
 * Callers:
 *     RtlpGetUserLocaleName @ 0x180099D30 (RtlpGetUserLocaleName.c)
 * Callees:
 *     OpenGlobalizationUserSettingsKey @ 0x1800149A0 (OpenGlobalizationUserSettingsKey.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 */

__int64 __fastcall RtlpGetLocaleDataKey(__int64 a1, __int64 a2)
{
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+18h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  if ( !gLocaleDataRegKey && OpenGlobalizationUserSettingsKey(131097LL, a2, &Handle) >= 0 )
  {
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"68";
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0
      && _InterlockedCompareExchange64(&gLocaleDataRegKey, (signed __int64)KeyHandle, 0LL) )
    {
      NtClose(KeyHandle);
    }
    NtClose(Handle);
  }
  return gLocaleDataRegKey;
}
