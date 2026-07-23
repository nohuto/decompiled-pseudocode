/*
 * XREFs of RtlGetSuiteMask @ 0x180039850
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x180037C0C (RtlpActivateLowFragmentationHeap.c)
 *     RtlQueryResourcePolicy @ 0x180038570 (RtlQueryResourcePolicy.c)
 *     SwitchedRtlGetVersion @ 0x180038AB0 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x180039460 (RtlGetVersion.c)
 *     LdrpEnableParallelLoading @ 0x18003A1C4 (LdrpEnableParallelLoading.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800AF9C4 (RtlpHpOptIntoSegmentHeap.c)
 *     RtlInitializeHeapManager @ 0x18011BFFC (RtlInitializeHeapManager.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x18011C910 (RtlpQueryDiskSpeedPolicy.c)
 *     RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x180143D90 (RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetSuiteMask(void)
{
  _DWORD *SharedData; // rcx

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    return *((_DWORD *)NtCurrentPeb()->SharedData + 5);
  else
    return MEMORY[0x7FFE02D0];
}
