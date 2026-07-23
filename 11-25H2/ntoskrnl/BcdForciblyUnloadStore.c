/*
 * XREFs of BcdForciblyUnloadStore @ 0x14080210C
 * Callers:
 *     BiOpenSystemStore @ 0x140A26AF8 (BiOpenSystemStore.c)
 *     PopAllocateHiberContext @ 0x140ABEFAC (PopAllocateHiberContext.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1404A9F20 (BiIsOfflineHandle.c)
 *     BiIsSynchFirmwareEntries @ 0x14068C400 (BiIsSynchFirmwareEntries.c)
 *     BiExportStoreAlterationsToFirmware @ 0x140804BAC (BiExportStoreAlterationsToFirmware.c)
 *     BiAcquireBcdSyncMutant @ 0x140966848 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x14096690C (BiReleaseBcdSyncMutant.c)
 *     BiUnloadHiveByHandle @ 0x140A24908 (BiUnloadHiveByHandle.c)
 *     BiIsSystemStore @ 0x140A24C40 (BiIsSystemStore.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
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
