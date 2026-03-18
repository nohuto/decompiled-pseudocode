/*
 * XREFs of SmKmUnlockMdl @ 0x14039C804
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14037AA90 (SmKmStoreHelperCommandProcess.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14039B2D0 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmKmStoreHelperCommandCleanup @ 0x1404C6288 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     MiUnlockStoreLockedPages @ 0x14039D370 (MiUnlockStoreLockedPages.c)
 *     MmUnmapReservedMapping @ 0x14040F6F0 (MmUnmapReservedMapping.c)
 *     SmFpFree @ 0x14042F2B0 (SmFpFree.c)
 *     SmpFpReleaseResource @ 0x1404F9720 (SmpFpReleaseResource.c)
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
