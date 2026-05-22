/*
 * XREFs of ?Provider@RawInputProvidersTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x1800D0A4C
 * Callers:
 *     ?AugmentedInputDevice_DeviceAttached_@RawInputProvidersTracing@@QEAAXI_N@Z @ 0x1800D019C (-AugmentedInputDevice_DeviceAttached_@RawInputProvidersTracing@@QEAAXI_N@Z.c)
 *     ?AugmentedInputDevice_DeviceRemoved_@RawInputProvidersTracing@@QEAAXI@Z @ 0x1800D0208 (-AugmentedInputDevice_DeviceRemoved_@RawInputProvidersTracing@@QEAAXI@Z.c)
 *     ??$SpatialInteractionDLL_EntryPointNotFound@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z @ 0x1800D146C (--$SpatialInteractionDLL_EntryPointNotFound@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z.c)
 *     ??$SpatialInteractionDLL_FailedToCreateCollection@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z @ 0x1800D14D8 (--$SpatialInteractionDLL_FailedToCreateCollection@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z.c)
 *     ??$SpatialInteractionDLL_LoadFailure@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z @ 0x1800D1544 (--$SpatialInteractionDLL_LoadFailure@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$03@@IEAA@XZ @ 0x1800D20F0 (--1-$_TlgActivityBase@V-$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z @ 0x1800D2794 (-ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z.c)
 *     ?FailedToStartTracingSession_@RawInputProvidersTracing@@QEAAXJ@Z @ 0x1800D31C4 (-FailedToStartTracingSession_@RawInputProvidersTracing@@QEAAXJ@Z.c)
 *     ?HeadEventHandlerDisabled_@RawInputProvidersTracing@@QEAAXXZ @ 0x1800D3718 (-HeadEventHandlerDisabled_@RawInputProvidersTracing@@QEAAXXZ.c)
 *     ?HeadEventHandlerEnabled_@RawInputProvidersTracing@@QEAAXJ@Z @ 0x1800D3758 (-HeadEventHandlerEnabled_@RawInputProvidersTracing@@QEAAXJ@Z.c)
 *     ?NotifyFailure@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800D3E60 (-NotifyFailure@-$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflector.c)
 *     ?SpatialInputControllerCollection_Released_@RawInputProvidersTracing@@QEAAXXZ @ 0x1800D57D0 (-SpatialInputControllerCollection_Released_@RawInputProvidersTracing@@QEAAXXZ.c)
 *     ?SpatialInteractionDLL_Loaded_@RawInputProvidersTracing@@QEAAXXZ @ 0x1800D5810 (-SpatialInteractionDLL_Loaded_@RawInputProvidersTracing@@QEAAXXZ.c)
 *     ?StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z @ 0x1800D5864 (-StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z.c)
 *     ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x1800D5D84 (-Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z.c)
 *     ?StopActivity@DeviceAttached@RawInputProvidersTracing@@MEAAXXZ @ 0x1800D6070 (-StopActivity@DeviceAttached@RawInputProvidersTracing@@MEAAXXZ.c)
 *     ?TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z @ 0x1800D630C (-TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z.c)
 *     ?TelemetryDdiDevice_Removed_@RawInputProvidersTracing@@QEAAXK@Z @ 0x1800D63E8 (-TelemetryDdiDevice_Removed_@RawInputProvidersTracing@@QEAAXK@Z.c)
 *     ?ReadFeatureReport_@RawInputProvidersTracing@@QEAAXJKE@Z @ 0x1800DCF84 (-ReadFeatureReport_@RawInputProvidersTracing@@QEAAXJKE@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800D0B10 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 */

const struct _tlgProvider_t *__fastcall RawInputProvidersTracing::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<RawInputProvidersTracing>::get(
                                             a1,
                                             _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_)
                                         + 8);
}
