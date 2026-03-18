/*
 * XREFs of Feature_EnableAENAtEndOfDeviceInit__private_IsEnabledDeviceUsageNoInline @ 0x140019F2C
 * Callers:
 *     NVMeControllerInitPart3 @ 0x14000FB50 (NVMeControllerInitPart3.c)
 * Callees:
 *     Feature_EnableAENAtEndOfDeviceInit__private_IsEnabledFallback @ 0x140019F64 (Feature_EnableAENAtEndOfDeviceInit__private_IsEnabledFallback.c)
 */

__int64 Feature_EnableAENAtEndOfDeviceInit__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EnableAENAtEndOfDeviceInit__private_featureState & 0x10) != 0 )
    return Feature_EnableAENAtEndOfDeviceInit__private_featureState & 1;
  else
    return Feature_EnableAENAtEndOfDeviceInit__private_IsEnabledFallback(
             (unsigned int)Feature_EnableAENAtEndOfDeviceInit__private_featureState,
             3LL);
}
