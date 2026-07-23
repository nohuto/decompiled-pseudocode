/*
 * XREFs of BcdMarkAsSystemStore @ 0x14081247C
 * Callers:
 *     BcdSetSystemStore @ 0x140812540 (BcdSetSystemStore.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1404A5974 (BiIsOfflineHandle.c)
 *     BiSetRegistryValue @ 0x140859C9C (BiSetRegistryValue.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A48B8 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A497C (BiReleaseBcdSyncMutant.c)
 */

NTSTATUS __cdecl BcdMarkAsSystemStore(HANDLE BcdStoreHandle)
{
  __int64 v2; // rcx
  char v3; // di
  NTSTATUS result; // eax
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  NTSTATUS v7; // ebx

  LOBYTE(v2) = BiIsOfflineHandle((char)BcdStoreHandle);
  v3 = v2;
  result = BiAcquireBcdSyncMutant(v2);
  if ( result >= 0 )
  {
    v5 = BiSetRegistryValue(BcdStoreHandle, L"System", L"Description");
    LOBYTE(v6) = v3;
    v7 = v5;
    BiReleaseBcdSyncMutant(v6);
    return v7;
  }
  return result;
}
