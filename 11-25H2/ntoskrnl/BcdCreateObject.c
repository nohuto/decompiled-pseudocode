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

NTSTATUS __cdecl BcdCreateObject(
        HANDLE BcdStoreHandle,
        PGUID Identifier,
        PBCD_OBJECT_DESCRIPTION Description,
        PHANDLE BcdObjectHandle)
{
  int v5; // ebx
  int v6; // r14d
  char IsOfflineHandle; // bp
  NTSTATUS result; // eax
  NTSTATUS Object; // ebx

  v5 = (int)Description;
  v6 = (int)Identifier;
  IsOfflineHandle = BiIsOfflineHandle((char)BcdStoreHandle);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    Object = BiCreateObject((_DWORD)BcdStoreHandle, v6, v5, 0, (__int64)BcdObjectHandle);
    if ( Object >= 0 )
    {
      if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(*BcdObjectHandle, 0LL) )
        BiSetFirmwareModified((__int64)BcdStoreHandle, 1);
    }
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return Object;
  }
  return result;
}
