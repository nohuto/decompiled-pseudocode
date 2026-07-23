/*
 * XREFs of SmKmUnlockMdl @ 0x1402F9B04
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x1402E7B10 (SmKmStoreHelperCommandProcess.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1402F85D0 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmKmStoreHelperCommandCleanup @ 0x1404BF6E4 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MiUnlockStoreLockedPages @ 0x1402FA670 (MiUnlockStoreLockedPages.c)
 *     SmFpFree @ 0x140421480 (SmFpFree.c)
 *     MmUnmapReservedMapping @ 0x140433320 (MmUnmapReservedMapping.c)
 *     SmpFpReleaseResource @ 0x1404F7000 (SmpFpReleaseResource.c)
 */

__int64 __fastcall SmKmUnlockMdl(PMDL MemoryDescriptorList, PEX_SPIN_LOCK SpinLock, __int64 a3)
{
  PVOID MappedSystemVa; // rsi

  if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
  {
    MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    if ( SpinLock && *((_QWORD *)SpinLock + 14) == a3 && (unsigned int)SmpFpReleaseResource(SpinLock) )
    {
      MmUnmapReservedMapping(MappedSystemVa, 0x6D526D73u, MemoryDescriptorList);
      if ( !*((_BYTE *)SpinLock + 94) )
      {
        _InterlockedExchange64((volatile __int64 *)SpinLock + 14, 0LL);
        KeSetEvent((PRKEVENT)(SpinLock + 2), 0, 0);
      }
    }
    else
    {
      MmUnmapLockedPages(MappedSystemVa, MemoryDescriptorList);
    }
  }
  if ( MemoryDescriptorList->Next )
  {
    SmFpFree(SpinLock, 4LL, a3, MemoryDescriptorList->Next);
    MemoryDescriptorList->Next = 0LL;
  }
  return MiUnlockStoreLockedPages(MemoryDescriptorList);
}
