/*
 * XREFs of Feature_PpmParkEx__private_IsEnabledNoReportingNoInline @ 0x1405B2278
 * Callers:
 *     KeGetTopologySiblingGroupAffinityForProcessor @ 0x14032A8E4 (KeGetTopologySiblingGroupAffinityForProcessor.c)
 *     KeGetTopologySiblingAffinityForProcessor @ 0x1404DE1EC (KeGetTopologySiblingAffinityForProcessor.c)
 *     KiConfigureInitialNodes @ 0x1405B89B8 (KiConfigureInitialNodes.c)
 *     KiComputeTopologyConstants @ 0x1405C5F38 (KiComputeTopologyConstants.c)
 *     KiComputeTopologyConstantsAmd @ 0x1405C6050 (KiComputeTopologyConstantsAmd.c)
 *     KiComputeTopologyConstantsIntelCompatible @ 0x1405C6328 (KiComputeTopologyConstantsIntelCompatible.c)
 *     PpmHeteroHgsCpuSupportedForContainment @ 0x1405D437C (PpmHeteroHgsCpuSupportedForContainment.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x1405D4400 (PpmHeteroHgsDetectContainmentPresence.c)
 *     KiInitializeTopologyStructures @ 0x140B5B318 (KiInitializeTopologyStructures.c)
 *     KiSetFeatureBits @ 0x140B5BC74 (KiSetFeatureBits.c)
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 * Callees:
 *     Feature_PpmParkEx__private_IsEnabledFallback @ 0x1405B225C (Feature_PpmParkEx__private_IsEnabledFallback.c)
 */

__int64 Feature_PpmParkEx__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_PpmParkEx__private_featureState & 2) != 0 )
    return Feature_PpmParkEx__private_featureState & 1;
  else
    return Feature_PpmParkEx__private_IsEnabledFallback((unsigned int)Feature_PpmParkEx__private_featureState, 0);
}
