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
      word_1801D07C4 = *((_WORD *)v6 + 11);
      word_1801D07C2 = *((_WORD *)v6 + 16);
      word_1801D07F0 = *((_WORD *)v6 + 13);
      qword_1801D07C8 = (__int64)v5 + *((unsigned int *)v6 + 7);
      qword_1801D07D0 = (__int64)v5 + *((unsigned int *)v6 + 9);
      qword_1801D07D8 = (__int64)v5 + *((unsigned int *)v6 + 10);
      qword_1801D07E0 = (__int64)v5 + *((unsigned int *)v6 + 14);
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
