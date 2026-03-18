/*
 * XREFs of Feature_UTSP__private_IsEnabledDeviceUsageNoInline @ 0x14004DF34
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x14003BBF8 (UsbDevice_UpdateUsbDevice.c)
 *     UsbDevice_RunUpdateTunnelStateDsm @ 0x14004E6F0 (UsbDevice_RunUpdateTunnelStateDsm.c)
 * Callees:
 *     Feature_UTSP__private_IsEnabledFallback @ 0x14004DF6C (Feature_UTSP__private_IsEnabledFallback.c)
 */

__int64 Feature_UTSP__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UTSP__private_featureState & 0x10) != 0 )
    return Feature_UTSP__private_featureState & 1;
  else
    return Feature_UTSP__private_IsEnabledFallback((unsigned int)Feature_UTSP__private_featureState, 3LL);
}
