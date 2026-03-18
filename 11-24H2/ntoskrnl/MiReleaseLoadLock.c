/*
 * XREFs of MiReleaseLoadLock @ 0x1402C7310
 * Callers:
 *     MiUnlockLoadedDataTableEntry @ 0x1402C6EA4 (MiUnlockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1402C72D8 (MmUnlockLoadedDataTableEntry.c)
 *     MmReleaseLoadLockShared @ 0x1402C75F0 (MmReleaseLoadLockShared.c)
 *     MmUnlockLoadedDataTableEntryShared @ 0x1404B4344 (MmUnlockLoadedDataTableEntryShared.c)
 *     MmReleaseLoadLock @ 0x1404C9960 (MmReleaseLoadLock.c)
 *     KasaniGetModuleFromAddress @ 0x1405A9FD0 (KasaniGetModuleFromAddress.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall MiReleaseLoadLock(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  bool v5; // zf

  --*(_WORD *)(a1 + 486);
  if ( a2 )
  {
    if ( !--dword_140E2D818 )
      qword_140E2D810 = 0LL;
  }
  else
  {
    --*(_DWORD *)(a1 + 1456);
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  v5 = (*(_WORD *)(a1 + 486))++ == 0xFFFF;
  if ( v5 && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery(v4, v3);
  return KeLeaveCriticalRegionThread();
}
