/*
 * XREFs of BcdDeleteObject @ 0x1409A8B70
 * Callers:
 *     PopBcdRegenerateResumeObject @ 0x140763154 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x1409A6BC4 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x140A96064 (BiBindEfiEntries.c)
 * Callees:
 *     BiSetFirmwareModifiedFromObject @ 0x1404A2898 (BiSetFirmwareModifiedFromObject.c)
 *     BiIsOfflineHandle @ 0x1404A5974 (BiIsOfflineHandle.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140859B3C (BiIsLinkedToFirmwareVariable.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A48B8 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A497C (BiReleaseBcdSyncMutant.c)
 *     BiDeleteKey @ 0x1409A62C4 (BiDeleteKey.c)
 */

NTSTATUS __cdecl BcdDeleteObject(HANDLE BcdObjectHandle)
{
  char IsOfflineHandle; // di
  NTSTATUS result; // eax
  NTSTATUS v4; // ebx

  IsOfflineHandle = BiIsOfflineHandle((char)BcdObjectHandle);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    if ( BiIsLinkedToFirmwareVariable((__int64)BcdObjectHandle, 0LL) )
      BiSetFirmwareModifiedFromObject(BcdObjectHandle);
    v4 = BiDeleteKey((__int64)BcdObjectHandle);
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return v4;
  }
  return result;
}
