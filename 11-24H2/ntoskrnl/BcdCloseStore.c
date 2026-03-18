/*
 * XREFs of BcdCloseStore @ 0x14085EED8
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x14065CE90 (WheaPersistBadPageToBcd.c)
 *     PopFreeHiberContext @ 0x1406FB788 (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x140748B24 (PoInitHiberServices.c)
 *     PopValidateWinresume @ 0x140752EA8 (PopValidateWinresume.c)
 *     PopAdaptiveClearInitialSystemPowerState @ 0x14075F12C (PopAdaptiveClearInitialSystemPowerState.c)
 *     SepSecureBootCorrectBcd @ 0x140793E34 (SepSecureBootCorrectBcd.c)
 *     PopBcdClose @ 0x14085EEC0 (PopBcdClose.c)
 *     BiLoadSystemStore @ 0x14085F450 (BiLoadSystemStore.c)
 *     PopAllocateHiberContext @ 0x140AC688C (PopAllocateHiberContext.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1404AB350 (BiIsOfflineHandle.c)
 *     BiIsSynchFirmwareEntries @ 0x140697750 (BiIsSynchFirmwareEntries.c)
 *     BiIsSystemStore @ 0x14085E2C0 (BiIsSystemStore.c)
 *     BiCloseStore @ 0x14085EF8C (BiCloseStore.c)
 *     BiAcquireBcdSyncMutant @ 0x1409BE268 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409BE32C (BiReleaseBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     BiIsWinPEBoot @ 0x1409C1B7C (BiIsWinPEBoot.c)
 */

__int64 __fastcall BcdCloseStore(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // si
  int v4; // eax
  __int64 v5; // r8
  unsigned int v6; // r8d
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned int v11; // r8d
  unsigned int v12; // ebx
  char IsWinPEBoot; // al

  LOBYTE(v2) = BiIsOfflineHandle(a1);
  v3 = v2;
  v4 = BiAcquireBcdSyncMutant(v2);
  if ( v4 < 0 )
  {
    BiLogMessage(4LL, L"BcdCloseStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v4);
    return v11;
  }
  else
  {
    if ( BiIsSystemStore(a1) )
    {
      v12 = BiIsSynchFirmwareEntries(a1) ? 4 : 0;
      IsWinPEBoot = BiIsWinPEBoot();
      v5 = v12 | 2;
      if ( !IsWinPEBoot )
        v5 = v12;
    }
    else
    {
      v5 = 2LL;
    }
    BiLogMessage(2LL, L"Closing store. Flags: 0x%x", v5);
    v7 = BiCloseStore(a1, v6);
    LOBYTE(v8) = v3;
    v9 = v7;
    BiReleaseBcdSyncMutant(v8);
    return v9;
  }
}
