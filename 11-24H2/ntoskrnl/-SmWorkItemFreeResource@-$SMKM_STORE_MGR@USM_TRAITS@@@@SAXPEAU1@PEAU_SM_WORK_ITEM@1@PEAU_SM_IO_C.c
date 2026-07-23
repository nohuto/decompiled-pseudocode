/*
 * XREFs of ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x1402A1234
 * Callers:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14029F070 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x1402E8F50 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1402F63B8 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     SmpFpReleaseResource @ 0x1404F7000 (SmpFpReleaseResource.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
