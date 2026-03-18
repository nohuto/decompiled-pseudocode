/*
 * XREFs of Feature_WdfCD2__private_IsEnabledFallback @ 0x140095DF0
 * Callers:
 *     Feature_WdfCD2__private_IsEnabledDeviceUsageNoInline @ 0x140095DB8 (Feature_WdfCD2__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14008AF04 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_WdfCD2__private_IsEnabledFallback(
        wil_details_FeatureStateCache observedState,
        wil_ReportingKind kind,
        __int64 a3,
        unsigned __int64 a4)
{
  return wil_details_IsEnabledFallback(observedState, kind, &Feature_WdfCD2__private_descriptor, a4);
}
