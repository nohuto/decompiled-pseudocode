/*
 * XREFs of BcdForciblyUnloadStore @ 0x1408123C4
 * Callers:
 *     BiOpenSystemStore @ 0x1409A7610 (BiOpenSystemStore.c)
 *     PopAllocateHiberContext @ 0x140AC4284 (PopAllocateHiberContext.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1404A5974 (BiIsOfflineHandle.c)
 *     BiIsSynchFirmwareEntries @ 0x1406987D0 (BiIsSynchFirmwareEntries.c)
 *     BiExportStoreAlterationsToFirmware @ 0x140814E64 (BiExportStoreAlterationsToFirmware.c)
 *     BiIsSystemStore @ 0x14085A030 (BiIsSystemStore.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A48B8 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A497C (BiReleaseBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BiUnloadHiveByHandle @ 0x140A81B58 (BiUnloadHiveByHandle.c)
 */

NTSTATUS __cdecl BcdForciblyUnloadStore(HANDLE BcdStoreHandle)
{
  __int64 v2; // rcx
  char v3; // si
  int v4; // eax
  __int64 v5; // rdx
  NTSTATUS v6; // r8d
  NTSTATUS v8; // ebx
  __int64 v9; // rdx
  NTSTATUS v10; // eax
  __int64 v11; // rcx

  LOBYTE(v2) = BiIsOfflineHandle((char)BcdStoreHandle);
  v3 = v2;
  v4 = BiAcquireBcdSyncMutant(v2);
  if ( v4 >= 0 )
  {
    v8 = 0;
    if ( (unsigned __int8)BiIsSystemStore(BcdStoreHandle, v5, (unsigned int)v4)
      && BiIsSynchFirmwareEntries((char)BcdStoreHandle) )
    {
      BiLogMessage(2LL, L"Exporting forcible unload to firmware");
      v8 = BiExportStoreAlterationsToFirmware(BcdStoreHandle);
    }
    LOBYTE(v9) = 1;
    v10 = BiUnloadHiveByHandle(BcdStoreHandle, v9);
    if ( v8 < 0 )
      BiLogMessage(4LL, L"Failed to export unload alterations to firmware. Status: %x", (unsigned int)v8);
    else
      v8 = v10;
    LOBYTE(v11) = v3;
    BiReleaseBcdSyncMutant(v11);
    return v8;
  }
  else
  {
    BiLogMessage(4LL, L"BcdForciblyUnloadStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v4);
    return v6;
  }
}
