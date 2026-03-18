/*
 * XREFs of Feature_Backport_MitRitReliability__private_IsEnabledDeviceUsage @ 0x1C01398B4
 * Callers:
 *     MasterInputThreadPrepareForRitTakeover @ 0x1C001C414 (MasterInputThreadPrepareForRitTakeover.c)
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C009E670 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 * Callees:
 *     Feature_Backport_MitRitReliability__private_IsEnabledFallback @ 0x1C01398EC (Feature_Backport_MitRitReliability__private_IsEnabledFallback.c)
 */

__int64 Feature_Backport_MitRitReliability__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Backport_MitRitReliability__private_featureState & 0x10) != 0 )
    return Feature_Backport_MitRitReliability__private_featureState & 1;
  else
    return Feature_Backport_MitRitReliability__private_IsEnabledFallback(
             (unsigned int)Feature_Backport_MitRitReliability__private_featureState,
             3LL);
}
