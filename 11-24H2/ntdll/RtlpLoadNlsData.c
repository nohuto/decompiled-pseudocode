/*
 * XREFs of RtlpLoadNlsData @ 0x1800144AC
 * Callers:
 *     RtlGetParentLocaleName @ 0x180012850 (RtlGetParentLocaleName.c)
 *     RtlGetNeutralFallback @ 0x180012B40 (RtlGetNeutralFallback.c)
 *     LdrpLangFallbackListAppendNode @ 0x180012EE0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180013360 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlLocaleNameToLcid @ 0x180014040 (RtlLocaleNameToLcid.c)
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     RtlLCIDToCultureName @ 0x180016340 (RtlLCIDToCultureName.c)
 *     RtlLcidToLocaleName @ 0x180099060 (RtlLcidToLocaleName.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x1800C7BDC (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlIsValidLocaleName @ 0x1800CBF00 (RtlIsValidLocaleName.c)
 *     RtlpGetProcessCodepagesForLocale @ 0x18011CF8C (RtlpGetProcessCodepagesForLocale.c)
 * Callees:
 *     NtUnmapViewOfSection @ 0x180160590 (NtUnmapViewOfSection.c)
 *     NtInitializeNlsFiles @ 0x180162140 (NtInitializeNlsFiles.c)
 */

char __fastcall RtlpLoadNlsData(__int64 a1, __int64 a2, __int64 a3, ULONG *a4)
{
  unsigned int *v4; // rax
  unsigned int *v5; // rdx
  char *v6; // rcx
  PVOID BaseAddress; // [rsp+30h] [rbp+8h] BYREF

  BaseAddress = 0LL;
  if ( pTblPtrs )
    return 1;
  v4 = (unsigned int *)gBaseAddress;
  if ( gBaseAddress )
    goto LABEL_8;
  if ( NtInitializeNlsFiles(&BaseAddress, &gSystemLocale, 0LL, a4) >= 0 )
  {
    if ( !_InterlockedCompareExchange64(&gBaseAddress, (signed __int64)BaseAddress, 0LL) )
    {
      v4 = (unsigned int *)BaseAddress;
LABEL_6:
      v5 = (unsigned int *)((char *)v4 + v4[4]);
      v6 = (char *)v5 + *v5;
      gLocaleTables = *((_WORD *)v6 + 12);
      word_1801CD784 = *((_WORD *)v6 + 11);
      word_1801CD782 = *((_WORD *)v6 + 16);
      word_1801CD7B0 = *((_WORD *)v6 + 13);
      qword_1801CD788 = (__int64)v5 + *((unsigned int *)v6 + 7);
      qword_1801CD790 = (__int64)v5 + *((unsigned int *)v6 + 9);
      qword_1801CD798 = (__int64)v5 + *((unsigned int *)v6 + 10);
      qword_1801CD7A0 = (__int64)v5 + *((unsigned int *)v6 + 14);
      pTblPtrs = (__int64)&gLocaleTables;
      return 1;
    }
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    v4 = (unsigned int *)gBaseAddress;
LABEL_8:
    BaseAddress = v4;
    goto LABEL_6;
  }
  return 0;
}
