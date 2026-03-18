/*
 * XREFs of SmFpFree @ 0x140327F20
 * Callers:
 *     SmKmUnlockMdl @ 0x14020D154 (SmKmUnlockMdl.c)
 *     SmKmStoreHelperCommandProcess @ 0x14020D8E4 (SmKmStoreHelperCommandProcess.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x1403270D4 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1403280A0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     SmKmStoreHelperCommandCleanup @ 0x1404C5A10 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x14022E380 (SmAcquireReleaseCharges.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     MmUnmapReservedMapping @ 0x140411E60 (MmUnmapReservedMapping.c)
 *     SmpFpReleaseResource @ 0x140602264 (SmpFpReleaseResource.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SmFpFree(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rdi
  struct _MDL *v7; // rsi

  v4 = (unsigned int *)a4;
  v7 = (struct _MDL *)a4;
  if ( a2 < 5 )
    v7 = 0LL;
  else
    v4 = *(unsigned int **)(a4 + 24);
  if ( *(_QWORD *)(a1 + 112) == a3 && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)a1) )
  {
    if ( a2 >= 5 )
      MmUnmapReservedMapping(v4, 0x6D526D73u, v7);
    if ( !*(_BYTE *)(a1 + 94) )
    {
      _InterlockedExchange64((volatile __int64 *)(a1 + 112), 0LL);
      KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
    }
  }
  else if ( a2 < 5 )
  {
    if ( a2 == 2 )
    {
      SmAcquireReleaseCharges(*(_QWORD *)(a1 + 32), v4[10], 3, 1LL);
      ExFreePoolWithTag(v4, 0);
    }
    else if ( a2 == 3 )
    {
      SmAcquireReleaseCharges(*(_QWORD *)(a1 + 32), (unsigned __int64)*(unsigned __int16 *)(a1 + 102) << 12, 1, 1LL);
    }
    else
    {
      ExFreePoolWithTag(v4, 0);
    }
  }
  else
  {
    MmUnmapLockedPages(v4, v7);
  }
}
