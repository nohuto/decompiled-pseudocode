/*
 * XREFs of BcdOpenStore @ 0x140A24A98
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x140650F00 (WheaPersistBadPageToBcd.c)
 *     PopFreeHiberContext @ 0x1406EF918 (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x14073CB14 (PoInitHiberServices.c)
 *     PopValidateWinresume @ 0x140746DC4 (PopValidateWinresume.c)
 *     PopAdaptiveClearInitialSystemPowerState @ 0x14075270C (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopBcdOpen @ 0x140A24A78 (PopBcdOpen.c)
 *     PopAllocateHiberContext @ 0x140ABEFAC (PopAllocateHiberContext.c)
 * Callees:
 *     BiAcquireBcdSyncMutant @ 0x140966848 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x14096690C (BiReleaseBcdSyncMutant.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 *     BiOpenSystemStore @ 0x140A26AF8 (BiOpenSystemStore.c)
 */

NTSTATUS __cdecl BcdOpenStore(UNICODE_STRING *BcdFilePath, BCD_OPEN_FLAGS BcdOpenFlags, PHANDLE BcdStoreHandle)
{
  char v3; // di
  __int32 v6; // esi
  NTSTATUS v7; // eax
  NTSTATUS v8; // r10d
  __int64 v10; // rcx
  __int64 v11; // r8
  NTSTATUS v12; // ebx
  unsigned int v13; // r9d
  int v14; // eax

  v3 = BcdOpenFlags & 1;
  v6 = BcdOpenFlags & 2;
  v7 = BiAcquireBcdSyncMutant(BcdOpenFlags & 1);
  if ( v7 >= 0 )
  {
    BiLogMessage(2LL, L"Opening store. Flags: 0x%x", (unsigned int)BcdOpenFlags);
    if ( v3 )
    {
      v12 = -1073741811;
    }
    else
    {
      if ( v6 )
        BiLogMessage(v10, L"Store will be synchronized with firmware.");
      else
        v13 = v10;
      v14 = BiOpenSystemStore(BcdStoreHandle, v13, v11);
      v12 = v14;
      if ( v14 < 0 )
        BiLogMessage(4LL, L"Failed to open system store. Status: %x", (unsigned int)v14);
    }
    BiReleaseBcdSyncMutant(v3);
    return v12;
  }
  else
  {
    BiLogMessage(
      4LL,
      L"BcdOpenStore: Failed to acquire BCD sync Mutant. Store: %wsFlags: 0x%x Status: %x",
      L"NULL",
      (unsigned int)BcdOpenFlags,
      v7);
    return v8;
  }
}
