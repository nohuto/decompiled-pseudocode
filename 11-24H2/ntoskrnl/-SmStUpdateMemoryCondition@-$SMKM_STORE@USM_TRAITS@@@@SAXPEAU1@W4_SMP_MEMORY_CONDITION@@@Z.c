/*
 * XREFs of ?SmStUpdateMemoryCondition@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x1402F4534
 * Callers:
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1402F5EA4 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 * Callees:
 *     KeQueryPriorityThread @ 0x1402E24A0 (KeQueryPriorityThread.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402F7A24 (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 */

KPRIORITY __fastcall SMKM_STORE<SM_TRAITS>::SmStUpdateMemoryCondition(__int64 a1, int a2)
{
  __int64 v4; // rax
  KPRIORITY v5; // edi
  KPRIORITY v6; // eax
  KPRIORITY result; // eax

  *(_BYTE *)(a1 + 6838) = a2;
  v4 = *(unsigned __int8 *)(a1 + 6838);
  v5 = *(_DWORD *)(a1 + 7584);
  if ( (_BYTE)v4 == 4 )
    v6 = *(_DWORD *)(a1 + 7584);
  else
    v6 = *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition + v4);
  if ( v6 >= v5 )
    v5 = v6;
  result = KeQueryPriorityThread(*(PKTHREAD *)(a1 + 7008));
  if ( a2 < 4 )
  {
    if ( result != v5 )
      result = KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 7008));
    if ( a2 <= 0 )
      return ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(a1 + 80, a1 + 6768);
  }
  else if ( result > v5 )
  {
    return KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 7008));
  }
  return result;
}
