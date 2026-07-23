/*
 * XREFs of RtlpGetUserLocaleName @ 0x180115BDC
 * Callers:
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlLcidToLocaleName @ 0x1800A75A0 (RtlLcidToLocaleName.c)
 *     RtlpMatchUserLanguage @ 0x180115B18 (RtlpMatchUserLanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     RtlpGetLocaleDataKey @ 0x180115CC0 (RtlpGetLocaleDataKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpGetUserLocaleName(PUNICODE_STRING DestinationString)
{
  unsigned __int64 v1; // rbp
  void *LocaleDataKey; // rax
  __int64 v4; // rdx
  ULONG v6[8]; // [rsp+50h] [rbp+0h] BYREF

  v1 = (unsigned __int64)v6 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_DWORD *)((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFE0uLL) = 0;
  LocaleDataKey = (void *)RtlpGetLocaleDataKey();
  if ( !LocaleDataKey )
    return 3221225473LL;
  if ( NtQueryValueKey(
         LocaleDataKey,
         (PUNICODE_STRING)&`RtlpGetUserLocaleName'::`2'::KeyValueName,
         KeyValuePartialInformation,
         (PVOID)(v1 + 32),
         0xBAu,
         (PULONG)((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFE0uLL)) < 0 )
    return 3221225473LL;
  if ( *(_DWORD *)(((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x24) != 1 )
    return 3221225473LL;
  v4 = *(_QWORD *)(((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
  if ( (v4 & 1) != 0
    || !(_DWORD)v4
    || *(_WORD *)(((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2A + 2 * ((unsigned __int64)(unsigned int)v4 >> 1))
    || (unsigned int)v4 > DestinationString->MaximumLength )
  {
    return 3221225473LL;
  }
  memmove(DestinationString->Buffer, (const void *)(v1 + 44), (unsigned int)v4);
  RtlInitUnicodeString(DestinationString, DestinationString->Buffer);
  return 0LL;
}
