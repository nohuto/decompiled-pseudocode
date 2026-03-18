/*
 * XREFs of Feature_IdAcceptDisplayIdOnly__private_IsEnabledDeviceUsageNoInline @ 0x14009014C
 * Callers:
 *     ?HasDescriptor@DXGMONITOR@@UEBA_NXZ @ 0x14026EAA0 (-HasDescriptor@DXGMONITOR@@UEBA_NXZ.c)
 * Callees:
 *     Feature_IdAcceptDisplayIdOnly__private_IsEnabledFallback @ 0x140090184 (Feature_IdAcceptDisplayIdOnly__private_IsEnabledFallback.c)
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
