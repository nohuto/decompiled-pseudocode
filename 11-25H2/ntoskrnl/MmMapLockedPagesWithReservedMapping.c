/*
 * XREFs of MmMapLockedPagesWithReservedMapping @ 0x140433470
 * Callers:
 *     SmFpAllocate @ 0x140327D80 (SmFpAllocate.c)
 *     HalpDmaAcquireBufferMappings @ 0x1403368EC (HalpDmaAcquireBufferMappings.c)
 *     PspIumFreePhysicalPages @ 0x140411AF4 (PspIumFreePhysicalPages.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x1404CE6B4 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x1404D4CFC (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     sub_1405169E0 @ 0x1405169E0 (sub_1405169E0.c)
 *     PnprCopyReservedMapping @ 0x1405A3EF4 (PnprCopyReservedMapping.c)
 *     EtwpSavePersistedLogger @ 0x1407A0A90 (EtwpSavePersistedLogger.c)
 *     PnprMapPhysicalPages @ 0x140B43F7C (PnprMapPhysicalPages.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140323610 (MiReleaseSpinLockShared.c)
 *     MiTranslateCacheType @ 0x1404156B0 (MiTranslateCacheType.c)
 *     MiLegitimatePageForDriversToMap @ 0x1404336D0 (MiLegitimatePageForDriversToMap.c)
 *     MiMapMdlCommon @ 0x1404ECDC4 (MiMapMdlCommon.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
  v8 = MiTranslateCacheType(CacheType);
  if ( v8 == 3 )
    return 0LL;
  v9 = (((v7[8] + v7[11]) & 0xFFF) + (unsigned __int64)(unsigned int)v7[10] + 4095) >> 12;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 2 )
  {
    v11 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E35C68);
  }
  else
  {
    v11 = ExAcquireSpinLockShared(&dword_140E35C68);
  }
  v12 = qword_140E35C70;
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
  MiReleaseSpinLockShared(&dword_140E35C68, v11);
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
          j->Next > (struct _MDL *)qword_140E2D9A0
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
