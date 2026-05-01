/*
 * XREFs of CempLockAcquireExclusive @ 0x18002B8B0
 * Callers:
 *     ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800043E4 (-RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180004FEC (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180006358 (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180006B00 (-HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x1800080E8 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180008670 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180009594 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000A89C (-HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@@Z @ 0x18000AC3C (-HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STA.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000B2C4 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000D5D0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D640 (-HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180012EE4 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x18001A264 (-HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x18001A7A8 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActSystemResourceCleanup@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18001C26C (-HampActSystemResourceCleanup@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18001DE88 (-HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKE.c)
 *     ?HampActCanBeStarted@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002B2D8 (-HampActCanBeStarted@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     CrmStateMonitorNetworkUpdateState @ 0x18002C7DC (CrmStateMonitorNetworkUpdateState.c)
 *     CrmActivityTelemetryUpdate @ 0x18002F8D8 (CrmActivityTelemetryUpdate.c)
 *     CrmGlobalsRegistrationRundownHelper @ 0x18002FB4C (CrmGlobalsRegistrationRundownHelper.c)
 *     CrmLogStateMonitorRundown @ 0x180030504 (CrmLogStateMonitorRundown.c)
 *     CrmGlobalsPeriodicNotifier @ 0x180030A50 (CrmGlobalsPeriodicNotifier.c)
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x180030BB0 (CrmSrvActivityWindowClosedReasonSubscribe.c)
 *     CrmRegistrationRemoveActivity @ 0x18003190C (CrmRegistrationRemoveActivity.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180036200 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x180037FC8 (-HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180038080 (-HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     CrmGlobalsRegistrationAdd @ 0x18003EA20 (CrmGlobalsRegistrationAdd.c)
 *     ?HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x1800432B0 (-HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x180046400 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 *     ?SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180054550 (-SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     CrmStateMonitorWNFCallback @ 0x180060180 (CrmStateMonitorWNFCallback.c)
 *     CrmStateMonitorSebCallback @ 0x180060A10 (CrmStateMonitorSebCallback.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180060D98 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180062678 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     CrmGlobalsRegistrationRemove @ 0x180064A0C (CrmGlobalsRegistrationRemove.c)
 *     CrmStateMonitorPostResumeUsageCallback @ 0x180064C50 (CrmStateMonitorPostResumeUsageCallback.c)
 *     CrmStateMonitorPostShellReadyUsageCallback @ 0x180066960 (CrmStateMonitorPostShellReadyUsageCallback.c)
 *     CrmStateMonitorAcDcBatteryCallback @ 0x180068120 (CrmStateMonitorAcDcBatteryCallback.c)
 *     CrmStateMonitorPowerConstrainedCallback @ 0x1800684A0 (CrmStateMonitorPowerConstrainedCallback.c)
 *     CrmStateMonitorDisconnectedStandbyCallback @ 0x180068580 (CrmStateMonitorDisconnectedStandbyCallback.c)
 *     CrmSessionUserNotification @ 0x180068FE0 (CrmSessionUserNotification.c)
 *     CrmSrvActivityWindowClosedReasonUnsubscribe @ 0x180069748 (CrmSrvActivityWindowClosedReasonUnsubscribe.c)
 *     CrmSuspendNotification @ 0x180069A38 (CrmSuspendNotification.c)
 *     CrmStateMonitorCPUUsageCSCallback @ 0x18006A640 (CrmStateMonitorCPUUsageCSCallback.c)
 *     CrmStateMonitorCsAcDcCallback @ 0x18006AD60 (CrmStateMonitorCsAcDcCallback.c)
 *     CrmStateMonitorAcDcDisplayCallback @ 0x18006CBA0 (CrmStateMonitorAcDcDisplayCallback.c)
 *     PsmInitializeServiceExtension4 @ 0x1800778B0 (PsmInitializeServiceExtension4.c)
 *     CrmGlobalsCleanup @ 0x180078688 (CrmGlobalsCleanup.c)
 *     CrmGlobalsCleanupWorkers @ 0x180078774 (CrmGlobalsCleanupWorkers.c)
 *     CrmGlobalsRegistrationRemoveAll @ 0x1800788F4 (CrmGlobalsRegistrationRemoveAll.c)
 *     CrmIsolatedPollingWorkerNpuUsageTimerCallback @ 0x180078BC0 (CrmIsolatedPollingWorkerNpuUsageTimerCallback.c)
 *     CrmStateMonitorCPUUsageCleanup @ 0x1800797E4 (CrmStateMonitorCPUUsageCleanup.c)
 *     CrmStateMonitorResourceUsageCleanup @ 0x18007A520 (CrmStateMonitorResourceUsageCleanup.c)
 *     CrmStateMonitorResourceUsageIsolatedPollCSCallback @ 0x18007A650 (CrmStateMonitorResourceUsageIsolatedPollCSCallback.c)
 *     CrmStateMonitorResourceUsageLocalPollCSCallback @ 0x18007A730 (CrmStateMonitorResourceUsageLocalPollCSCallback.c)
 *     CrmStateMonitorResourceUsageTimerCallback @ 0x18007A9F0 (CrmStateMonitorResourceUsageTimerCallback.c)
 *     CrmGlobalsCleanupTelemetry @ 0x18007B660 (CrmGlobalsCleanupTelemetry.c)
 *     ?HampDepLinkAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_LINK@@@Z @ 0x180083E34 (-HampDepLinkAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_LINK@@@Z.c)
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800859E4 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?SstpStart@@YAJPEAU_SYSTEM_STATE_TRACKER@@@Z @ 0x18009C770 (-SstpStart@@YAJPEAU_SYSTEM_STATE_TRACKER@@@Z.c)
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
