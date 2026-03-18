/*
 * XREFs of KeQueryGroupAffinity @ 0x1404692D0
 * Callers:
 *     PpmEnableWmiInterface @ 0x14074F964 (PpmEnableWmiInterface.c)
 *     EtwpProcessorRundown @ 0x1407A1F88 (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x1407B23C0 (NtCreateProfile.c)
 *     MmCreatePeb @ 0x1408FA99C (MmCreatePeb.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     PopProcessorInformation @ 0x140A018FC (PopProcessorInformation.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x140A7568C (PpmEventTraceProcessorPerformanceDomainRundown.c)
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall KeQueryGroupAffinity(USHORT GroupNumber)
{
  if ( GroupNumber >= KeActiveProcessors.Count )
    return 0LL;
  else
    return KeActiveProcessors.Bitmap[GroupNumber];
}
