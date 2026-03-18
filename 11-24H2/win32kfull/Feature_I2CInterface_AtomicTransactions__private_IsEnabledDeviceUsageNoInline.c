/*
 * XREFs of Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline @ 0x1403226B8
 * Callers:
 *     ?DdcciGetVCPFeature@CPhysicalMonitorHandle@@QEAAJKPEAW4_MC_VCP_CODE_TYPE@@PEAK1@Z @ 0x1401ECAF0 (-DdcciGetVCPFeature@CPhysicalMonitorHandle@@QEAAJKPEAW4_MC_VCP_CODE_TYPE@@PEAK1@Z.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x14025C4B0 (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?DdcciGetTimingReport@CPhysicalMonitorHandle@@QEAAJPEAU_MC_TIMING_REPORT@@@Z @ 0x140322304 (-DdcciGetTimingReport@CPhysicalMonitorHandle@@QEAAJPEAU_MC_TIMING_REPORT@@@Z.c)
 * Callees:
 *     Feature_I2CInterface_AtomicTransactions__private_IsEnabledFallback @ 0x1403226F0 (Feature_I2CInterface_AtomicTransactions__private_IsEnabledFallback.c)
 */

__int64 Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_I2CInterface_AtomicTransactions__private_featureState & 0x10) != 0 )
    return Feature_I2CInterface_AtomicTransactions__private_featureState & 1;
  else
    return Feature_I2CInterface_AtomicTransactions__private_IsEnabledFallback(
             (unsigned int)Feature_I2CInterface_AtomicTransactions__private_featureState,
             3LL);
}
