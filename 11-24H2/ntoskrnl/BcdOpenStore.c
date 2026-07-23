/*
 * XREFs of BcdOpenStore @ 0x1409A8688
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x14065B5B0 (WheaPersistBadPageToBcd.c)
 *     PopFreeHiberContext @ 0x1406F93C8 (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x140746E14 (PoInitHiberServices.c)
 *     PopValidateWinresume @ 0x1407511C8 (PopValidateWinresume.c)
 *     PopAdaptiveClearInitialSystemPowerState @ 0x14075E0CC (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopBcdOpen @ 0x1409A87C0 (PopBcdOpen.c)
 *     PopAllocateHiberContext @ 0x140AC4284 (PopAllocateHiberContext.c)
 * Callees:
 *     BiAcquireBcdSyncMutant @ 0x1409A48B8 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A497C (BiReleaseBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BiOpenSystemStore @ 0x1409A7610 (BiOpenSystemStore.c)
 */

NTSTATUS __cdecl BcdOpenStore(UNICODE_STRING *BcdFilePath, BCD_OPEN_FLAGS BcdOpenFlags, PHANDLE BcdStoreHandle)
{
  char v3; // di
  __int32 v5; // esi
  NTSTATUS v6; // r10d
  char v8; // cl
  NTSTATUS v9; // ebx
  char v10; // r9

  v3 = BcdOpenFlags & 1;
  v5 = BcdOpenFlags & 2;
  if ( BiAcquireBcdSyncMutant(BcdOpenFlags & 1) >= 0 )
  {
    BiLogMessage();
    if ( v3 )
    {
      v9 = -1073741811;
    }
    else
    {
      if ( v5 )
        BiLogMessage();
      else
        v10 = v8;
      v9 = BiOpenSystemStore((__int64 *)BcdStoreHandle, v10);
      if ( v9 < 0 )
        BiLogMessage();
    }
    BiReleaseBcdSyncMutant(v3);
    return v9;
  }
  else
  {
    BiLogMessage();
    return v6;
  }
}
