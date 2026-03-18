/*
 * XREFs of PspIumFreePhysicalPages @ 0x14040F384
 * Callers:
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     PspIumFreePartitionPages @ 0x14040F4E8 (PspIumFreePartitionPages.c)
 *     MmFreeSecureKernelPages @ 0x14040F5A8 (MmFreeSecureKernelPages.c)
 *     MmUnmapReservedMapping @ 0x14040F6F0 (MmUnmapReservedMapping.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x140410510 (MmMapLockedPagesWithReservedMapping.c)
 */

__int64 __fastcall PspIumFreePhysicalPages(__int64 a1, unsigned int a2, __int64 a3)
{
  KIRQL v5; // si
  _DWORD *v6; // rbx
  struct _MDL MemoryDescriptorList; // [rsp+30h] [rbp-40h] BYREF
  __int64 v9; // [rsp+60h] [rbp-10h] BYREF

  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.ByteOffset = 0;
  v9 = a3;
  memset(&MemoryDescriptorList.MdlFlags + 1, 0, 28);
  v5 = 0;
  *(_DWORD *)&MemoryDescriptorList.Size = 131128;
  MemoryDescriptorList.ByteCount = 4096;
  v6 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
  if ( !v6 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&PspIumFreeMappingLock);
    v6 = MmMapLockedPagesWithReservedMapping(PspIumFreeMapping, 0x466D7356u, &MemoryDescriptorList, MmCached);
  }
  if ( v6[10] )
  {
    if ( a1 )
      PspIumFreePartitionPages(a1, (v6[10] >> 12) + (unsigned int)((v6[10] & 0xFFF) != 0), v6 + 12);
    else
      MmFreeSecureKernelPages(v6, a2);
  }
  if ( v6 == PspIumFreeMapping )
  {
    MmUnmapReservedMapping(v6, 0x466D7356u, &MemoryDescriptorList);
    KeReleaseSpinLock(&PspIumFreeMappingLock, v5);
  }
  else
  {
    MmUnmapLockedPages(v6, &MemoryDescriptorList);
  }
  if ( a1 )
    return PspIumFreePartitionPages(a1, 1LL, &v9);
  else
    return MmFreeSecureKernelPages(&MemoryDescriptorList, 0LL);
}
