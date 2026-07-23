/*
 * XREFs of BcdOpenSystemStore @ 0x1408124F0
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x140793ED4 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiAcquireBcdSyncMutant @ 0x1409A48B8 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A497C (BiReleaseBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BiOpenSystemStore @ 0x1409A7610 (BiOpenSystemStore.c)
 */

NTSTATUS __cdecl BcdOpenSystemStore(PHANDLE BcdStoreHandle)
{
  int v2; // eax
  NTSTATUS v3; // r8d
  NTSTATUS v5; // ebx

  v2 = BiAcquireBcdSyncMutant(0LL);
  if ( v2 >= 0 )
  {
    v5 = BiOpenSystemStore(BcdStoreHandle, 0LL, (unsigned int)v2);
    BiReleaseBcdSyncMutant(0LL);
    return v5;
  }
  else
  {
    BiLogMessage(4LL, L"BcdOpenSystemStore: Failed to acquire BCD sync mutant.Status: %x", (unsigned int)v2);
    return v3;
  }
}
