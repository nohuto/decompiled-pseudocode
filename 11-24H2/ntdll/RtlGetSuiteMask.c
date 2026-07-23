/*
 * XREFs of RtlGetSuiteMask @ 0x18000BBA0
 * Callers:
 *     RtlpHpOptIntoSegmentHeap @ 0x180009E48 (RtlpHpOptIntoSegmentHeap.c)
 *     SwitchedRtlGetVersion @ 0x18000AE00 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x18000B7B0 (RtlGetVersion.c)
 *     RtlpActivateLowFragmentationHeap @ 0x18000BFB0 (RtlpActivateLowFragmentationHeap.c)
 *     LdrpEnableParallelLoading @ 0x180085804 (LdrpEnableParallelLoading.c)
 *     RtlQueryResourcePolicy @ 0x18010B000 (RtlQueryResourcePolicy.c)
 *     RtlInitializeHeapManager @ 0x180114300 (RtlInitializeHeapManager.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x18011915C (RtlpQueryDiskSpeedPolicy.c)
 *     RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x180140850 (RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit.c)
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
