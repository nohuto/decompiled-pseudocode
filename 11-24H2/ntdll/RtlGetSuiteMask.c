/*
 * XREFs of RtlGetSuiteMask @ 0x1800AAA10
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x1800A8DCC (RtlpActivateLowFragmentationHeap.c)
 *     RtlQueryResourcePolicy @ 0x1800A9730 (RtlQueryResourcePolicy.c)
 *     SwitchedRtlGetVersion @ 0x1800A9C70 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x1800AA620 (RtlGetVersion.c)
 *     LdrpEnableParallelLoading @ 0x1800AB384 (LdrpEnableParallelLoading.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800AC2B0 (RtlpHpOptIntoSegmentHeap.c)
 *     RtlInitializeHeapManager @ 0x18011941C (RtlInitializeHeapManager.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x18011AF2C (RtlpQueryDiskSpeedPolicy.c)
 *     RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x1801426A0 (RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit.c)
 * Callees:
 *     <none>
 */

__int64 RtlGetSuiteMask()
{
  _DWORD *SharedData; // rcx

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    return *((unsigned int *)NtCurrentPeb()->SharedData + 5);
  else
    return MEMORY[0x7FFE02D0];
}
