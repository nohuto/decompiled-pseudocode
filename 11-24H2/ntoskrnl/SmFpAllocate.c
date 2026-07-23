/*
 * XREFs of SmFpAllocate @ 0x1402E96E0
 * Callers:
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14027CA30 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14029F070 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     SmKmStoreHelperCommandProcess @ 0x1402E7B10 (SmKmStoreHelperCommandProcess.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x1402E8F50 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1402F63B8 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140608EEC (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     SmKmAllocateMdlForLock @ 0x1402E98DC (SmKmAllocateMdlForLock.c)
 *     MmChargeResources @ 0x14033BB60 (MmChargeResources.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x14041D8B0 (MmMapLockedPagesWithReservedMapping.c)
 *     SmpFpWaitForResource @ 0x14060C854 (SmpFpWaitForResource.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void *__fastcall SmFpAllocate(volatile LONG *SpinLock, int a2, __int64 a3, __int64 a4, int a5)
{
  void *result; // rax
  void *v9; // rsi
  ULONG v10; // [rsp+48h] [rbp+10h]

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
                                                 *(_QWORD *)(*((_QWORD *)SpinLock + 4) + 2096LL),
                                                 *((unsigned __int16 *)SpinLock + 51),
                                                 1LL) != 0) & 0xFFFFFFFFFFFFFFF8uLL);
    goto LABEL_6;
  }
  if ( a2 != 4 )
  {
    v10 = 810708339;
    HIBYTE(v10) = a2 + 48;
    result = (void *)ExAllocatePool2(0x40uLL, *((unsigned __int16 *)SpinLock + a2 + 48), v10);
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
