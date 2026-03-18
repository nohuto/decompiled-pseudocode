/*
 * XREFs of BcdOpenStore @ 0x1409C2038
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x14065CE90 (WheaPersistBadPageToBcd.c)
 *     PopFreeHiberContext @ 0x1406FB788 (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x140748B24 (PoInitHiberServices.c)
 *     PopValidateWinresume @ 0x140752EA8 (PopValidateWinresume.c)
 *     PopAdaptiveClearInitialSystemPowerState @ 0x14075F12C (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopBcdOpen @ 0x1409C2170 (PopBcdOpen.c)
 *     PopAllocateHiberContext @ 0x140AC688C (PopAllocateHiberContext.c)
 * Callees:
 *     BiAcquireBcdSyncMutant @ 0x1409BE268 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409BE32C (BiReleaseBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     BiOpenSystemStore @ 0x1409C0FC0 (BiOpenSystemStore.c)
 */

__int64 __fastcall BcdOpenStore(__int64 a1, char a2, __int64 *a3)
{
  char v3; // di
  int v5; // esi
  unsigned int v6; // r10d
  char v8; // cl
  int v9; // ebx
  char v10; // r9

  v3 = a2 & 1;
  v5 = a2 & 2;
  if ( BiAcquireBcdSyncMutant(a2 & 1) >= 0 )
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
      v9 = BiOpenSystemStore(a3, v10);
      if ( v9 < 0 )
        BiLogMessage();
    }
    BiReleaseBcdSyncMutant(v3);
    return (unsigned int)v9;
  }
  else
  {
    BiLogMessage();
    return v6;
  }
}
