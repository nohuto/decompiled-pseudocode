/*
 * XREFs of RtlpIsCustomLocale @ 0x1800F943C
 * Callers:
 *     LdrpLangFallbackListAppendNode @ 0x18005A8F0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18005AD70 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlLocaleNameToLcid @ 0x18005C210 (RtlLocaleNameToLcid.c)
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     RtlGetNeutralFallback @ 0x18005C940 (RtlGetNeutralFallback.c)
 *     RtlGetParentLocaleName @ 0x1800A7380 (RtlGetParentLocaleName.c)
 *     RtlIsValidLocaleName @ 0x1800A8400 (RtlIsValidLocaleName.c)
 * Callees:
 *     RtlpGetCustomCultureRegKey @ 0x1800F9514 (RtlpGetCustomCultureRegKey.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

bool __fastcall RtlpIsCustomLocale(wchar_t *String)
{
  void *CustomCultureRegKey; // rdi
  size_t v3; // rax
  ULONG v5; // [rsp+50h] [rbp+0h] BYREF

  *(_DWORD *)((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL) = 0;
  CustomCultureRegKey = (void *)RtlpGetCustomCultureRegKey();
  if ( !CustomCultureRegKey || !*String )
    return 0;
  *(_DWORD *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = 0;
  *(_QWORD *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = String;
  v3 = 2 * wcslen(String);
  if ( v3 >= 0xFFFE )
    LOWORD(v3) = -4;
  *(_WORD *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v3;
  *(_WORD *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA) = v3 + 2;
  return NtQueryValueKey(
           CustomCultureRegKey,
           (PUNICODE_STRING)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
           KeyValuePartialInformation,
           (PVOID)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL) + 32),
           0x78u,
           (PULONG)((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL)) >= 0;
}
