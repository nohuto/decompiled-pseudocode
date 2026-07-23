/*
 * XREFs of KeQueryGroupAffinity @ 0x14045F4C0
 * Callers:
 *     PpmEnableWmiInterface @ 0x14075B214 (PpmEnableWmiInterface.c)
 *     EtwpProcessorRundown @ 0x1407B17A8 (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x1407C1FE0 (NtCreateProfile.c)
 *     MmCreatePeb @ 0x1408DDBA4 (MmCreatePeb.c)
 *     PopProcessorInformation @ 0x1409F8FB0 (PopProcessorInformation.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x140A71A44 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
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
