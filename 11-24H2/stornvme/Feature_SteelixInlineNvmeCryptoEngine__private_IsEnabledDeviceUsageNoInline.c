/*
 * XREFs of Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x1400177D4
 * Callers:
 *     NVMeHwUnitControl @ 0x14000EC10 (NVMeHwUnitControl.c)
 *     NVMeHwFindAdapter @ 0x140017CA0 (NVMeHwFindAdapter.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback @ 0x14001780C (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback.c)
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
