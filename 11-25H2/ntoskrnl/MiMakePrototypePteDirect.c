/*
 * XREFs of MiMakePrototypePteDirect @ 0x1402A69A0
 * Callers:
 *     MiCombineWithStandbyExisting @ 0x140224A84 (MiCombineWithStandbyExisting.c)
 *     MiResolveSharedZeroFault @ 0x140243D50 (MiResolveSharedZeroFault.c)
 *     MiPteForTrimmedProto @ 0x1402476D0 (MiPteForTrimmedProto.c)
 *     MiMapImageScpCfgPages @ 0x1402A69D0 (MiMapImageScpCfgPages.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 *     MiMakePerSessionProtoPte @ 0x1402CF61C (MiMakePerSessionProtoPte.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 *     MiWriteSharedDemandZeroPte @ 0x1402CFFF4 (MiWriteSharedDemandZeroPte.c)
 *     MiExpandSharedZeroCluster @ 0x14037C52C (MiExpandSharedZeroCluster.c)
 *     MiCombineWithExisting @ 0x14038A898 (MiCombineWithExisting.c)
 *     MiTrimSystemImagePages @ 0x1404A70E0 (MiTrimSystemImagePages.c)
 *     MiAddMappedPtesPadding @ 0x14066B030 (MiAddMappedPtesPadding.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePrototypePteDirect(__int64 a1)
{
  __int64 v1; // rcx

  v1 = (a1 << 16) | 0x400;
  if ( !qword_140E2D940 )
    return v1;
  if ( (qword_140E2D940 & v1) != 0 )
    return v1 | 0x10;
  return v1 | qword_140E2D940;
}
