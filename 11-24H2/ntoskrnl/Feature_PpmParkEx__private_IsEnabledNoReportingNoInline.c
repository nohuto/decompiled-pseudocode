/*
 * XREFs of Feature_PpmParkEx__private_IsEnabledNoReportingNoInline @ 0x1405B5004
 * Callers:
 *     KeGetTopologySiblingGroupAffinityForProcessor @ 0x1402021F4 (KeGetTopologySiblingGroupAffinityForProcessor.c)
 *     KeGetTopologySiblingAffinityForProcessor @ 0x1404E752C (KeGetTopologySiblingAffinityForProcessor.c)
 *     KiConfigureInitialNodes @ 0x1405BB388 (KiConfigureInitialNodes.c)
 *     KiComputeTopologyConstants @ 0x1405C8808 (KiComputeTopologyConstants.c)
 *     KiComputeTopologyConstantsAmd @ 0x1405C8920 (KiComputeTopologyConstantsAmd.c)
 *     KiComputeTopologyConstantsIntelCompatible @ 0x1405C8BF8 (KiComputeTopologyConstantsIntelCompatible.c)
 *     PpmHeteroHgsCpuSupportedForContainment @ 0x1405D6DB0 (PpmHeteroHgsCpuSupportedForContainment.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x1405D6E5C (PpmHeteroHgsDetectContainmentPresence.c)
 *     KiInitializeTopologyStructures @ 0x140B59298 (KiInitializeTopologyStructures.c)
 *     KiSetFeatureBits @ 0x140B59BF4 (KiSetFeatureBits.c)
 *     KeInitSystem @ 0x140C60CE0 (KeInitSystem.c)
 * Callees:
 *     Feature_PpmParkEx__private_IsEnabledFallback @ 0x1405B4FE8 (Feature_PpmParkEx__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_PpmParkEx__private_IsEnabledNoReportingNoInline(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( (Feature_PpmParkEx__private_featureState & 2) != 0 )
    return Feature_PpmParkEx__private_featureState & 1;
  else
    return Feature_PpmParkEx__private_IsEnabledFallback(
             (unsigned int)Feature_PpmParkEx__private_featureState,
             0,
             a3,
             a4);
}
