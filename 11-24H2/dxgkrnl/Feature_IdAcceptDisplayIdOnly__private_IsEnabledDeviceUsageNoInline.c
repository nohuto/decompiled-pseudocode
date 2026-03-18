/*
 * XREFs of Feature_IdAcceptDisplayIdOnly__private_IsEnabledDeviceUsageNoInline @ 0x1400915AC
 * Callers:
 *     ?HasDescriptor@DXGMONITOR@@UEBA_NXZ @ 0x140275A00 (-HasDescriptor@DXGMONITOR@@UEBA_NXZ.c)
 * Callees:
 *     Feature_IdAcceptDisplayIdOnly__private_IsEnabledFallback @ 0x1400915E4 (Feature_IdAcceptDisplayIdOnly__private_IsEnabledFallback.c)
 */

__int64 Feature_IdAcceptDisplayIdOnly__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_IdAcceptDisplayIdOnly__private_featureState & 0x10) != 0 )
    return Feature_IdAcceptDisplayIdOnly__private_featureState & 1;
  else
    return Feature_IdAcceptDisplayIdOnly__private_IsEnabledFallback(
             (unsigned int)Feature_IdAcceptDisplayIdOnly__private_featureState,
             3LL);
}
