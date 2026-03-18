/*
 * XREFs of ?KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x14026704C
 * Callers:
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x140204140 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140266270 (KeQueryLogicalProcessorRelationship.c)
 *     KiTryPopulateLogicalProcessorInformation @ 0x140266F24 (KiTryPopulateLogicalProcessorInformation.c)
 *     KeAndAffinityEx2 @ 0x140267450 (KeAndAffinityEx2.c)
 *     KeAndAffinityEx @ 0x1404F8120 (KeAndAffinityEx.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405BC120 (KiCpuPartitionCheckAffinitization.c)
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
