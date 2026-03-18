/*
 * XREFs of MmPageEntireDriver @ 0x140A3E710
 * Callers:
 *     DifMmPageEntireDriverWrapper @ 0x140634280 (DifMmPageEntireDriverWrapper.c)
 * Callees:
 *     KeFlushQueuedDpcs @ 0x140204EA0 (KeFlushQueuedDpcs.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1402C6EFC (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1402C72D8 (MmUnlockLoadedDataTableEntry.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     MiSetPagingOfDriver @ 0x14049CBA8 (MiSetPagingOfDriver.c)
 *     MiCancelPhase0Locking @ 0x140A3E7C0 (MiCancelPhase0Locking.c)
 */

PVOID __stdcall MmPageEntireDriver(PVOID AddressWithinSection)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  void *v4; // rbp
  unsigned __int64 *PteAddress; // rdi
  unsigned __int64 *v6; // rbx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)AddressWithinSection) )
    return 0LL;
  v2 = MiLockLoadedDataTableEntryIfNecessary((__int64)AddressWithinSection, &v8);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  v4 = *(void **)(v2 + 48);
  if ( (dword_140FC41F4 & 1) == 0 )
  {
    KeFlushQueuedDpcs();
    PteAddress = (unsigned __int64 *)MiGetPteAddress((unsigned __int64)v4);
    v6 = &PteAddress[(unsigned __int64)*(unsigned int *)(v3 + 64) >> 12];
    MiCancelPhase0Locking(v3);
    MiSetPagingOfDriver(v3, PteAddress, (unsigned __int64)(v6 - 1));
  }
  if ( v8 )
    MmUnlockLoadedDataTableEntry(v3);
  return v4;
}
