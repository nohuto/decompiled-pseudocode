/*
 * XREFs of ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x140291634
 * Callers:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14028F470 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14037BED0 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1403990B0 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     SmpFpReleaseResource @ 0x1404F9720 (SmpFpReleaseResource.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v4; // rbx

  if ( (*a2 & 7) == 1 )
  {
    v4 = a1 + 1584;
  }
  else
  {
    if ( (*a2 & 7) != 2 )
    {
LABEL_4:
      ExFreePoolWithTag(a2, 0);
      return;
    }
    v4 = a1 + 1704;
  }
  if ( *(_QWORD *)(v4 + 112) != a3 || !(unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)v4) )
    goto LABEL_4;
  if ( !*(_BYTE *)(v4 + 94) )
  {
    _InterlockedExchange64((volatile __int64 *)(v4 + 112), 0LL);
    KeSetEvent((PRKEVENT)(v4 + 8), 0, 0);
  }
}
