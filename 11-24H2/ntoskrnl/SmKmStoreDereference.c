/*
 * XREFs of SmKmStoreDereference @ 0x14027A498
 * Callers:
 *     SmPageWrite @ 0x140246630 (SmPageWrite.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x140246820 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140246B84 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140247530 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140279D00 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14037BED0 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1403990B0 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1404974E0 (-SmStoreRequest@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_I.c)
 *     ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x14060B338 (-StDmDeviceError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z.c)
 *     SmKmStoreTerminateWorker @ 0x14060DB20 (SmKmStoreTerminateWorker.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14060EACC (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14060ECB0 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14060ED80 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     SmGetStoreOwnerProcessId @ 0x14060EE3C (SmGetStoreOwnerProcessId.c)
 *     SmIssueIo @ 0x14060EF80 (SmIssueIo.c)
 *     SmPartitionCleanup @ 0x140797594 (SmPartitionCleanup.c)
 *     SmProcessListRequestExtended @ 0x140798258 (SmProcessListRequestExtended.c)
 *     SmEtwEnableCallback @ 0x14079B8B0 (SmEtwEnableCallback.c)
 *     SmProcessCompressionInfoRequest @ 0x140A18F64 (SmProcessCompressionInfoRequest.c)
 *     SmpKeyedStoreCreate @ 0x140A42B64 (SmpKeyedStoreCreate.c)
 *     SmProcessCreateRequest @ 0x140A42DD4 (SmProcessCreateRequest.c)
 *     SmProcessDeleteNotification @ 0x140A51570 (SmProcessDeleteNotification.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x1402456A0 (ExfReleaseRundownProtection.c)
 */

void __fastcall SmKmStoreDereference(__int64 a1, __int16 a2)
{
  unsigned int v2; // edx
  __int64 v3; // r8
  struct _EX_RUNDOWN_REF *v4; // rcx
  struct _EX_RUNDOWN_REF *v5; // rcx
  unsigned __int64 v6; // rtt

  v2 = a2 & 0x3FF;
  v3 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)v2 >> 5));
  v4 = 0LL;
  if ( v3 )
    v4 = (struct _EX_RUNDOWN_REF *)(v3 + 40LL * (v2 & 0x1F));
  v5 = v4 + 1;
  _m_prefetchw(v5);
  v6 = v5->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v6 != _InterlockedCompareExchange64((volatile signed __int64 *)v5, v6 - 2, v6) )
    ExfReleaseRundownProtection(v5);
}
