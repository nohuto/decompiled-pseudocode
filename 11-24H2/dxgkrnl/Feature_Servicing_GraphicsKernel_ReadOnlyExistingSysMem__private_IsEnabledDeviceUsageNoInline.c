/*
 * XREFs of Feature_Servicing_GraphicsKernel_ReadOnlyExistingSysMem__private_IsEnabledDeviceUsageNoInline @ 0x1400960C8
 * Callers:
 *     ConfigureFeatureDefaults @ 0x1402882E4 (ConfigureFeatureDefaults.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_ReadOnlyExistingSysMem__private_IsEnabledFallback @ 0x140096100 (Feature_Servicing_GraphicsKernel_ReadOnlyExistingSysMem__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GraphicsKernel_ReadOnlyExistingSysMem__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GraphicsKernel_ReadOnlyExistingSysMem__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GraphicsKernel_ReadOnlyExistingSysMem__private_featureState & 1;
  else
    return Feature_Servicing_GraphicsKernel_ReadOnlyExistingSysMem__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GraphicsKernel_ReadOnlyExistingSysMem__private_featureState,
             3LL);
}
