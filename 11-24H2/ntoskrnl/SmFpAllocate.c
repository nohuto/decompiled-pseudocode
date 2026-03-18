/*
 * XREFs of SmFpAllocate @ 0x14037C660
 * Callers:
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14024C420 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14028F470 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     SmKmStoreHelperCommandProcess @ 0x14037AA90 (SmKmStoreHelperCommandProcess.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14037BED0 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1403990B0 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14060A92C (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 * Callees:
 *     MmChargeResources @ 0x140212800 (MmChargeResources.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     SmKmAllocateMdlForLock @ 0x14037C85C (SmKmAllocateMdlForLock.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x140410510 (MmMapLockedPagesWithReservedMapping.c)
 *     SmpFpWaitForResource @ 0x14060E294 (SmpFpWaitForResource.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

void *__fastcall SmFpAllocate(volatile LONG *SpinLock, int a2, __int64 a3, __int64 a4, int a5)
{
  void *result; // rax
  void *v9; // rsi

  if ( a2 >= 5 )
  {
    if ( (*(_BYTE *)(a4 + 10) & 5) != 0 )
      result = *(void **)(a4 + 24);
    else
      result = MmMapLockedPagesSpecifyCache((PMDL)a4, 0, MmCached, 0LL, 0, 0x40000010u);
LABEL_6:
    if ( result )
      return result;
    goto LABEL_14;
  }
  if ( a2 == 2 )
  {
    result = (void *)SmKmAllocateMdlForLock(
                       *((_QWORD *)SpinLock + 4),
                       (unsigned __int64)*((unsigned __int16 *)SpinLock + 50) << 12);
    goto LABEL_6;
  }
  if ( a2 == 3 )
  {
    result = (void *)(-(__int64)((unsigned int)MmChargeResources(
                                                 *(__int64 **)(*((_QWORD *)SpinLock + 4) + 2096LL),
                                                 *((unsigned __int16 *)SpinLock + 51),
                                                 1) != 0) & 0xFFFFFFFFFFFFFFF8uLL);
    goto LABEL_6;
  }
  if ( a2 != 4 )
  {
    result = (void *)ExAllocatePool2(0x40uLL);
    goto LABEL_6;
  }
  result = 0LL;
LABEL_14:
  if ( a5 )
  {
    result = (void *)SmpFpWaitForResource(SpinLock);
    v9 = result;
    if ( a2 >= 5 )
    {
      MmMapLockedPagesWithReservedMapping(result, 0x6D526D73u, (PMDL)a4, MmCached);
      return v9;
    }
  }
  return result;
}
