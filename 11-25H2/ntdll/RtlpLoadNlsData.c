/*
 * XREFs of RtlpLoadNlsData @ 0x18005C67C
 * Callers:
 *     LdrpLangFallbackListAppendNode @ 0x18005A8F0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18005AD70 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlLocaleNameToLcid @ 0x18005C210 (RtlLocaleNameToLcid.c)
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     RtlGetNeutralFallback @ 0x18005C940 (RtlGetNeutralFallback.c)
 *     RtlGetParentLocaleName @ 0x1800A7380 (RtlGetParentLocaleName.c)
 *     RtlLcidToLocaleName @ 0x1800A75A0 (RtlLcidToLocaleName.c)
 *     RtlIsValidLocaleName @ 0x1800A8400 (RtlIsValidLocaleName.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x1800A86FC (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlpGetProcessCodepagesForLocale @ 0x18012062C (RtlpGetProcessCodepagesForLocale.c)
 * Callees:
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     NtInitializeNlsFiles @ 0x180165310 (NtInitializeNlsFiles.c)
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
      word_1801D07C4 = *((_WORD *)v2 + 11);
      word_1801D07C2 = *((_WORD *)v2 + 16);
      word_1801D07F0 = *((_WORD *)v2 + 13);
      qword_1801D07C8 = (__int64)v1 + *((unsigned int *)v2 + 7);
      qword_1801D07D0 = (__int64)v1 + *((unsigned int *)v2 + 9);
      qword_1801D07D8 = (__int64)v1 + *((unsigned int *)v2 + 10);
      qword_1801D07E0 = (__int64)v1 + *((unsigned int *)v2 + 14);
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
