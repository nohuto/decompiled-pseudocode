/*
 * XREFs of ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A23A4
 * Callers:
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x18001E254 (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x18001EE5C (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180058528 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x180059EB4 (-WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z.c)
 *     ?SerializeForRPC@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x1800607F0 (-SerializeForRPC@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z.c)
 *     ?GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x1800640A0 (-GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800A91F4 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800AA188 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?ProcessHasBeenRunningLongEnough@?$CWatchdogTimer@$00@@AEAAJPEA_N@Z @ 0x1800AFCBC (-ProcessHasBeenRunningLongEnough@-$CWatchdogTimer@$00@@AEAAJPEA_N@Z.c)
 *     ?ProcessHasBeenRunningLongEnough@?$CWatchdogTimer_Old@$00@@AEAAJPEA_N@Z @ 0x1800AFE34 (-ProcessHasBeenRunningLongEnough@-$CWatchdogTimer_Old@$00@@AEAAJPEA_N@Z.c)
 *     ?RuntimeClassInitialize@CMMNotificationDelegator@AudioEffectsWatcher@@QEAAJPEBGPEAX@Z @ 0x1800B3C40 (-RuntimeClassInitialize@CMMNotificationDelegator@AudioEffectsWatcher@@QEAAJPEBGPEAX@Z.c)
 *     ?CollectLiveKernelDump@CAudioHealthMonitor@@AEAAJKPEBG@Z @ 0x1800B430C (-CollectLiveKernelDump@CAudioHealthMonitor@@AEAAJKPEBG@Z.c)
 *     ?HandleAccessChangeNotification@@YAJPEBG0@Z @ 0x1800C76D4 (-HandleAccessChangeNotification@@YAJPEBG0@Z.c)
 *     ?GetEffectsFromApo@CAudioStream@@AEAAJPEAUIAPOWrapperSrv@@AEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800C8950 (-GetEffectsFromApo@CAudioStream@@AEAAJPEAUIAPOWrapperSrv@@AEAV-$vector@UAudioEffectInternal@@V-$.c)
 *     ?SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ @ 0x1800CA334 (-SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ.c)
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800D0124 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x1800D9818 (-create_take_hevent_ownership@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_w.c)
 *     ?CheckBtAudioStreamContextSupported@CBtAudioResourceManager@@AEBAJXZ @ 0x1800D9AA0 (-CheckBtAudioStreamContextSupported@CBtAudioResourceManager@@AEBAJXZ.c)
 *     ?SendBtAudioStreamContext@CBtAudioResourceManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4BTAudio_StreamContext@@@Z @ 0x1800DA060 (-SendBtAudioStreamContext@CBtAudioResourceManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_000.c)
 *     ?GetEffectsFromMFXInstantiatedForStreaming@CSharedStreamGroupProxy@@UEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800F6720 (-GetEffectsFromMFXInstantiatedForStreaming@CSharedStreamGroupProxy@@UEAAJAEAV-$vector@UAudioEffe.c)
 *     ?ScheduleScanForInstalledEffectPacks@EffectPackConfigurationManager@@QEAAJXZ @ 0x1800FC44C (-ScheduleScanForInstalledEffectPacks@EffectPackConfigurationManager@@QEAAJXZ.c)
 *     ?SerializeForRpc@CStandardEvent@@UEAAJPEAUCP_EVENT_METADATA_BLOB@@@Z @ 0x18010DC70 (-SerializeForRpc@CStandardEvent@@UEAAJPEAUCP_EVENT_METADATA_BLOB@@@Z.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x18011BF30 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 *     ?InitializeTheadpool@CWorkFifo@@AEAAJXZ @ 0x180120C24 (-InitializeTheadpool@CWorkFifo@@AEAAJXZ.c)
 *     ?GetMemory@?$CCrossProcessClientMemory@UControlData_V1@@@@UEAAJPEAIPEAPEAX@Z @ 0x180165A30 (-GetMemory@-$CCrossProcessClientMemory@UControlData_V1@@@@UEAAJPEAIPEAPEAX@Z.c)
 *     ?GetMemory@CCrossProcessKSMemory@@UEAAJPEAIPEAPEAX@Z @ 0x180165D60 (-GetMemory@CCrossProcessKSMemory@@UEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x18004348C (--$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  return wil::details::ReportFailure_GetLastErrorHr<1>(this, a2, a3, a4, v5, retaddr);
}
