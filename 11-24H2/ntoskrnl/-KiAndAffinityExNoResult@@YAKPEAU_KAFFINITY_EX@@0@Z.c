/*
 * XREFs of ?KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x140206940
 * Callers:
 *     KeAndAffinityEx2 @ 0x1402052E0 (KeAndAffinityEx2.c)
 *     KiTryPopulateLogicalProcessorInformation @ 0x140206818 (KiTryPopulateLogicalProcessorInformation.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140206A10 (KeQueryLogicalProcessorRelationship.c)
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x1403B5A90 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     PpmParkEvaluateRestriction @ 0x1404EE4B8 (PpmParkEvaluateRestriction.c)
 *     KeAndAffinityEx @ 0x1404FA5F0 (KeAndAffinityEx.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405C0050 (KiCpuPartitionCheckAffinitization.c)
 *     PpmParkBuildTopologyCandidatesEx @ 0x1405E1B44 (PpmParkBuildTopologyCandidatesEx.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405E2544 (PpmParkComputeUnparkMaskEx.c)
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
