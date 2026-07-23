/*
 * XREFs of SmKmStoreReferenceEx @ 0x1402F5F30
 * Callers:
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402F5830 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x1402F5B40 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1402F5EA4 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x1402F6680 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     SmEtwEnableCallback @ 0x14079B9C0 (SmEtwEnableCallback.c)
 *     SmProcessCompressionInfoRequest @ 0x140A120D4 (SmProcessCompressionInfoRequest.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExfAcquireRundownProtection @ 0x1402F60C0 (ExfAcquireRundownProtection.c)
 */

__int64 __fastcall SmKmStoreReferenceEx(__int64 a1, unsigned int a2)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  unsigned int v5; // ebx
  char v6; // cl
  __int64 v7; // rdx
  __int64 v8; // rdi
  unsigned __int64 v9; // rtt

  if ( a2 >= 0x400 )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)a2 >> 5));
  if ( !v3 )
    return 0LL;
  v4 = v3 + 40LL * (a2 & 0x1F);
  if ( !v4 )
    return 0LL;
  v5 = a2 | ((*(_WORD *)(v4 + 32) & 0x3F) << 10);
  v6 = a2;
  v7 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)(v5 & 0x3FF) >> 5));
  if ( !v7 )
    return 0LL;
  v8 = v7 + 40LL * (v6 & 0x1F);
  if ( !v8 )
    return 0LL;
  _m_prefetchw((const void *)(v8 + 8));
  v9 = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 8), v9 + 2, v9)
    && !ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(v8 + 8)) )
  {
    return 0LL;
  }
  if ( (*(_WORD *)(v8 + 32) & 0x3F) != v5 >> 10 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v8 + 8));
    return 0LL;
  }
  return *(_QWORD *)v8;
}
