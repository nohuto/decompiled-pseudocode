/*
 * XREFs of HalpExtEnvMarkHiberRegions @ 0x1404D710C
 * Callers:
 *     HaliLocateHiberRanges @ 0x140B6E700 (HaliLocateHiberRanges.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoSetHiberRange @ 0x1402649E0 (PoSetHiberRange.c)
 */

void __fastcall HalpExtEnvMarkHiberRegions(PVOID MemoryMap)
{
  __int64 i; // rbx
  KIRQL v3; // al
  __int64 *v4; // rbx
  KIRQL v5; // si

  if ( MemoryMap )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&ExtEnvAllocationLock);
    v4 = (__int64 *)ExtEnvLockList;
    v5 = v3;
    while ( v4 != &ExtEnvLockList )
    {
      PoSetHiberRange(MemoryMap, 2u, v4 + 2, 8uLL, 0x496C6148u);
      v4 = (__int64 *)*v4;
    }
    KeReleaseSpinLock(&ExtEnvAllocationLock, v5);
  }
  else
  {
    for ( i = ExtEnvAllocationList; (__int64 *)i != &ExtEnvAllocationList; i = *(_QWORD *)i )
      PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(i + 16), *(_QWORD *)(i + 40), 0x496C6148u);
  }
}
