/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18003C100
 * Callers:
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x18000EAE0 (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 *     ?RmpActivityHostQueryProcessListForMetrics@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAK@Z @ 0x18000EC8C (-RmpActivityHostQueryProcessListForMetrics@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAPEAU_RM_PROCES.c)
 *     ?RmpSystemIsActivityHostTooLargeForSwap@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAK@Z @ 0x18000EF14 (-RmpSystemIsActivityHostTooLargeForSwap@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAK@Z.c)
 *     ?RmpUtilCreateSecurityDescriptorForApplicationWnf@@YAJPEAT_RM_SID@@PEAPEAX@Z @ 0x1800301A8 (-RmpUtilCreateSecurityDescriptorForApplicationWnf@@YAJPEAT_RM_SID@@PEAPEAX@Z.c)
 *     ?HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18003B470 (-HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x18003BA14 (-HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_.c)
 *     ?HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18003BC30 (-HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?RmpGameModeUnapplySystemExtensionPolicy@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18003C700 (-RmpGameModeUnapplySystemExtensionPolicy@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPI.c)
 *     ?HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003C8D0 (-HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     HamRpcSrvConnectDebugging @ 0x18003CDC0 (HamRpcSrvConnectDebugging.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x18003CF40 (HamRpcSrvConnectStateChangeNotifications.c)
 *     HamRpcSrvConnectSessionState @ 0x18003D680 (HamRpcSrvConnectSessionState.c)
 *     HamRpcSrvConnectServicing @ 0x18003D7E0 (HamRpcSrvConnectServicing.c)
 *     HamRpcSrvConnectExtendedExecution @ 0x18003D900 (HamRpcSrvConnectExtendedExecution.c)
 *     HamRpcSrvConnect @ 0x18003DA80 (HamRpcSrvConnect.c)
 *     RmgrSrv_RegisterWithServer @ 0x18003DD30 (RmgrSrv_RegisterWithServer.c)
 *     RmgrSrv_RmReleaseResources @ 0x1800569C0 (RmgrSrv_RmReleaseResources.c)
 *     ?RmpGameModeRecipientProcessTerminationCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180060610 (-RmpGameModeRecipientProcessTerminationCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@.c)
 *     ?RmpSystemPublishGlobalGameModeState@@YAXK@Z @ 0x1800654C8 (-RmpSystemPublishGlobalGameModeState@@YAXK@Z.c)
 *     ?HampSlsCreateGuid@@YAJPEAU_GUID@@@Z @ 0x18006802C (-HampSlsCreateGuid@@YAJPEAU_GUID@@@Z.c)
 *     RmgrSrv_RmRegisterResource @ 0x18006A450 (RmgrSrv_RmRegisterResource.c)
 *     ?HampPdcDamControlCallback@@YAJPEAXK@Z @ 0x18006A540 (-HampPdcDamControlCallback@@YAJPEAXK@Z.c)
 *     ?HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z @ 0x18006B30C (-HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z.c)
 *     ?HampPdcPlmControlCallback@@YAJPEAXK@Z @ 0x18006E230 (-HampPdcPlmControlCallback@@YAJPEAXK@Z.c)
 *     RmgrSrv_RmAccessCheckOnCaller @ 0x180077C10 (RmgrSrv_RmAccessCheckOnCaller.c)
 *     RmgrSrv_RmAvailabilityCheck @ 0x180077CE0 (RmgrSrv_RmAvailabilityCheck.c)
 *     RmgrSrv_RmSetMemoryUsageLimit @ 0x180077DF0 (RmgrSrv_RmSetMemoryUsageLimit.c)
 *     ?RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@@Z @ 0x180077EC4 (-RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@@Z.c)
 *     ?HampProcessBoostPriorityThreadCallback@@YAJPEAX00@Z @ 0x18007EC90 (-HampProcessBoostPriorityThreadCallback@@YAJPEAX00@Z.c)
 *     HamRpcSrvConnectFullTrust @ 0x180081540 (HamRpcSrvConnectFullTrust.c)
 *     ?HampSlsStart@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x180084964 (-HampSlsStart@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 *     ?RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z @ 0x180085F78 (-RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z.c)
 *     ?ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x1800865BC (-ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180089C6C (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180089EB0 (-RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18008B3B8 (-RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpGameModeCheckRemovePairedAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008C2EC (-RmpGameModeCheckRemovePairedAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeTryApplyPowerProfile@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008D630 (-RmpGameModeTryApplyPowerProfile@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROC.c)
 *     ?RmpGameModeTryApplySystemExtensionPolicy@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008D6B0 (-RmpGameModeTryApplySystemExtensionPolicy@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIP.c)
 *     ?RmpGameModeUnapplyCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008D720 (-RmpGameModeUnapplyCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_P.c)
 *     ?RmpSystemEnableAsyncInSwap@@YAXXZ @ 0x1800909C0 (-RmpSystemEnableAsyncInSwap@@YAXXZ.c)
 *     ?RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z @ 0x180090F14 (-RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z.c)
 *     ?RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z @ 0x180091078 (-RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z.c)
 *     ?RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z @ 0x18009112C (-RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z.c)
 *     ?RmpSystemSetWorkloadAllowedCpuSets@@YAJPEA_KW4_THREAD_WORKLOAD_CLASS@@@Z @ 0x1800911FC (-RmpSystemSetWorkloadAllowedCpuSets@@YAJPEA_KW4_THREAD_WORKLOAD_CLASS@@@Z.c)
 *     SystemStateTrackerCreate @ 0x18009C85C (SystemStateTrackerCreate.c)
 *     SystemStateTrackerStart @ 0x18009C91C (SystemStateTrackerStart.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  ULONGLONG v5; // rax
  unsigned __int16 *v6; // rdx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int16 *v10; // [rsp+58h] [rbp-28h]
  int v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+64h] [rbp-1Ch]
  __int64 v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+74h] [rbp-Ch]

  v15 = 0;
  v13 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v5 = *(_QWORD *)(a2 + 3);
  v6 = (unsigned __int16 *)(a2 + 11);
  EventDescriptor.Keyword = v5;
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v14 = 4;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v11 = *v6;
  v10 = v6;
  UserData.Reserved = 2;
  v12 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 3u, &UserData);
}
