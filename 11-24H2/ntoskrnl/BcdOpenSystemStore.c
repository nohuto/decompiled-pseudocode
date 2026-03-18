/*
 * XREFs of BcdOpenSystemStore @ 0x140811DB0
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x140793E34 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiAcquireBcdSyncMutant @ 0x1409BE268 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409BE32C (BiReleaseBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     BiOpenSystemStore @ 0x1409C0FC0 (BiOpenSystemStore.c)
 */

__int64 __fastcall BcdOpenSystemStore(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // r8d
  unsigned int v5; // ebx

  v2 = BiAcquireBcdSyncMutant(0LL);
  if ( v2 >= 0 )
  {
    v5 = BiOpenSystemStore(a1, 0LL, (unsigned int)v2);
    BiReleaseBcdSyncMutant(0LL);
    return v5;
  }
  else
  {
    BiLogMessage(4LL, L"BcdOpenSystemStore: Failed to acquire BCD sync mutant.Status: %x", (unsigned int)v2);
    return v3;
  }
}
