/*
 * XREFs of BcdCreateObject @ 0x140A26248
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x140650F00 (WheaPersistBadPageToBcd.c)
 *     PopBcdRegenerateResumeObject @ 0x140753CD0 (PopBcdRegenerateResumeObject.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x1404A75E4 (BiSetFirmwareModified.c)
 *     BiIsOfflineHandle @ 0x1404A9F20 (BiIsOfflineHandle.c)
 *     BiAcquireBcdSyncMutant @ 0x140966848 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x14096690C (BiReleaseBcdSyncMutant.c)
 *     BiCreateObject @ 0x140A262E4 (BiCreateObject.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140A27ED0 (BiIsLinkedToFirmwareVariable.c)
 */

int __fastcall BcdCreateObject(__int64 a1, int a2, int a3, _QWORD *a4)
{
  char IsOfflineHandle; // bp
  int result; // eax
  int Object; // ebx

  IsOfflineHandle = BiIsOfflineHandle(a1);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    Object = BiCreateObject(a1, a2, a3, 0, (__int64)a4);
    if ( Object >= 0 )
    {
      if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(*a4, 0LL) )
        BiSetFirmwareModified(a1, 1);
    }
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return Object;
  }
  return result;
}
