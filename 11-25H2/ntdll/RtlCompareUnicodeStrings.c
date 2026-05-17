/*
 * XREFs of RtlCompareUnicodeStrings @ 0x180073150
 * Callers:
 *     RtlpFindUnicodeStringInSection @ 0x180019C70 (RtlpFindUnicodeStringInSection.c)
 *     LdrpSearchPath @ 0x180070410 (LdrpSearchPath.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180071520 (LdrpSnapKernelBaseExtensions.c)
 *     RtlDeleteElementGenericTableAvl @ 0x180072740 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x180072830 (RtlInsertElementGenericTableAvl.c)
 *     FindNodeOrParent @ 0x180072A50 (FindNodeOrParent.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x180072B40 (RtlLookupElementGenericTableFullAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x180072C40 (RtlLookupElementGenericTableAvl.c)
 *     LdrpCheckRedirection @ 0x180072D28 (LdrpCheckRedirection.c)
 *     LdrpCheckForRetryLoading @ 0x180072F4C (LdrpCheckForRetryLoading.c)
 *     LdrpCompareModuleName @ 0x1800735C4 (LdrpCompareModuleName.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x18008FD38 (RtlpCapabilityCheckSystemCapability.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800B270C (LdrpInitializeApplicationVerifierPackage.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800B31E4 (RtlpProcessIFEOKeyFilter.c)
 *     ApiSetQuerySchemaInfo @ 0x1800EE1B8 (ApiSetQuerySchemaInfo.c)
 *     LdrpQuerySxSMUIFile @ 0x1800EE464 (LdrpQuerySxSMUIFile.c)
 *     LdrpCompareRedirectedFunction @ 0x1800F1B70 (LdrpCompareRedirectedFunction.c)
 *     LdrpIsModuleUnderSystem32 @ 0x1800F7044 (LdrpIsModuleUnderSystem32.c)
 *     RtlpMatchUserLanguage @ 0x180115B18 (RtlpMatchUserLanguage.c)
 *     RtlpMatchUILanguage @ 0x180118314 (RtlpMatchUILanguage.c)
 *     ApiSetQuerySchemaInfo_V7 @ 0x180137254 (ApiSetQuerySchemaInfo_V7.c)
 *     ApiSetpGetExtensionNameKeyInfo @ 0x180137C74 (ApiSetpGetExtensionNameKeyInfo.c)
 *     ApiSetpSearchForHostOverrideIndex_V7 @ 0x180137E44 (ApiSetpSearchForHostOverrideIndex_V7.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1801397E8 (RtlpIsEmptyImageFileOptionsKey.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x18014B860 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014BD20 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     LdrpIsSubstringFound @ 0x18016039C (LdrpIsSubstringFound.c)
 * Callees:
 *     RtlCompareMemory @ 0x1801674A0 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlCompareUnicodeStrings(unsigned __int16 *a1, SIZE_T a2, _BYTE *a3, SIZE_T a4, char a5)
{
  SIZE_T v5; // rsi
  int v7; // r14d
  int v8; // ebp
  unsigned __int16 *v9; // rbx
  signed __int64 v10; // rdi
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  SIZE_T v13; // rcx

  v5 = a2;
  if ( a2 > a4 )
    v5 = a4;
  v7 = a4;
  v8 = a2;
  v9 = a1;
  if ( a5 )
  {
    v10 = a3 - (_BYTE *)a1;
    while ( v9 < &a1[v5] )
    {
      v11 = *v9;
      v12 = *(unsigned __int16 *)((char *)v9 + v10);
      if ( (_WORD)v11 != (_WORD)v12 )
      {
        if ( (unsigned int)v11 >= 0x61 )
        {
          if ( (unsigned int)v11 > 0x7A )
          {
            if ( qword_1801CF038 && (unsigned __int16)v11 >= 0xC0u )
              LOWORD(v11) = *(_WORD *)(qword_1801CF038
                                     + 2
                                     * ((v11 & 0xF)
                                      + *(unsigned __int16 *)(qword_1801CF038
                                                            + 2LL
                                                            * (((unsigned __int8)v11 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(qword_1801CF038
                                                                                                 + 2 * (v11 >> 8))))))
                          + v11;
          }
          else
          {
            LOWORD(v11) = v11 - 32;
          }
        }
        if ( (unsigned int)v12 >= 0x61 )
        {
          if ( (unsigned int)v12 > 0x7A )
          {
            if ( qword_1801CF038 )
            {
              if ( (unsigned __int16)v12 >= 0xC0u )
                LOWORD(v12) = *(_WORD *)(qword_1801CF038
                                       + 2
                                       * ((v12 & 0xF)
                                        + *(unsigned __int16 *)(qword_1801CF038
                                                              + 2LL
                                                              * (((unsigned __int8)v12 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(qword_1801CF038 + 2 * (v12 >> 8))))))
                            + v12;
            }
          }
          else
          {
            LOWORD(v12) = v12 - 32;
          }
        }
        if ( (_WORD)v11 != (_WORD)v12 )
          return (unsigned __int16)v11 - (unsigned int)(unsigned __int16)v12;
      }
      ++v9;
    }
    return (unsigned int)(v8 - v7);
  }
  v13 = RtlCompareMemory(a1, a3, 2 * v5) >> 1;
  if ( v13 >= v5 )
    return (unsigned int)(v8 - v7);
  return v9[v13] - (unsigned int)*(unsigned __int16 *)&a3[2 * v13];
}
