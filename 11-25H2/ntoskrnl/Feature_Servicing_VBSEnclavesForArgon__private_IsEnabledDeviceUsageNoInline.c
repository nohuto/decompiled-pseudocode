/*
 * XREFs of Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledDeviceUsageNoInline @ 0x1405DB288
 * Callers:
 *     RtlIsEnclaveFeaturePresent @ 0x14076DD4C (RtlIsEnclaveFeaturePresent.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledFallback @ 0x1405DB2C0 (Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledFallback.c)
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
