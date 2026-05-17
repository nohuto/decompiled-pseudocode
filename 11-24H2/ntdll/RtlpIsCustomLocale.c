/*
 * XREFs of RtlpIsCustomLocale @ 0x1800F77DC
 * Callers:
 *     LdrpLangFallbackListAppendNode @ 0x180031E20 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800322A0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlLocaleNameToLcid @ 0x180032F80 (RtlLocaleNameToLcid.c)
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 *     RtlGetNeutralFallback @ 0x180033500 (RtlGetNeutralFallback.c)
 *     RtlGetParentLocaleName @ 0x180033970 (RtlGetParentLocaleName.c)
 *     RtlIsValidLocaleName @ 0x1800DA8C0 (RtlIsValidLocaleName.c)
 * Callees:
 *     RtlpGetCustomCultureRegKey @ 0x1800F78B4 (RtlpGetCustomCultureRegKey.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

bool __fastcall RtlpIsCustomLocale(wchar_t *String)
{
  __int64 CustomCultureRegKey; // rdi
  size_t v3; // rax
  int v5; // [rsp+50h] [rbp+0h] BYREF

  *(_DWORD *)((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL) = 0;
  CustomCultureRegKey = RtlpGetCustomCultureRegKey();
  if ( !CustomCultureRegKey || !*String )
    return 0;
  *(_DWORD *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = 0;
  *(_QWORD *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = String;
  v3 = 2 * wcslen(String);
  if ( v3 >= 0xFFFE )
    LOWORD(v3) = -4;
  *(_WORD *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v3;
  *(_WORD *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA) = v3 + 2;
  return (int)NtQueryValueKey(
                CustomCultureRegKey,
                ((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL) + 8,
                2LL,
                ((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL) + 32,
                120,
                (unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL) >= 0;
}
