/*
 * XREFs of PspIumFreePhysicalPages @ 0x140432FA8
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x14041D8B0 (MmMapLockedPagesWithReservedMapping.c)
 *     PspIumFreePartitionPages @ 0x14043310C (PspIumFreePartitionPages.c)
 *     MmFreeSecureKernelPages @ 0x1404331CC (MmFreeSecureKernelPages.c)
 *     MmUnmapReservedMapping @ 0x140433320 (MmUnmapReservedMapping.c)
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
