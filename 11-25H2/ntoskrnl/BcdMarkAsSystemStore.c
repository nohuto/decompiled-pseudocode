/*
 * XREFs of BcdMarkAsSystemStore @ 0x1408021C4
 * Callers:
 *     BcdSetSystemStore @ 0x140802288 (BcdSetSystemStore.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1404A9F20 (BiIsOfflineHandle.c)
 *     BiAcquireBcdSyncMutant @ 0x140966848 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x14096690C (BiReleaseBcdSyncMutant.c)
 *     BiSetRegistryValue @ 0x140A25BA8 (BiSetRegistryValue.c)
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
