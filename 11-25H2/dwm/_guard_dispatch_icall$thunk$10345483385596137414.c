/*
 * XREFs of _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140011010
 * Callers:
 *     _tlgEnableCallback @ 0x140001B00 (_tlgEnableCallback.c)
 *     ?s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140002060 (-s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     ?WnfCallback@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x140004060 (-WnfCallback@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@CAJU_WNF_STATE_NAME@@KPEAU_WNF.c)
 *     ?QueryInterface@CDwmAppHost@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140004590 (-QueryInterface@CDwmAppHost@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x140004840 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x140004A84 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     __scrt_common_main_seh @ 0x140004D30 (__scrt_common_main_seh.c)
 *     _RTC_Initialize @ 0x140005734 (_RTC_Initialize.c)
 *     _RTC_Terminate @ 0x140005780 (_RTC_Terminate.c)
 *     ?_lambda_invoker_cdecl_@_lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_@@CA@XZ @ 0x140006530 (-_lambda_invoker_cdecl_@_lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_@@CA@XZ.c)
 *     ??1?$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@XZ @ 0x140007048 (--1-$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ @ 0x14000711C (--1Completer@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x140007B20 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K@Z @ 0x140008294 (-GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x140008464 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x140008FC8 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x140009104 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     ?NotifyFailure@TraceLoggingProvider@wil@@EEAA_NAEBUFailureInfo@2@@Z @ 0x1400098C0 (-NotifyFailure@TraceLoggingProvider@wil@@EEAA_NAEBUFailureInfo@2@@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x1400098FC (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x14000999C (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x140009B7C (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x14000AC70 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 *     ?RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z @ 0x14000ACC0 (-RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x14000BAA8 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x14000BB1C (-WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSC.c)
 *     ?WilDynamicLoadRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z @ 0x14000BB50 (-WilDynamicLoadRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x14000BBBC (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?WilFailureNotifyWatchers@details@wil@@YAXIPEBUWilFailureReport@@PEAUWilFailureReportInformation@@@Z @ 0x14000BC6C (-WilFailureNotifyWatchers@details@wil@@YAXIPEBUWilFailureReport@@PEAUWilFailureReportInformation.c)
 *     ?WilRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z @ 0x14000BCC0 (-WilRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x14000C54C (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x14000C664 (wil_RtlStagingConfig_RecordFeatureUsage.c)
 *     wil_StagingConfig_LogStagedFeatureUsage @ 0x14000C6D0 (wil_StagingConfig_LogStagedFeatureUsage.c)
 *     wil_details_NtQueryWnfStateData @ 0x14000C730 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x14000C7A8 (wil_details_NtUpdateWnfStateData.c)
 *     wil_details_RtlRegisterFeatureConfigurationChangeNotification @ 0x14000C980 (wil_details_RtlRegisterFeatureConfigurationChangeNotification.c)
 *     wil_details_RtlUnregisterFeatureConfigurationChangeNotification @ 0x14000C9EC (wil_details_RtlUnregisterFeatureConfigurationChangeNotification.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwner@Text@Internal@UI@Windows@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwner@Text@Internal@UI@Windows@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x14000CA54 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwn.c)
 *     ??$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWeakReferenceImpl@Details@WRL@Microsoft@@@12@AEAPEAUIUnknown@@@Z @ 0x14000CB78 (--$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA-AV.c)
 *     ??$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z @ 0x14000CC34 (--$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z.c)
 *     ??1?$com_ptr_t@UIMessageSession@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14000CDBC (--1-$com_ptr_t@UIMessageSession@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14000D7D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakRefe.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x14000D8B4 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_detail.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwner@Text@Internal@UI@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14000DA10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwne.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14000DAB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x14000DD28 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x14000DE00 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x14000DEBC (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?InternalRelease@?$ComPtr@UIHotKeyClientStatics@Text@Internal@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x14000E7A4 (-InternalRelease@-$ComPtr@UIHotKeyClientStatics@Text@Internal@UI@Windows@@@WRL@Microsoft@@IEAAKX.c)
 *     ?OnHotKeyDetected@HotKeyCallback@@UEAAJIII_K0@Z @ 0x14000E7E0 (-OnHotKeyDetected@HotKeyCallback@@UEAAJIII_K0@Z.c)
 *     ?RuntimeClassInitialize@HotKeyCallback@@QEAAJXZ @ 0x14000E820 (-RuntimeClassInitialize@HotKeyCallback@@QEAAJXZ.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1400100E8 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x1400104FC (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x14001083C (-MilWerRegisterMemoryBlock@@YAXPEBXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall guard_dispatch_icall_thunk_10345483385596137414()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
