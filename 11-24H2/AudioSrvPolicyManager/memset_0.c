/*
 * XREFs of memset_0 @ 0x1800212A8
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800060D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000B560 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x1800106C0 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180011B50 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180014560 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180015110 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ @ 0x180016350 (-GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ.c)
 *     memcpy_s @ 0x180017BA0 (memcpy_s.c)
 *     ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x1800191C0 (-Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z.c)
 *     memcpy_s_0 @ 0x180019718 (memcpy_s_0.c)
 *     ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x18001AEE8 (--$AdaptFixedSizeToAllocatedResult@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AX.c)
 *     ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18001D180 (-memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18001DCA4 (--$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     __scrt_fastfail @ 0x180020D4C (__scrt_fastfail.c)
 *     ??$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800221A8 (--$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18002225C (--$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x1800235B4 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x18002405C (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x1800241BC (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x1800256F0 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180025960 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18002681C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x180027074 (-wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV-$heap_vector@Uwil_details_FeatureUsageSRUM@@@detai.c)
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x180027DE0 (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18002A830 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 *     McGenControlCallbackV2 @ 0x18002B2B0 (McGenControlCallbackV2.c)
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x18002FA94 (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 *     ??$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18002FC94 (--$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAA_NI_N@Z @ 0x180032954 (-InitHashTable@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_.c)
 *     ?Rehash@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAAXI@Z @ 0x180033A2C (-Rehash@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@.c)
 *     ??$make_unique@VCStreamClassPolicyGains@@$$V$0A@@std@@YA?AV?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@0@XZ @ 0x18003BDA8 (--$make_unique@VCStreamClassPolicyGains@@$$V$0A@@std@@YA-AV-$unique_ptr@VCStreamClassPolicyGains.c)
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z @ 0x18003DF84 (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z.c)
 *     ?GenerateMediaManagerNotification@@YAJAEAV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@AEAV?$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@@2@@Z @ 0x18003E274 (-GenerateMediaManagerNotification@@YAJAEAV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplicati.c)
 *     ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x1800405E4 (-TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z.c)
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800429E4 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z @ 0x180044F40 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z.c)
 *     ?GetACE@CAccessObjectAce@CDacl@ATL@@UEBAPEAXXZ @ 0x180046D20 (-GetACE@CAccessObjectAce@CDacl@ATL@@UEBAPEAXXZ.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x1800476CC (-GetTsAudioProtocol@@YAIK@Z.c)
 *     ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x180047B6C (-Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_T.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
