/*
 * XREFs of memset_0 @ 0x140005D98
 * Callers:
 *     _dynamic_initializer_for__g_fWilCallbacksInstalled__ @ 0x140002000 (_dynamic_initializer_for__g_fWilCallbacksInstalled__.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x140003D3C (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     McGenControlCallbackV2 @ 0x140004360 (McGenControlCallbackV2.c)
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x1400048E4 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 *     __scrt_fastfail @ 0x1400054B0 (__scrt_fastfail.c)
 *     __scrt_get_show_window_mode @ 0x140005618 (__scrt_get_show_window_mode.c)
 *     ??$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x140006A3C (--$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x140006AE8 (--$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x140006BD4 (--$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x140008464 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x140009544 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x1400096A4 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x14000AD10 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x14000BBBC (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x14000C2A8 (-wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV-$heap_vector@Uwil_details_FeatureUsageSRUM@@@detai.c)
 *     memcpy_s @ 0x14000C48C (memcpy_s.c)
 *     ??$_Construct_n@$$V@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x14000EC1C (--$_Construct_n@$$V@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 *     ??$construct@UDISPLAYCONFIG_MODE_INFO@@$$V@?$_Default_allocator_traits@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@SAXAEAV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@1@QEAUDISPLAYCONFIG_MODE_INFO@@@Z @ 0x14000EF54 (--$construct@UDISPLAYCONFIG_MODE_INFO@@$$V@-$_Default_allocator_traits@V-$allocator@UDISPLAYCONF.c)
 *     ??$construct@UDISPLAYCONFIG_PATH_INFO@@$$V@?$_Default_allocator_traits@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@SAXAEAV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@1@QEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x14000EF68 (--$construct@UDISPLAYCONFIG_PATH_INFO@@$$V@-$_Default_allocator_traits@V-$allocator@UDISPLAYCONF.c)
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000F228 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 *     ?TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ @ 0x1400103F0 (-TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ.c)
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x1400105D0 (-DoStackCapture@@YAXJIPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
