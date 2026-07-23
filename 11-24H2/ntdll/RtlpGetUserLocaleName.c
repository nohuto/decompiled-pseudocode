/*
 * XREFs of RtlpGetUserLocaleName @ 0x180099D30
 * Callers:
 *     RtlLCIDToCultureName @ 0x180016340 (RtlLCIDToCultureName.c)
 *     RtlLcidToLocaleName @ 0x180099060 (RtlLcidToLocaleName.c)
 *     RtlpMatchUserLanguage @ 0x18009A410 (RtlpMatchUserLanguage.c)
 * Callees:
 *     RtlpGetLocaleDataKey @ 0x18009A4D4 (RtlpGetLocaleDataKey.c)
 *     RtlInitUnicodeString @ 0x1800C7EE0 (RtlInitUnicodeString.c)
 *     NtQueryValueKey @ 0x180160330 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
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
