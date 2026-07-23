/*
 * XREFs of MiMakePrototypePteDirect @ 0x140203600
 * Callers:
 *     MiPteForTrimmedProto @ 0x140202660 (MiPteForTrimmedProto.c)
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiMakePerSessionProtoPte @ 0x140269F88 (MiMakePerSessionProtoPte.c)
 *     MiWriteSharedDemandZeroPte @ 0x14026A080 (MiWriteSharedDemandZeroPte.c)
 *     MiMapImageScpCfgPages @ 0x140294080 (MiMapImageScpCfgPages.c)
 *     MiCombineWithExisting @ 0x140294840 (MiCombineWithExisting.c)
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 *     MiResolveSharedZeroFault @ 0x14030A4E0 (MiResolveSharedZeroFault.c)
 *     MiExpandSharedZeroCluster @ 0x14034162C (MiExpandSharedZeroCluster.c)
 *     MiCombineWithStandbyExisting @ 0x1403F1098 (MiCombineWithStandbyExisting.c)
 *     MiTrimSystemImagePages @ 0x1404A24CC (MiTrimSystemImagePages.c)
 *     MiAddMappedPtesPadding @ 0x1404C9B84 (MiAddMappedPtesPadding.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePrototypePteDirect(__int64 a1)
{
  __int64 v1; // rcx

  v1 = (a1 << 16) | 0x400;
  if ( !qword_140E2DCC0 )
    return v1;
  if ( (qword_140E2DCC0 & v1) != 0 )
    return v1 | 0x10;
  return v1 | qword_140E2DCC0;
}
