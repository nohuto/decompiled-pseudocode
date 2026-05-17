/*
 * XREFs of Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledDeviceUsageNoInline @ 0x1801470E4
 * Callers:
 *     RtlIsEnclaveFeaturePresent @ 0x18011C1E0 (RtlIsEnclaveFeaturePresent.c)
 * Callees:
 *     <none>
 */

__int64 Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_VBSEnclavesForArgon__private_featureState & 0x10) != 0 )
    return Feature_Servicing_VBSEnclavesForArgon__private_featureState & 1;
  else
    return Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_VBSEnclavesForArgon__private_featureState,
             3LL);
}
