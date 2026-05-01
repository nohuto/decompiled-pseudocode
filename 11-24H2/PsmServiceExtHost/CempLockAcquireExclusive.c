/*
 * XREFs of CempLockAcquireExclusive @ 0x18002B830
 * Callers:
 *     ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800043F4 (-RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180004FFC (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180006368 (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180006B40 (-HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x1800080F8 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180008680 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180009514 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000A81C (-HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@@Z @ 0x18000ABBC (-HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STA.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000B244 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000D550 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D5C0 (-HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180012E64 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x18001A1E4 (-HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x18001A728 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActSystemResourceCleanup@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18001C1EC (-HampActSystemResourceCleanup@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18001DE08 (-HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKE.c)
 *     ?HampActCanBeStarted@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002B258 (-HampActCanBeStarted@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     CrmStateMonitorNetworkUpdateState @ 0x18002C75C (CrmStateMonitorNetworkUpdateState.c)
 *     CrmActivityTelemetryUpdate @ 0x18002F858 (CrmActivityTelemetryUpdate.c)
 *     CrmGlobalsRegistrationRundownHelper @ 0x18002FACC (CrmGlobalsRegistrationRundownHelper.c)
 *     CrmLogStateMonitorRundown @ 0x180030484 (CrmLogStateMonitorRundown.c)
 *     CrmGlobalsPeriodicNotifier @ 0x1800309D0 (CrmGlobalsPeriodicNotifier.c)
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x180030B30 (CrmSrvActivityWindowClosedReasonSubscribe.c)
 *     CrmRegistrationRemoveActivity @ 0x18003188C (CrmRegistrationRemoveActivity.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180036180 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x180037F48 (-HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180038000 (-HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     CrmGlobalsRegistrationAdd @ 0x18003E9A0 (CrmGlobalsRegistrationAdd.c)
 *     ?HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180043230 (-HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x180046380 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 *     ?SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800544D0 (-SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     CrmStateMonitorWNFCallback @ 0x180060100 (CrmStateMonitorWNFCallback.c)
 *     CrmStateMonitorSebCallback @ 0x180060990 (CrmStateMonitorSebCallback.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180060D18 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800625F8 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     CrmGlobalsRegistrationRemove @ 0x18006498C (CrmGlobalsRegistrationRemove.c)
 *     CrmStateMonitorPostResumeUsageCallback @ 0x180064BD0 (CrmStateMonitorPostResumeUsageCallback.c)
 *     CrmStateMonitorPostShellReadyUsageCallback @ 0x1800668E0 (CrmStateMonitorPostShellReadyUsageCallback.c)
 *     CrmStateMonitorAcDcBatteryCallback @ 0x180067FA0 (CrmStateMonitorAcDcBatteryCallback.c)
 *     CrmStateMonitorPowerConstrainedCallback @ 0x180068320 (CrmStateMonitorPowerConstrainedCallback.c)
 *     CrmStateMonitorDisconnectedStandbyCallback @ 0x180068400 (CrmStateMonitorDisconnectedStandbyCallback.c)
 *     CrmSessionUserNotification @ 0x180068E60 (CrmSessionUserNotification.c)
 *     CrmSrvActivityWindowClosedReasonUnsubscribe @ 0x1800695C8 (CrmSrvActivityWindowClosedReasonUnsubscribe.c)
 *     CrmSuspendNotification @ 0x1800698B8 (CrmSuspendNotification.c)
 *     CrmStateMonitorCPUUsageCSCallback @ 0x18006A4C0 (CrmStateMonitorCPUUsageCSCallback.c)
 *     CrmStateMonitorCsAcDcCallback @ 0x18006AB40 (CrmStateMonitorCsAcDcCallback.c)
 *     CrmStateMonitorAcDcDisplayCallback @ 0x18006C970 (CrmStateMonitorAcDcDisplayCallback.c)
 *     PsmInitializeServiceExtension4 @ 0x180077910 (PsmInitializeServiceExtension4.c)
 *     CrmGlobalsCleanup @ 0x1800786E8 (CrmGlobalsCleanup.c)
 *     CrmGlobalsCleanupWorkers @ 0x1800787D4 (CrmGlobalsCleanupWorkers.c)
 *     CrmGlobalsRegistrationRemoveAll @ 0x180078954 (CrmGlobalsRegistrationRemoveAll.c)
 *     CrmIsolatedPollingWorkerNpuUsageTimerCallback @ 0x180078C20 (CrmIsolatedPollingWorkerNpuUsageTimerCallback.c)
 *     CrmStateMonitorCPUUsageCleanup @ 0x180079844 (CrmStateMonitorCPUUsageCleanup.c)
 *     CrmStateMonitorResourceUsageCleanup @ 0x18007A580 (CrmStateMonitorResourceUsageCleanup.c)
 *     CrmStateMonitorResourceUsageIsolatedPollCSCallback @ 0x18007A6B0 (CrmStateMonitorResourceUsageIsolatedPollCSCallback.c)
 *     CrmStateMonitorResourceUsageLocalPollCSCallback @ 0x18007A790 (CrmStateMonitorResourceUsageLocalPollCSCallback.c)
 *     CrmStateMonitorResourceUsageTimerCallback @ 0x18007AA50 (CrmStateMonitorResourceUsageTimerCallback.c)
 *     CrmGlobalsCleanupTelemetry @ 0x18007B6C0 (CrmGlobalsCleanupTelemetry.c)
 *     ?HampDepLinkAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_LINK@@@Z @ 0x1800842F4 (-HampDepLinkAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_LINK@@@Z.c)
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180085E40 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?SstpStart@@YAJPEAU_SYSTEM_STATE_TRACKER@@@Z @ 0x18009CA60 (-SstpStart@@YAJPEAU_SYSTEM_STATE_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall CempLockAcquireExclusive(__int64 a1)
{
  DWORD result; // eax

  RtlAcquireSRWLockExclusive(a1);
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
