/*
 * XREFs of SmKmStoreReference @ 0x1402F6020
 * Callers:
 *     SmpKeyedStoreReference @ 0x14020D9B4 (SmpKeyedStoreReference.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14022F290 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1404863F8 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140491E70 (-SmStoreRequest@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_I.c)
 *     ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x1406098F8 (-StDmDeviceError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x14060D184 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     SmGetStoreOwnerProcessId @ 0x14060D3FC (SmGetStoreOwnerProcessId.c)
 *     SmIssueIo @ 0x14060D540 (SmIssueIo.c)
 *     SmProcessListRequestExtended @ 0x140798368 (SmProcessListRequestExtended.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExfAcquireRundownProtection @ 0x1402F60C0 (ExfAcquireRundownProtection.c)
 */

__int64 __fastcall SmKmStoreReference(__int64 a1, unsigned int a2)
{
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // rbx
  unsigned __int64 v6; // rtt

  v3 = a2;
  v4 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)(a2 & 0x3FF) >> 5));
  if ( v4 )
  {
    v5 = v4 + 40LL * (v3 & 0x1F);
    if ( v5 )
    {
      _m_prefetchw((const void *)(v5 + 8));
      v6 = *(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v6 == _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 8), v6 + 2, v6)
        || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(v5 + 8)) )
      {
        if ( (*(_WORD *)(v5 + 32) & 0x3F) == a2 >> 10 )
          return *(_QWORD *)v5;
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v5 + 8));
      }
    }
  }
  return 0LL;
}
