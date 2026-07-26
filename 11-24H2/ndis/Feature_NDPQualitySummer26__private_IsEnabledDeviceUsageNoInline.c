/*
 * XREFs of Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline @ 0x140092EB0
 * Callers:
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1400110D0 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x140071C40 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     ndisIfRegisterInterfaceEx @ 0x140087DB0 (ndisIfRegisterInterfaceEx.c)
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x140088780 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ndisNblTrackerWatchdogWorkerRoutine @ 0x1401385C0 (ndisNblTrackerWatchdogWorkerRoutine.c)
 *     ndisReportTimeoutWaitingForExternalDriver @ 0x1401422E0 (ndisReportTimeoutWaitingForExternalDriver.c)
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x14018E8A4 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     Feature_NDPQualitySummer26__private_IsEnabledFallback @ 0x140092EE8 (Feature_NDPQualitySummer26__private_IsEnabledFallback.c)
 */

__int64 Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NDPQualitySummer26__private_featureState & 0x10) != 0 )
    return Feature_NDPQualitySummer26__private_featureState & 1;
  else
    return Feature_NDPQualitySummer26__private_IsEnabledFallback(
             (unsigned int)Feature_NDPQualitySummer26__private_featureState,
             3LL);
}
