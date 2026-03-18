/*
 * XREFs of Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140593CA4
 * Callers:
 *     IoPropagateIrpExtensionEx @ 0x1404586F0 (IoPropagateIrpExtensionEx.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback @ 0x140593CDC (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback.c)
 */

__int64 Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SteelixInlineNvmeCryptoEngine__private_featureState & 0x10) != 0 )
    return Feature_SteelixInlineNvmeCryptoEngine__private_featureState & 1;
  else
    return Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback(
             (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_featureState,
             3LL);
}
