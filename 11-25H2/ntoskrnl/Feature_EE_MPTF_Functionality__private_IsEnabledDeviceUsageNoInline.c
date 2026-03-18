/*
 * XREFs of Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1405C86A4
 * Callers:
 *     PopConnectToPolicyDevice @ 0x14074DE04 (PopConnectToPolicyDevice.c)
 *     PopNotifyPolicyDevice @ 0x14074E0E0 (PopNotifyPolicyDevice.c)
 *     PopBatteryAdd @ 0x14074E680 (PopBatteryAdd.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     PopBatteryApplyCompositeState @ 0x140AC1ED8 (PopBatteryApplyCompositeState.c)
 *     PopBatteryEtwCallback @ 0x140AC2670 (PopBatteryEtwCallback.c)
 *     PopBatteryQueryStatus @ 0x140AC26B4 (PopBatteryQueryStatus.c)
 *     PopBatteryWorker @ 0x140AC2900 (PopBatteryWorker.c)
 *     PoInitDriverServices @ 0x140C1BDD8 (PoInitDriverServices.c)
 *     PopBatteryInit @ 0x140C209C0 (PopBatteryInit.c)
 *     PopBatteryInitPhaseTwo @ 0x140C20C4C (PopBatteryInitPhaseTwo.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     Feature_EE_MPTF_Functionality__private_IsEnabledFallback @ 0x1405C86DC (Feature_EE_MPTF_Functionality__private_IsEnabledFallback.c)
 */

__int64 Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EE_MPTF_Functionality__private_featureState & 0x10) != 0 )
    return Feature_EE_MPTF_Functionality__private_featureState & 1;
  else
    return Feature_EE_MPTF_Functionality__private_IsEnabledFallback(
             (unsigned int)Feature_EE_MPTF_Functionality__private_featureState,
             3LL);
}
