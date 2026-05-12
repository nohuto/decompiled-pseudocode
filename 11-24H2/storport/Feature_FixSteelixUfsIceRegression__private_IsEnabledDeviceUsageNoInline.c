/*
 * XREFs of Feature_FixSteelixUfsIceRegression__private_IsEnabledDeviceUsageNoInline @ 0x140069568
 * Callers:
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x14006A2CC (RaidAdapterSendCryptoOperationSynchronously.c)
 * Callees:
 *     Feature_FixSteelixUfsIceRegression__private_IsEnabledFallback @ 0x1400695A0 (Feature_FixSteelixUfsIceRegression__private_IsEnabledFallback.c)
 */

__int64 Feature_FixSteelixUfsIceRegression__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixSteelixUfsIceRegression__private_featureState & 0x10) != 0 )
    return Feature_FixSteelixUfsIceRegression__private_featureState & 1;
  else
    return Feature_FixSteelixUfsIceRegression__private_IsEnabledFallback(
             (unsigned int)Feature_FixSteelixUfsIceRegression__private_featureState,
             3LL);
}
