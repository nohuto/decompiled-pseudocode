/*
 * XREFs of BcdOpenSystemStore @ 0x140802238
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x140784A64 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiAcquireBcdSyncMutant @ 0x140966848 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x14096690C (BiReleaseBcdSyncMutant.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 *     BiOpenSystemStore @ 0x140A26AF8 (BiOpenSystemStore.c)
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
