/*
 * XREFs of BcdCreateObject @ 0x140859F94
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x14065B5B0 (WheaPersistBadPageToBcd.c)
 *     PopBcdRegenerateResumeObject @ 0x140763154 (PopBcdRegenerateResumeObject.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x1404A29C4 (BiSetFirmwareModified.c)
 *     BiIsOfflineHandle @ 0x1404A5974 (BiIsOfflineHandle.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140859B3C (BiIsLinkedToFirmwareVariable.c)
 *     BiCreateObject @ 0x140859DBC (BiCreateObject.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A48B8 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A497C (BiReleaseBcdSyncMutant.c)
 */

NTSTATUS __cdecl BcdCreateObject(
        HANDLE BcdStoreHandle,
        PGUID Identifier,
        PBCD_OBJECT_DESCRIPTION Description,
        PHANDLE BcdObjectHandle)
{
  __int64 v8; // rcx
  char v9; // bp
  NTSTATUS result; // eax
  __int64 v11; // rcx
  int Object; // ebx

  LOBYTE(v8) = BiIsOfflineHandle((char)BcdStoreHandle);
  v9 = v8;
  result = BiAcquireBcdSyncMutant(v8);
  if ( result >= 0 )
  {
    Object = BiCreateObject(
               (__int64)BcdStoreHandle,
               (__int64)Identifier,
               (unsigned int *)Description,
               0LL,
               BcdObjectHandle);
    if ( Object >= 0 )
    {
      if ( BiIsLinkedToFirmwareVariable((__int64)*BcdObjectHandle, 0LL) )
        BiSetFirmwareModified((__int64)BcdStoreHandle, 1);
    }
    LOBYTE(v11) = v9;
    BiReleaseBcdSyncMutant(v11);
    return Object;
  }
  return result;
}
