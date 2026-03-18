/*
 * XREFs of MmUnmapReservedMapping @ 0x14040F6F0
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14027A7D0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14028F470 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     HalpDmaSyncMapBuffers @ 0x14038FF20 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaFreeMapRegisters @ 0x1403908D4 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x1403917D4 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     SmKmUnlockMdl @ 0x14039C804 (SmKmUnlockMdl.c)
 *     ?SmStUnmapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14040F1F0 (-SmStUnmapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     PspIumFreePhysicalPages @ 0x14040F384 (PspIumFreePhysicalPages.c)
 *     SmFpFree @ 0x14042F2B0 (SmFpFree.c)
 *     HalpDmaReleaseBufferMappings @ 0x14045A854 (HalpDmaReleaseBufferMappings.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x1404CE494 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     sub_1405190F0 @ 0x1405190F0 (sub_1405190F0.c)
 *     PnprCopyReservedMapping @ 0x1405A7704 (PnprCopyReservedMapping.c)
 *     PnprSwap @ 0x1405A7FAC (PnprSwap.c)
 *     EtwpSavePersistedLogger @ 0x1407AFE60 (EtwpSavePersistedLogger.c)
 *     PnprMapPhysicalPages @ 0x140B53F7C (PnprMapPhysicalPages.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     MiRetardMdl @ 0x1402F323C (MiRetardMdl.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     MiUnmapMdlCommon @ 0x14040F900 (MiUnmapMdlCommon.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __stdcall MmUnmapReservedMapping(PVOID BaseAddress, ULONG PoolTag, PMDL MemoryDescriptorList)
{
  ULONG_PTR v3; // r14
  ULONG_PTR v5; // rsi
  ULONG_PTR BugCheckParameter4; // rbp
  KIRQL v7; // r15
  __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  ULONG_PTR v10; // rcx
  ULONG_PTR v11; // r9
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *i; // rdx

  v3 = PoolTag;
  v5 = (ULONG_PTR)BaseAddress;
  if ( _bittest16(&MemoryDescriptorList->MdlFlags, 9u) )
    v5 = (ULONG_PTR)BaseAddress - (unsigned int)MiRetardMdl((__int64)MemoryDescriptorList);
  BugCheckParameter4 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
                      + (unsigned __int64)MemoryDescriptorList->ByteCount
                      + 4095) >> 12;
  if ( KeGetCurrentIrql() == 2 )
  {
    v7 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E35EA8);
  }
  else
  {
    v7 = ExAcquireSpinLockShared(&dword_140E35EA8);
  }
  v8 = qword_140E35EB0;
  v9 = v5 & 0xFFFFFFFFFFFFF000uLL;
  while ( v8 )
  {
    v12 = *(_QWORD *)(v8 + 24);
    if ( v9 < v12 )
    {
      v8 = *(_QWORD *)v8;
    }
    else
    {
      if ( v9 < v12 + (*(_QWORD *)(v8 + 32) << 12) )
        break;
      v8 = *(_QWORD *)(v8 + 8);
    }
  }
  if ( !v8 )
    KeBugCheckEx(0xDAu, 0x106uLL, v5, v3, 2uLL);
  MiReleaseSpinLockShared(&dword_140E35EA8, v7);
  if ( *(_DWORD *)(v8 + 40) != (_DWORD)v3 )
    KeBugCheckEx(0xDAu, 0x102uLL, v5, v3, BugCheckParameter4);
  if ( (*(_DWORD *)(v8 + 44) & 1) != 0 )
  {
    v11 = *(_QWORD *)(v8 + 32);
    v10 = v11 - ((v5 - *(_QWORD *)(v8 + 24)) >> 12);
  }
  else
  {
    v10 = *(_QWORD *)(v8 + 32);
    v5 = *(_QWORD *)(v8 + 24);
    v11 = v10;
  }
  if ( BugCheckParameter4 > v10 )
    KeBugCheckEx(0xDAu, 0x10AuLL, v5, v11, BugCheckParameter4);
  MiUnmapMdlCommon(v5, BugCheckParameter4);
  if ( (*(_DWORD *)(v8 + 44) & 1) == 0 )
  {
    v13 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    for ( i = (_QWORD *)(v13 + 8 * BugCheckParameter4); (unsigned __int64)i < v13 + 8LL * *(_QWORD *)(v8 + 32); ++i )
    {
      if ( *i )
        KeBugCheckEx(0xDAu, 0x10CuLL, v5, v3, BugCheckParameter4);
    }
  }
  MemoryDescriptorList->MdlFlags &= 0xFFDEu;
  if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
    MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
}
