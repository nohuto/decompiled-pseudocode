/*
 * XREFs of MiPersistMdl @ 0x1404C7140
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x1404C7068 (MiFlushFileOnlyMdl.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14040FDB8 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPersistMemory @ 0x140670130 (MiPersistMemory.c)
 *     MiPersistVa @ 0x1406701A8 (MiPersistVa.c)
 */

void __fastcall MiPersistMdl(PMDL MemoryDescriptorList)
{
  unsigned __int64 v2; // rdi
  PVOID MappedSystemVa; // rax
  __int64 *i; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int8 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  if ( !byte_140E2D900 )
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
        v5 = MiMapPageInHyperSpaceWorker(*i, &v6, 0x20000000);
        MiPersistVa(v5);
        MiUnmapPageInHyperSpaceWorker(v5, v6, 0x80000000);
        ++i;
      }
    }
  }
}
