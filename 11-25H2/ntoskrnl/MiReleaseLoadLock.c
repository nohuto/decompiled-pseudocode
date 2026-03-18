/*
 * XREFs of MiReleaseLoadLock @ 0x14036E2B0
 * Callers:
 *     MmUnlockLoadedDataTableEntryShared @ 0x14036CEEC (MmUnlockLoadedDataTableEntryShared.c)
 *     MmReleaseLoadLock @ 0x14036D060 (MmReleaseLoadLock.c)
 *     MiUnlockLoadedDataTableEntry @ 0x14036DE44 (MiUnlockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntry @ 0x14036E278 (MmUnlockLoadedDataTableEntry.c)
 *     MmReleaseLoadLockShared @ 0x14036E590 (MmReleaseLoadLockShared.c)
 *     KasaniGetModuleFromAddress @ 0x1405A6640 (KasaniGetModuleFromAddress.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall MiReleaseLoadLock(__int64 a1, int a2)
{
  bool v3; // zf

  --*(_WORD *)(a1 + 486);
  if ( a2 )
  {
    if ( !--dword_140E2D5D8 )
      qword_140E2D5D0 = 0LL;
  }
  else
  {
    --*(_DWORD *)(a1 + 1456);
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  v3 = (*(_WORD *)(a1 + 486))++ == 0xFFFF;
  if ( v3 && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery();
  return KeLeaveCriticalRegionThread(a1);
}
