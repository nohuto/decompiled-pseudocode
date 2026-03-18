/*
 * XREFs of Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback @ 0x140095D9C
 * Callers:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140095D64 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14008AF04 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback(
        wil_details_FeatureStateCache observedState,
        wil_ReportingKind kind,
        __int64 a3,
        unsigned __int64 a4)
{
  return wil_details_IsEnabledFallback(
           observedState,
           kind,
           &Feature_SteelixInlineNvmeCryptoEngine__private_descriptor,
           a4);
}
