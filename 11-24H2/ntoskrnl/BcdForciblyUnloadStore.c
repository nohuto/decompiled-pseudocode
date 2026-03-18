/*
 * XREFs of BcdForciblyUnloadStore @ 0x140811C84
 * Callers:
 *     BiOpenSystemStore @ 0x1409C0FC0 (BiOpenSystemStore.c)
 *     PopAllocateHiberContext @ 0x140AC688C (PopAllocateHiberContext.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1404AB350 (BiIsOfflineHandle.c)
 *     BiIsSynchFirmwareEntries @ 0x140697750 (BiIsSynchFirmwareEntries.c)
 *     BiExportStoreAlterationsToFirmware @ 0x140814724 (BiExportStoreAlterationsToFirmware.c)
 *     BiIsSystemStore @ 0x14085E2C0 (BiIsSystemStore.c)
 *     BiUnloadHiveByHandle @ 0x14085EDB0 (BiUnloadHiveByHandle.c)
 *     BiAcquireBcdSyncMutant @ 0x1409BE268 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409BE32C (BiReleaseBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 */

__int64 __fastcall BcdForciblyUnloadStore(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // si
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // r8d
  int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx

  LOBYTE(v2) = BiIsOfflineHandle(a1);
  v3 = v2;
  v4 = BiAcquireBcdSyncMutant(v2);
  if ( v4 >= 0 )
  {
    v8 = 0;
    if ( (unsigned __int8)BiIsSystemStore(a1, v5, (unsigned int)v4) && BiIsSynchFirmwareEntries(a1) )
    {
      BiLogMessage(2LL, L"Exporting forcible unload to firmware");
      v8 = BiExportStoreAlterationsToFirmware(a1);
    }
    LOBYTE(v9) = 1;
    v10 = BiUnloadHiveByHandle(a1, v9);
    if ( v8 < 0 )
      BiLogMessage(4LL, L"Failed to export unload alterations to firmware. Status: %x", (unsigned int)v8);
    else
      v8 = v10;
    LOBYTE(v11) = v3;
    BiReleaseBcdSyncMutant(v11);
    return (unsigned int)v8;
  }
  else
  {
    BiLogMessage(4LL, L"BcdForciblyUnloadStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v4);
    return v6;
  }
}
