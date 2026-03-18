/*
 * XREFs of MiMakePrototypePteDirect @ 0x1402331F0
 * Callers:
 *     MiPteForTrimmedProto @ 0x140232FE4 (MiPteForTrimmedProto.c)
 *     MiMapImageScpCfgPages @ 0x140264810 (MiMapImageScpCfgPages.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiExpandSharedZeroCluster @ 0x1402E548C (MiExpandSharedZeroCluster.c)
 *     MiCombineWithExisting @ 0x1402F92E0 (MiCombineWithExisting.c)
 *     MiResolveSharedZeroFault @ 0x1402FFD60 (MiResolveSharedZeroFault.c)
 *     MiCombineWithStandbyExisting @ 0x140313D4C (MiCombineWithStandbyExisting.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
 *     MiWriteSharedDemandZeroPte @ 0x1403951B4 (MiWriteSharedDemandZeroPte.c)
 *     MiMakePerSessionProtoPte @ 0x14046D870 (MiMakePerSessionProtoPte.c)
 *     MiTrimSystemImagePages @ 0x1404A7A78 (MiTrimSystemImagePages.c)
 *     MiAddMappedPtesPadding @ 0x1404D0B44 (MiAddMappedPtesPadding.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePrototypePteDirect(__int64 a1)
{
  __int64 v1; // rcx

  v1 = (a1 << 16) | 0x400;
  if ( !qword_140E2DB80 )
    return v1;
  if ( (qword_140E2DB80 & v1) != 0 )
    return v1 | 0x10;
  return v1 | qword_140E2DB80;
}
