/*
 * XREFs of Feature_SPR_HardenInClient__private_IsEnabledFallback @ 0x1400AB26C
 * Callers:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1400AB234 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14008AF60 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SPR_HardenInClient__private_IsEnabledFallback(
        wil_details_FeatureStateCache observedState,
        wil_ReportingKind kind,
        __int64 a3,
        unsigned __int64 a4)
{
  return wil_details_IsEnabledFallback(observedState, kind, &Feature_SPR_HardenInClient__private_descriptor, a4);
}
