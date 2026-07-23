/*
 * XREFs of BcdCloseStore @ 0x140A24B8C
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x140650F00 (WheaPersistBadPageToBcd.c)
 *     PopFreeHiberContext @ 0x1406EF918 (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x14073CB14 (PoInitHiberServices.c)
 *     PopValidateWinresume @ 0x140746DC4 (PopValidateWinresume.c)
 *     PopAdaptiveClearInitialSystemPowerState @ 0x14075270C (PopAdaptiveClearInitialSystemPowerState.c)
 *     SepSecureBootCorrectBcd @ 0x140784A64 (SepSecureBootCorrectBcd.c)
 *     PopBcdClose @ 0x140A24B74 (PopBcdClose.c)
 *     BiLoadSystemStore @ 0x140A288E0 (BiLoadSystemStore.c)
 *     PopAllocateHiberContext @ 0x140ABEFAC (PopAllocateHiberContext.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1404A9F20 (BiIsOfflineHandle.c)
 *     BiIsSynchFirmwareEntries @ 0x14068C400 (BiIsSynchFirmwareEntries.c)
 *     BiAcquireBcdSyncMutant @ 0x140966848 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x14096690C (BiReleaseBcdSyncMutant.c)
 *     BiIsSystemStore @ 0x140A24C40 (BiIsSystemStore.c)
 *     BiCloseStore @ 0x140A24D38 (BiCloseStore.c)
 *     BiIsWinPEBoot @ 0x140A2584C (BiIsWinPEBoot.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 */

NTSTATUS __cdecl BcdCloseStore(HANDLE BcdStoreHandle)
{
  char IsOfflineHandle; // si
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // r8d
  NTSTATUS v7; // ebx
  NTSTATUS v9; // r8d
  unsigned int v10; // ebx
  char IsWinPEBoot; // al

  IsOfflineHandle = BiIsOfflineHandle((char)BcdStoreHandle);
  v3 = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( v3 < 0 )
  {
    BiLogMessage(4LL, L"BcdCloseStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v3);
    return v9;
  }
  else
  {
    if ( (unsigned __int8)BiIsSystemStore(BcdStoreHandle, v4, (unsigned int)v3) )
    {
      v10 = BiIsSynchFirmwareEntries((char)BcdStoreHandle) ? 4 : 0;
      IsWinPEBoot = BiIsWinPEBoot();
      v5 = v10 | 2;
      if ( !IsWinPEBoot )
        v5 = v10;
    }
    else
    {
      v5 = 2LL;
    }
    BiLogMessage(2LL, L"Closing store. Flags: 0x%x", v5);
    v7 = BiCloseStore(BcdStoreHandle, v6);
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return v7;
  }
}
