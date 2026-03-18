/*
 * XREFs of BcdCreateObject @ 0x14085E224
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x14065CE90 (WheaPersistBadPageToBcd.c)
 *     PopBcdRegenerateResumeObject @ 0x140763790 (PopBcdRegenerateResumeObject.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x1404A7F74 (BiSetFirmwareModified.c)
 *     BiIsOfflineHandle @ 0x1404AB350 (BiIsOfflineHandle.c)
 *     BiIsLinkedToFirmwareVariable @ 0x14085DDCC (BiIsLinkedToFirmwareVariable.c)
 *     BiCreateObject @ 0x14085E04C (BiCreateObject.c)
 *     BiAcquireBcdSyncMutant @ 0x1409BE268 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409BE32C (BiReleaseBcdSyncMutant.c)
 */

__int64 __fastcall BcdCreateObject(__int64 a1, __int64 a2, unsigned int *a3, __int64 *a4)
{
  __int64 v8; // rcx
  char v9; // bp
  __int64 result; // rax
  __int64 v11; // rcx
  NTSTATUS Object; // ebx

  LOBYTE(v8) = BiIsOfflineHandle(a1);
  v9 = v8;
  result = BiAcquireBcdSyncMutant(v8);
  if ( (int)result >= 0 )
  {
    Object = BiCreateObject(a1, a2, a3, 0LL, a4);
    if ( Object >= 0 )
    {
      if ( BiIsLinkedToFirmwareVariable(*a4, 0LL) )
        BiSetFirmwareModified(a1, 1);
    }
    LOBYTE(v11) = v9;
    BiReleaseBcdSyncMutant(v11);
    return (unsigned int)Object;
  }
  return result;
}
