/*
 * XREFs of Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140095D64
 * Callers:
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1400961AC (FxLibraryGlobalsQueryRegistrySettings.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback @ 0x140095D9C (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback.c)
 */

int __fastcall Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SteelixInlineNvmeCryptoEngine__private_featureState.exchange64 & 0x10) != 0 )
    return Feature_SteelixInlineNvmeCryptoEngine__private_featureState.exchange64 & 1;
  else
    return Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback(
             (wil_details_FeatureStateCache)Feature_SteelixInlineNvmeCryptoEngine__private_featureState.exchange,
             wil_ReportingKind_DeviceUsage);
}
