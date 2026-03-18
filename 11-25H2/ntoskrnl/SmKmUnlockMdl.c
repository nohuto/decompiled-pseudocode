/*
 * XREFs of SmKmUnlockMdl @ 0x14020D154
 * Callers:
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14020BC20 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x14020D8E4 (SmKmStoreHelperCommandProcess.c)
 *     SmKmStoreHelperCommandCleanup @ 0x1404C5A10 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     MiUnlockStoreLockedPages @ 0x14020D220 (MiUnlockStoreLockedPages.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     SmFpFree @ 0x140327F20 (SmFpFree.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     MmUnmapReservedMapping @ 0x140411E60 (MmUnmapReservedMapping.c)
 *     SmpFpReleaseResource @ 0x140602264 (SmpFpReleaseResource.c)
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
    SmFpFree(SpinLock, 4LL, a3);
    MemoryDescriptorList->Next = 0LL;
  }
  return MiUnlockStoreLockedPages(MemoryDescriptorList);
}
