/*
 * XREFs of BcdCloseObject @ 0x140A27BE8
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x1405D632C (PopAdaptivePersistSystemInitatedRebootState.c)
 *     WheaPersistBadPageToBcd @ 0x140650F00 (WheaPersistBadPageToBcd.c)
 *     PopAdaptiveClearInitialSystemPowerState @ 0x14075270C (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x140752814 (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopBcdEstablishResumeObject @ 0x1407538EC (PopBcdEstablishResumeObject.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x140753AC0 (PopBcdGetApplicationPathFromResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x140753CD0 (PopBcdRegenerateResumeObject.c)
 *     PopBcdSetPendingResume @ 0x140753F0C (PopBcdSetPendingResume.c)
 *     SepSecureBootCorrectBcd @ 0x140784A64 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x14080278C (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140804E4C (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x140805438 (BiCreateEfiEntry.c)
 *     BiUpdateEfiEntry @ 0x140A25220 (BiUpdateEfiEntry.c)
 *     BiBindEfiBootManager @ 0x140A25DC8 (BiBindEfiBootManager.c)
 *     PopBcdClearPendingResume @ 0x140A26F08 (PopBcdClearPendingResume.c)
 *     BiBuildIdentifierList @ 0x140A27590 (BiBuildIdentifierList.c)
 *     BiExportEfiBootManager @ 0x140AADFBC (BiExportEfiBootManager.c)
 *     BiBindEfiEntryToBcdObject @ 0x140AB8160 (BiBindEfiEntryToBcdObject.c)
 *     PopAllocateHiberContext @ 0x140ABEFAC (PopAllocateHiberContext.c)
 *     BiUpdateBcdObject @ 0x140AD63A8 (BiUpdateBcdObject.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1404A9F20 (BiIsOfflineHandle.c)
 *     BiAcquireBcdSyncMutant @ 0x140966848 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x14096690C (BiReleaseBcdSyncMutant.c)
 *     BiCloseKey @ 0x140966980 (BiCloseKey.c)
 */

NTSTATUS __cdecl BcdCloseObject(HANDLE BcdObjectHandle)
{
  char IsOfflineHandle; // di
  NTSTATUS result; // eax

  IsOfflineHandle = BiIsOfflineHandle((char)BcdObjectHandle);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    BiCloseKey(BcdObjectHandle);
    return BiReleaseBcdSyncMutant(IsOfflineHandle);
  }
  return result;
}
