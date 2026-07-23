/*
 * XREFs of MmMapLockedPagesWithReservedMapping @ 0x14041D8B0
 * Callers:
 *     SmFpAllocate @ 0x1402E96E0 (SmFpAllocate.c)
 *     HalpDmaAcquireBufferMappings @ 0x140389C1C (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x14038B104 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     PspIumFreePhysicalPages @ 0x140432FA8 (PspIumFreePhysicalPages.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x1404C7760 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     sub_140516A20 @ 0x140516A20 (sub_140516A20.c)
 *     PnprCopyReservedMapping @ 0x1405A46F4 (PnprCopyReservedMapping.c)
 *     EtwpSavePersistedLogger @ 0x1407B02B0 (EtwpSavePersistedLogger.c)
 *     PnprMapPhysicalPages @ 0x140B55FCC (PnprMapPhysicalPages.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiTranslateCacheType @ 0x140394580 (MiTranslateCacheType.c)
 *     MiLegitimatePageForDriversToMap @ 0x14041DB10 (MiLegitimatePageForDriversToMap.c)
 *     MiMapMdlCommon @ 0x1404EDDA4 (MiMapMdlCommon.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
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
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E35FE8);
  }
  else
  {
    v11 = ExAcquireSpinLockShared(&dword_140E35FE8);
  }
  v14 = qword_140E35FF0;
  v15 = (unsigned __int64)MappingAddress & 0xFFFFFFFFFFFFF000uLL;
  while ( v14 )
  {
    v17 = *(_QWORD *)(v14 + 24);
    if ( v15 < v17 )
    {
      v14 = *(_QWORD *)v14;
    }
    else
    {
      if ( v15 < v17 + (*(_QWORD *)(v14 + 32) << 12) )
        break;
      v14 = *(_QWORD *)(v14 + 8);
    }
  }
  if ( !v14 )
    KeBugCheckEx(0xDAu, 0x106uLL, (ULONG_PTR)MappingAddress, v5, 1uLL);
  MiReleaseSpinLockShared(&dword_140E35FE8, v11, v12, v13);
  if ( *(_DWORD *)(v14 + 40) != (_DWORD)v5 )
    KeBugCheckEx(0xDAu, 0x104uLL, (ULONG_PTR)MappingAddress, v5, *(unsigned int *)(v14 + 40));
  if ( (*(_DWORD *)(v14 + 44) & 1) != 0 )
  {
    if ( ((unsigned __int16)MappingAddress & 0xFFF) != 0 )
      return 0LL;
    v19 = v9;
    v18 = *(_QWORD *)(v14 + 32) - (((unsigned __int64)MappingAddress - *(_QWORD *)(v14 + 24)) >> 12);
  }
  else
  {
    v18 = *(_QWORD *)(v14 + 32);
    MappingAddress = *(PVOID *)(v14 + 24);
    v19 = v18;
  }
  if ( v9 <= v18 )
  {
    BugCheckParameter4 = (((unsigned __int64)MappingAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 8 * v19;
    for ( i = (_QWORD *)((((unsigned __int64)MappingAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          (unsigned __int64)i < BugCheckParameter4;
          ++i )
    {
      if ( *i )
        KeBugCheckEx(0xDAu, 0x107uLL, (ULONG_PTR)MappingAddress, (ULONG_PTR)i, BugCheckParameter4);
    }
    for ( j = MemoryDescriptorList + 1;
          j->Next > (struct _MDL *)qword_140E2DD20
       || ((*(_QWORD *)(48 * (__int64)j->Next - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0
       || (int)MiLegitimatePageForDriversToMap(48 * (__int64)j->Next - 0x220000000000LL, v19) >= 0;
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
