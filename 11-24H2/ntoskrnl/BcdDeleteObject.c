/*
 * XREFs of BcdDeleteObject @ 0x1409C2520
 * Callers:
 *     PopBcdRegenerateResumeObject @ 0x140763790 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x1409C0574 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x140A9AAF4 (BiBindEfiEntries.c)
 * Callees:
 *     BiSetFirmwareModifiedFromObject @ 0x1404A7E48 (BiSetFirmwareModifiedFromObject.c)
 *     BiIsOfflineHandle @ 0x1404AB350 (BiIsOfflineHandle.c)
 *     BiIsLinkedToFirmwareVariable @ 0x14085DDCC (BiIsLinkedToFirmwareVariable.c)
 *     BiAcquireBcdSyncMutant @ 0x1409BE268 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409BE32C (BiReleaseBcdSyncMutant.c)
 *     BiDeleteKey @ 0x1409BFC74 (BiDeleteKey.c)
 */

int __fastcall BcdDeleteObject(void *a1)
{
  char IsOfflineHandle; // di
  int result; // eax
  int v4; // ebx

  IsOfflineHandle = BiIsOfflineHandle((char)a1);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    if ( BiIsLinkedToFirmwareVariable((__int64)a1, 0LL) )
      BiSetFirmwareModifiedFromObject(a1);
    v4 = BiDeleteKey((__int64)a1);
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return v4;
  }
  return result;
}
