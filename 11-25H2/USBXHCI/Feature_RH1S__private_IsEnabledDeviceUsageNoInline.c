/*
 * XREFs of Feature_RH1S__private_IsEnabledDeviceUsageNoInline @ 0x1400442B0
 * Callers:
 *     RootHub_UcxEvtInterruptTransfer @ 0x1400252D0 (RootHub_UcxEvtInterruptTransfer.c)
 *     Controller_IdleTimeoutUpdateWorker @ 0x1400381E0 (Controller_IdleTimeoutUpdateWorker.c)
 *     Controller_PopulateDeviceFlags @ 0x140076CC0 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     Feature_RH1S__private_IsEnabledFallback @ 0x1400442E8 (Feature_RH1S__private_IsEnabledFallback.c)
 */

__int64 Feature_RH1S__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_RH1S__private_featureState & 0x10) != 0 )
    return Feature_RH1S__private_featureState & 1;
  else
    return Feature_RH1S__private_IsEnabledFallback((unsigned int)Feature_RH1S__private_featureState, 3LL);
}
