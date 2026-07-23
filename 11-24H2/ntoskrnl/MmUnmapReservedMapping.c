/*
 * XREFs of MmUnmapReservedMapping @ 0x140433320
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14022FD60 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14029F070 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     SmKmUnlockMdl @ 0x1402F9B04 (SmKmUnlockMdl.c)
 *     HalpDmaSyncMapBuffers @ 0x140389860 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaFreeMapRegisters @ 0x14038A214 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x14038B104 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     SmFpFree @ 0x140421480 (SmFpFree.c)
 *     ?SmStUnmapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140432EDC (-SmStUnmapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     PspIumFreePhysicalPages @ 0x140432FA8 (PspIumFreePhysicalPages.c)
 *     HalpDmaReleaseBufferMappings @ 0x14044FCA4 (HalpDmaReleaseBufferMappings.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x1404C7760 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     sub_1405169B0 @ 0x1405169B0 (sub_1405169B0.c)
 *     PnprCopyReservedMapping @ 0x1405A46F4 (PnprCopyReservedMapping.c)
 *     PnprSwap @ 0x1405A4F9C (PnprSwap.c)
 *     EtwpSavePersistedLogger @ 0x1407B02B0 (EtwpSavePersistedLogger.c)
 *     PnprMapPhysicalPages @ 0x140B55FCC (PnprMapPhysicalPages.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     MiRetardMdl @ 0x140258D7C (MiRetardMdl.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiUnmapMdlCommon @ 0x140433530 (MiUnmapMdlCommon.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __stdcall MmUnmapReservedMapping(PVOID BaseAddress, ULONG PoolTag, PMDL MemoryDescriptorList)
{
  ULONG_PTR v3; // r14
  ULONG_PTR v5; // rsi
  ULONG_PTR BugCheckParameter4; // rbp
  KIRQL v7; // r15
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  ULONG_PTR v12; // rcx
  ULONG_PTR v13; // r9
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
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
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E35FE8);
  }
  else
  {
    v7 = ExAcquireSpinLockShared(&dword_140E35FE8);
  }
  v10 = qword_140E35FF0;
  v11 = v5 & 0xFFFFFFFFFFFFF000uLL;
  while ( v10 )
  {
    v14 = *(_QWORD *)(v10 + 24);
    if ( v11 < v14 )
    {
      v10 = *(_QWORD *)v10;
    }
    else
    {
      if ( v11 < v14 + (*(_QWORD *)(v10 + 32) << 12) )
        break;
      v10 = *(_QWORD *)(v10 + 8);
    }
  }
  if ( !v10 )
    KeBugCheckEx(0xDAu, 0x106uLL, v5, v3, 2uLL);
  MiReleaseSpinLockShared(&dword_140E35FE8, v7, v8, v9);
  if ( *(_DWORD *)(v10 + 40) != (_DWORD)v3 )
    KeBugCheckEx(0xDAu, 0x102uLL, v5, v3, BugCheckParameter4);
  if ( (*(_DWORD *)(v10 + 44) & 1) != 0 )
  {
    v13 = *(_QWORD *)(v10 + 32);
    v12 = v13 - ((v5 - *(_QWORD *)(v10 + 24)) >> 12);
  }
  else
  {
    v12 = *(_QWORD *)(v10 + 32);
    v5 = *(_QWORD *)(v10 + 24);
    v13 = v12;
  }
  if ( BugCheckParameter4 > v12 )
    KeBugCheckEx(0xDAu, 0x10AuLL, v5, v13, BugCheckParameter4);
  MiUnmapMdlCommon(v5, BugCheckParameter4);
  if ( (*(_DWORD *)(v10 + 44) & 1) == 0 )
  {
    v15 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    for ( i = (_QWORD *)(v15 + 8 * BugCheckParameter4); (unsigned __int64)i < v15 + 8LL * *(_QWORD *)(v10 + 32); ++i )
    {
      if ( *i )
        KeBugCheckEx(0xDAu, 0x10CuLL, v5, v3, BugCheckParameter4);
    }
  }
  MemoryDescriptorList->MdlFlags &= 0xFFDEu;
  if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
    MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
}
