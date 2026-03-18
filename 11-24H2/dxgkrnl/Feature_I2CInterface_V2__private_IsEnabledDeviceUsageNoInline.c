/*
 * XREFs of Feature_I2CInterface_V2__private_IsEnabledDeviceUsageNoInline @ 0x14007DCA0
 * Callers:
 *     DpiFdoInitializeFdo @ 0x140242CBC (DpiFdoInitializeFdo.c)
 *     DpiPdoDispatchInternalIoctl @ 0x140429C30 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     Feature_I2CInterface_V2__private_IsEnabledFallback @ 0x14007DCD8 (Feature_I2CInterface_V2__private_IsEnabledFallback.c)
 */

__int64 Feature_I2CInterface_V2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_I2CInterface_V2__private_featureState & 0x10) != 0 )
    return Feature_I2CInterface_V2__private_featureState & 1;
  else
    return Feature_I2CInterface_V2__private_IsEnabledFallback(
             (unsigned int)Feature_I2CInterface_V2__private_featureState,
             3LL);
}
