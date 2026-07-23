/*
 * XREFs of BcdCloseStore @ 0x140A81A08
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x14065B5B0 (WheaPersistBadPageToBcd.c)
 *     PopFreeHiberContext @ 0x1406F93C8 (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x140746E14 (PoInitHiberServices.c)
 *     PopValidateWinresume @ 0x1407511C8 (PopValidateWinresume.c)
 *     PopAdaptiveClearInitialSystemPowerState @ 0x14075E0CC (PopAdaptiveClearInitialSystemPowerState.c)
 *     SepSecureBootCorrectBcd @ 0x140793ED4 (SepSecureBootCorrectBcd.c)
 *     BiLoadSystemStore @ 0x140A575F0 (BiLoadSystemStore.c)
 *     PopBcdClose @ 0x140A819F0 (PopBcdClose.c)
 *     PopAllocateHiberContext @ 0x140AC4284 (PopAllocateHiberContext.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1404A5974 (BiIsOfflineHandle.c)
 *     BiIsSynchFirmwareEntries @ 0x1406987D0 (BiIsSynchFirmwareEntries.c)
 *     BiIsSystemStore @ 0x14085A030 (BiIsSystemStore.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A48B8 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A497C (BiReleaseBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BiIsWinPEBoot @ 0x1409A81CC (BiIsWinPEBoot.c)
 *     BiCloseStore @ 0x140A81ABC (BiCloseStore.c)
 */

NTSTATUS __cdecl BcdCloseStore(HANDLE BcdStoreHandle)
{
  char IsOfflineHandle; // si
  __int64 v3; // r8
  __int64 v4; // r9
  NTSTATUS v5; // ebx
  NTSTATUS v7; // r8d

  IsOfflineHandle = BiIsOfflineHandle((char)BcdStoreHandle);
  if ( BiAcquireBcdSyncMutant(IsOfflineHandle) < 0 )
  {
    BiLogMessage();
    return v7;
  }
  else
  {
    if ( BiIsSystemStore((__int64)BcdStoreHandle) )
    {
      BiIsSynchFirmwareEntries((char)BcdStoreHandle);
      BiIsWinPEBoot();
    }
    BiLogMessage();
    v5 = BiCloseStore(BcdStoreHandle, (unsigned int)v3, v3, v4);
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return v5;
  }
}
