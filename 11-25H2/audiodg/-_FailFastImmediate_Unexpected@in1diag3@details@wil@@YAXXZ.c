/*
 * XREFs of ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x14005E890
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x140042A44 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     ??$InternalCallback@UWNF_AUDIO_ORIENTATION_STATE@@@?$wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@QEAAXPEBUWNF_AUDIO_ORIENTATION_STATE@@K@Z @ 0x14005B5D8 (--$InternalCallback@UWNF_AUDIO_ORIENTATION_STATE@@@-$wnf_subscription_state@UWNF_AUDIO_ORIENTATI.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x14005CA24 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x14005D3D0 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     wil::details::wnf_subscription_state__CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_::InternalCallback__CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_ @ 0x14005F708 (wil--details--wnf_subscription_state__CAPOEnvironmentStateChangedNotificationsHandler--RegisterF.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x14007CD88 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn wil::details::in1diag3::_FailFastImmediate_Unexpected(wil::details::in1diag3 *this)
{
  __fastfail(7u);
}
