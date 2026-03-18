/*
 * XREFs of MmMapLockedPagesWithReservedMapping @ 0x140410510
 * Callers:
 *     SmFpAllocate @ 0x14037C660 (SmFpAllocate.c)
 *     HalpDmaAcquireBufferMappings @ 0x1403902DC (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x1403917D4 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     PspIumFreePhysicalPages @ 0x14040F384 (PspIumFreePhysicalPages.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x1404CE494 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     sub_140519160 @ 0x140519160 (sub_140519160.c)
 *     PnprCopyReservedMapping @ 0x1405A7704 (PnprCopyReservedMapping.c)
 *     EtwpSavePersistedLogger @ 0x1407AFE60 (EtwpSavePersistedLogger.c)
 *     PnprMapPhysicalPages @ 0x140B53F7C (PnprMapPhysicalPages.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     MiLegitimatePageForDriversToMap @ 0x1402855E0 (MiLegitimatePageForDriversToMap.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     MiTranslateCacheType @ 0x140412140 (MiTranslateCacheType.c)
 *     MiMapMdlCommon @ 0x1404F0304 (MiMapMdlCommon.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

PVOID __stdcall MmMapLockedPagesWithReservedMapping(
        PVOID MappingAddress,
        ULONG PoolTag,
        PMDL MemoryDescriptorList,
        MEMORY_CACHING_TYPE CacheType)
{
  ULONG_PTR v5; // rbp
  _DWORD *v7; // r8
  int v8; // r12d
  unsigned __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // cl
  KIRQL v11; // r15
  __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  ULONG_PTR BugCheckParameter4; // rcx
  _QWORD *i; // r9
  PMDL j; // rbx

  v5 = PoolTag;
  v8 = MiTranslateCacheType((unsigned int)CacheType);
  if ( v8 == 3 )
    return 0LL;
  v9 = (((v7[8] + v7[11]) & 0xFFF) + (unsigned __int64)(unsigned int)v7[10] + 4095) >> 12;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 2 )
  {
    v11 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E35EA8);
  }
  else
  {
    v11 = ExAcquireSpinLockShared(&dword_140E35EA8);
  }
  v12 = qword_140E35EB0;
  v13 = (unsigned __int64)MappingAddress & 0xFFFFFFFFFFFFF000uLL;
  while ( v12 )
  {
    v15 = *(_QWORD *)(v12 + 24);
    if ( v13 < v15 )
    {
      v12 = *(_QWORD *)v12;
    }
    else
    {
      if ( v13 < v15 + (*(_QWORD *)(v12 + 32) << 12) )
        break;
      v12 = *(_QWORD *)(v12 + 8);
    }
  }
  if ( !v12 )
    KeBugCheckEx(0xDAu, 0x106uLL, (ULONG_PTR)MappingAddress, v5, 1uLL);
  MiReleaseSpinLockShared(&dword_140E35EA8, v11);
  if ( *(_DWORD *)(v12 + 40) != (_DWORD)v5 )
    KeBugCheckEx(0xDAu, 0x104uLL, (ULONG_PTR)MappingAddress, v5, *(unsigned int *)(v12 + 40));
  if ( (*(_DWORD *)(v12 + 44) & 1) != 0 )
  {
    if ( ((unsigned __int16)MappingAddress & 0xFFF) != 0 )
      return 0LL;
    v17 = v9;
    v16 = *(_QWORD *)(v12 + 32) - (((unsigned __int64)MappingAddress - *(_QWORD *)(v12 + 24)) >> 12);
  }
  else
  {
    v16 = *(_QWORD *)(v12 + 32);
    MappingAddress = *(PVOID *)(v12 + 24);
    v17 = v16;
  }
  if ( v9 <= v16 )
  {
    BugCheckParameter4 = (((unsigned __int64)MappingAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 8 * v17;
    for ( i = (_QWORD *)((((unsigned __int64)MappingAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          (unsigned __int64)i < BugCheckParameter4;
          ++i )
    {
      if ( *i )
        KeBugCheckEx(0xDAu, 0x107uLL, (ULONG_PTR)MappingAddress, (ULONG_PTR)i, BugCheckParameter4);
    }
    for ( j = MemoryDescriptorList + 1;
          j->Next > (struct _MDL *)qword_140E2DBE0
       || ((*(_QWORD *)(48 * (__int64)j->Next - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0
       || (int)MiLegitimatePageForDriversToMap(48 * (__int64)j->Next - 0x220000000000LL) >= 0;
          j = (PMDL)((char *)j + 8) )
    {
      if ( !--v9 )
        return (PVOID)MiMapMdlCommon(
                        (_DWORD)MemoryDescriptorList,
                        (unsigned int)((unsigned __int64)MappingAddress >> 9) & 0xFFFFFFF8,
                        0,
                        4,
                        v8);
    }
  }
  return 0LL;
}
