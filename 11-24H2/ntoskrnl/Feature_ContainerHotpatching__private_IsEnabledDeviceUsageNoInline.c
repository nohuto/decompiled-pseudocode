/*
 * XREFs of Feature_ContainerHotpatching__private_IsEnabledDeviceUsageNoInline @ 0x14067CDEC
 * Callers:
 *     MiOpenHotPatchFile @ 0x140A9FE3C (MiOpenHotPatchFile.c)
 * Callees:
 *     Feature_ContainerHotpatching__private_IsEnabledFallback @ 0x14067CE24 (Feature_ContainerHotpatching__private_IsEnabledFallback.c)
 */

__int64 Feature_ContainerHotpatching__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ContainerHotpatching__private_featureState & 0x10) != 0 )
    return Feature_ContainerHotpatching__private_featureState & 1;
  else
    return Feature_ContainerHotpatching__private_IsEnabledFallback(
             (unsigned int)Feature_ContainerHotpatching__private_featureState,
             3LL);
}
