/*
 * XREFs of MiPersistMdl @ 0x1404C7C68
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x1404C7B90 (MiFlushFileOnlyMdl.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140266854 (MiUnmapPageInHyperSpaceWorker.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiPersistMemory @ 0x14067B8F0 (MiPersistMemory.c)
 *     MiPersistVa @ 0x14067B968 (MiPersistVa.c)
 */

void __fastcall MiPersistMdl(PMDL MemoryDescriptorList)
{
  unsigned __int64 v2; // rdi
  PVOID MappedSystemVa; // rax
  __int64 *i; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int8 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  if ( !byte_140E2DB40 )
  {
    v2 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
        + (unsigned __int64)MemoryDescriptorList->ByteCount
        + 4095) >> 12;
    if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
      MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000010);
    if ( MappedSystemVa )
    {
      MiPersistMemory(MappedSystemVa, v2 << 12);
      MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
    }
    else
    {
      for ( i = (__int64 *)&MemoryDescriptorList[1]; v2; --v2 )
      {
        v5 = MiMapPageInHyperSpaceWorker(*i, &v6, 0x20000000LL);
        MiPersistVa(v5);
        MiUnmapPageInHyperSpaceWorker(v5, v6, 0x80000000);
        ++i;
      }
    }
  }
}
