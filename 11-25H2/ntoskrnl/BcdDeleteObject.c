/*
 * XREFs of BcdDeleteObject @ 0x140A24A18
 * Callers:
 *     PopBcdRegenerateResumeObject @ 0x140753CD0 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x140A25DC8 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x140A94DD4 (BiBindEfiEntries.c)
 * Callees:
 *     BiSetFirmwareModifiedFromObject @ 0x1404A74B8 (BiSetFirmwareModifiedFromObject.c)
 *     BiIsOfflineHandle @ 0x1404A9F20 (BiIsOfflineHandle.c)
 *     BiAcquireBcdSyncMutant @ 0x140966848 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x14096690C (BiReleaseBcdSyncMutant.c)
 *     BiDeleteKey @ 0x140A27140 (BiDeleteKey.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140A27ED0 (BiIsLinkedToFirmwareVariable.c)
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
    if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(a1, 0LL) )
      BiSetFirmwareModifiedFromObject(a1);
    v4 = BiDeleteKey(a1);
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return v4;
  }
  return result;
}
