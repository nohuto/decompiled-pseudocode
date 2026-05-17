/*
 * XREFs of RtlpLoadNlsData @ 0x1800333EC
 * Callers:
 *     LdrpLangFallbackListAppendNode @ 0x180031E20 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800322A0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlLocaleNameToLcid @ 0x180032F80 (RtlLocaleNameToLcid.c)
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 *     RtlGetNeutralFallback @ 0x180033500 (RtlGetNeutralFallback.c)
 *     RtlGetParentLocaleName @ 0x180033970 (RtlGetParentLocaleName.c)
 *     RtlLCIDToCultureName @ 0x1800360C0 (RtlLCIDToCultureName.c)
 *     RtlLcidToLocaleName @ 0x1800D26D0 (RtlLcidToLocaleName.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x1800D9DA8 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlIsValidLocaleName @ 0x1800DA8C0 (RtlIsValidLocaleName.c)
 *     RtlpGetProcessCodepagesForLocale @ 0x18011ED5C (RtlpGetProcessCodepagesForLocale.c)
 * Callees:
 *     NtUnmapViewOfSection @ 0x1801621D0 (NtUnmapViewOfSection.c)
 *     NtInitializeNlsFiles @ 0x180163D80 (NtInitializeNlsFiles.c)
 */

char RtlpLoadNlsData()
{
  __int64 v0; // rax
  unsigned int *v1; // rdx
  char *v2; // rcx
  signed __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( pTblPtrs )
    return 1;
  v0 = gBaseAddress;
  if ( gBaseAddress )
    goto LABEL_8;
  if ( (int)NtInitializeNlsFiles(&v4, &gSystemLocale, 0LL) >= 0 )
  {
    if ( !_InterlockedCompareExchange64(&gBaseAddress, v4, 0LL) )
    {
      v0 = v4;
LABEL_6:
      v1 = (unsigned int *)(v0 + *(unsigned int *)(v0 + 16));
      v2 = (char *)v1 + *v1;
      gLocaleTables = *((_WORD *)v2 + 12);
      word_1801CE78C = *((_WORD *)v2 + 11);
      word_1801CE78A = *((_WORD *)v2 + 16);
      word_1801CE7B8 = *((_WORD *)v2 + 13);
      qword_1801CE790 = (__int64)v1 + *((unsigned int *)v2 + 7);
      qword_1801CE798 = (__int64)v1 + *((unsigned int *)v2 + 9);
      qword_1801CE7A0 = (__int64)v1 + *((unsigned int *)v2 + 10);
      qword_1801CE7A8 = (__int64)v1 + *((unsigned int *)v2 + 14);
      pTblPtrs = (__int64)&gLocaleTables;
      return 1;
    }
    NtUnmapViewOfSection(-1LL);
    v0 = gBaseAddress;
LABEL_8:
    v4 = v0;
    goto LABEL_6;
  }
  return 0;
}
