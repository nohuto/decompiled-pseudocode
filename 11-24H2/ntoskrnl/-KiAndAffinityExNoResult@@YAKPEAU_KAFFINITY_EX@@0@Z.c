/*
 * XREFs of ?KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x14032DF20
 * Callers:
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x1402AE9D0 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     KeAndAffinityEx2 @ 0x14032C8C0 (KeAndAffinityEx2.c)
 *     KiTryPopulateLogicalProcessorInformation @ 0x14032DDF8 (KiTryPopulateLogicalProcessorInformation.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14032DFF0 (KeQueryLogicalProcessorRelationship.c)
 *     PpmParkEvaluateRestriction @ 0x1404E5C48 (PpmParkEvaluateRestriction.c)
 *     KeAndAffinityEx @ 0x1404F7ED0 (KeAndAffinityEx.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405BD680 (KiCpuPartitionCheckAffinitization.c)
 *     PpmParkBuildTopologyCandidatesEx @ 0x1405DF150 (PpmParkBuildTopologyCandidatesEx.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405DFACC (PpmParkComputeUnparkMaskEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAndAffinityExNoResult(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2)
{
  unsigned __int16 Count; // r9
  unsigned __int16 i; // r8

  Count = a1->Count;
  if ( a1->Count >= a2->Count )
    Count = a2->Count;
  for ( i = 0; i < Count; ++i )
  {
    if ( (a1->Bitmap[i] & a2->Bitmap[i]) != 0 )
      return 1LL;
  }
  return 0LL;
}
