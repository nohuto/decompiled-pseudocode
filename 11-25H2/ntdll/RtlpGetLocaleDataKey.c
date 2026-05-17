/*
 * XREFs of RtlpGetLocaleDataKey @ 0x180115CC0
 * Callers:
 *     RtlpGetUserLocaleName @ 0x180115BDC (RtlpGetUserLocaleName.c)
 * Callees:
 *     OpenGlobalizationUserSettingsKey @ 0x18008C0B0 (OpenGlobalizationUserSettingsKey.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 */

__int64 __fastcall RtlpGetLocaleDataKey(__int64 a1, __int64 a2)
{
  _DWORD v3[2]; // [rsp+20h] [rbp-30h] BYREF
  HANDLE v4; // [rsp+28h] [rbp-28h]
  const wchar_t *v5; // [rsp+30h] [rbp-20h]
  int v6; // [rsp+38h] [rbp-18h]
  int v7; // [rsp+3Ch] [rbp-14h]
  __int128 v8; // [rsp+40h] [rbp-10h]
  HANDLE Handle; // [rsp+60h] [rbp+10h] BYREF
  HANDLE v10; // [rsp+68h] [rbp+18h] BYREF

  v7 = 0;
  Handle = 0LL;
  v10 = 0LL;
  v3[1] = 0;
  if ( !gLocaleDataRegKey && (int)OpenGlobalizationUserSettingsKey(131097LL, a2, &v10) >= 0 )
  {
    v4 = v10;
    v3[0] = 48;
    v5 = L"68";
    v6 = 64;
    v8 = 0LL;
    if ( (int)NtOpenKey(&Handle, 0x80000000LL, v3) >= 0
      && _InterlockedCompareExchange64(&gLocaleDataRegKey, (signed __int64)Handle, 0LL) )
    {
      NtClose(Handle);
    }
    NtClose(v10);
  }
  return gLocaleDataRegKey;
}
