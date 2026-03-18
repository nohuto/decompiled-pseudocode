/*
 * XREFs of Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline @ 0x14069646C
 * Callers:
 *     VhdiAutoAttachOneVhd @ 0x14081A06C (VhdiAutoAttachOneVhd.c)
 *     VhdiMountVhdFile @ 0x14081A2D0 (VhdiMountVhdFile.c)
 *     VhdAutoAttachVirtualDisks @ 0x140C4BCCC (VhdAutoAttachVirtualDisks.c)
 *     VhdInitialize @ 0x140C4BF5C (VhdInitialize.c)
 * Callees:
 *     Feature_VhdBootAttachNullTerminate__private_IsEnabledFallback @ 0x1406964A4 (Feature_VhdBootAttachNullTerminate__private_IsEnabledFallback.c)
 */

__int64 Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_VhdBootAttachNullTerminate__private_featureState & 0x10) != 0 )
    return Feature_VhdBootAttachNullTerminate__private_featureState & 1;
  else
    return Feature_VhdBootAttachNullTerminate__private_IsEnabledFallback(
             (unsigned int)Feature_VhdBootAttachNullTerminate__private_featureState,
             3LL);
}
