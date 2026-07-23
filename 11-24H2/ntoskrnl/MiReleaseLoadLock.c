/*
 * XREFs of MiReleaseLoadLock @ 0x1402BBE90
 * Callers:
 *     MiUnlockLoadedDataTableEntry @ 0x1402BBA24 (MiUnlockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1402BBE58 (MmUnlockLoadedDataTableEntry.c)
 *     MmReleaseLoadLockShared @ 0x1402BC170 (MmReleaseLoadLockShared.c)
 *     MmUnlockLoadedDataTableEntryShared @ 0x1404AEB90 (MmUnlockLoadedDataTableEntryShared.c)
 *     MmReleaseLoadLock @ 0x1404C2E10 (MmReleaseLoadLock.c)
 *     KasaniGetModuleFromAddress @ 0x1405A6F40 (KasaniGetModuleFromAddress.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall MiReleaseLoadLock(__int64 a1, int a2)
{
  bool v3; // zf

  --*(_WORD *)(a1 + 486);
  if ( a2 )
  {
    if ( !--dword_140E2D958 )
      qword_140E2D950 = 0LL;
  }
  else
  {
    --*(_DWORD *)(a1 + 1456);
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  v3 = (*(_WORD *)(a1 + 486))++ == 0xFFFF;
  if ( v3 && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery();
  return KeLeaveCriticalRegionThread();
}
