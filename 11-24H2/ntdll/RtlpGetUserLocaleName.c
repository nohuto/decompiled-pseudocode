/*
 * XREFs of RtlpGetUserLocaleName @ 0x1800D2DDC
 * Callers:
 *     RtlLCIDToCultureName @ 0x1800360C0 (RtlLCIDToCultureName.c)
 *     RtlpMatchUserLanguage @ 0x1800D10DC (RtlpMatchUserLanguage.c)
 *     RtlLcidToLocaleName @ 0x1800D26D0 (RtlLcidToLocaleName.c)
 * Callees:
 *     RtlpGetLocaleDataKey @ 0x1800D313C (RtlpGetLocaleDataKey.c)
 *     RtlInitUnicodeString @ 0x1800DA0A0 (RtlInitUnicodeString.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlpGetUserLocaleName(PUNICODE_STRING DestinationString)
{
  unsigned __int64 v1; // rbp
  __int64 LocaleDataKey; // rax
  __int64 v4; // rdx
  _DWORD v6[8]; // [rsp+50h] [rbp+0h] BYREF

  v1 = (unsigned __int64)v6 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_DWORD *)((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFE0uLL) = 0;
  LocaleDataKey = RtlpGetLocaleDataKey();
  if ( !LocaleDataKey )
    return 3221225473LL;
  if ( (int)NtQueryValueKey(
              LocaleDataKey,
              &`RtlpGetUserLocaleName'::`2'::KeyValueName,
              2LL,
              v1 + 32,
              186,
              (unsigned __int64)v6 & 0xFFFFFFFFFFFFFFE0uLL) < 0 )
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
