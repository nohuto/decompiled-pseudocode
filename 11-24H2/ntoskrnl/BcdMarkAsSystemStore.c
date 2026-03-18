/*
 * XREFs of BcdMarkAsSystemStore @ 0x140811D3C
 * Callers:
 *     BcdSetSystemStore @ 0x140811E00 (BcdSetSystemStore.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1404AB350 (BiIsOfflineHandle.c)
 *     BiSetRegistryValue @ 0x14085DF2C (BiSetRegistryValue.c)
 *     BiAcquireBcdSyncMutant @ 0x1409BE268 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409BE32C (BiReleaseBcdSyncMutant.c)
 */

__int64 __fastcall BcdMarkAsSystemStore(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // di
  __int64 result; // rax
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  LOBYTE(v2) = BiIsOfflineHandle(a1);
  v3 = v2;
  result = BiAcquireBcdSyncMutant(v2);
  if ( (int)result >= 0 )
  {
    v5 = BiSetRegistryValue(a1, L"System", L"Description");
    LOBYTE(v6) = v3;
    v7 = v5;
    BiReleaseBcdSyncMutant(v6);
    return v7;
  }
  return result;
}
