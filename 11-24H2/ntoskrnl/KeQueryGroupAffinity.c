/*
 * XREFs of KeQueryGroupAffinity @ 0x140467A20
 * Callers:
 *     PpmEnableWmiInterface @ 0x14075C1E4 (PpmEnableWmiInterface.c)
 *     EtwpProcessorRundown @ 0x1407B1358 (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x1407C41C0 (NtCreateProfile.c)
 *     PopProcessorInformation @ 0x1409FFDC0 (PopProcessorInformation.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x140A77924 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 *     MmCreatePeb @ 0x140AE79AC (MmCreatePeb.c)
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
