/*
 * XREFs of SmPageRead @ 0x1402F6388
 * Callers:
 *     MiIssueHardFaultIo @ 0x140351514 (MiIssueHardFaultIo.c)
 *     MiReadPagefilePage @ 0x14066B64C (MiReadPagefilePage.c)
 *     MiPfExecuteReadList @ 0x14093A5EC (MiPfExecuteReadList.c)
 * Callees:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1402F63B8 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 */

__int64 __fastcall SmPageRead(__int64 a1, int *a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // rcx
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 24);
  v7 = *a2;
  return SMKM_STORE_MGR<SM_TRAITS>::SmPageRead(v5, (unsigned int)&v7, a3, a4, a5);
}
