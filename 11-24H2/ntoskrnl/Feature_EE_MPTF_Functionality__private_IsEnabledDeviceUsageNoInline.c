/*
 * XREFs of Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1404F6FAC
 * Callers:
 *     PopConnectToPolicyDevice @ 0x140758ACC (PopConnectToPolicyDevice.c)
 *     PopNotifyPolicyDevice @ 0x140758DA0 (PopNotifyPolicyDevice.c)
 *     PopBatteryAdd @ 0x140759340 (PopBatteryAdd.c)
 *     PopBatteryEtwCallback @ 0x140759470 (PopBatteryEtwCallback.c)
 *     PopBatteryQueryStatus @ 0x1407594B4 (PopBatteryQueryStatus.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     PopBatteryApplyCompositeState @ 0x140A304E8 (PopBatteryApplyCompositeState.c)
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 *     PoInitDriverServices @ 0x140C2EFFC (PoInitDriverServices.c)
 *     PopBatteryInit @ 0x140C33BE0 (PopBatteryInit.c)
 *     PopBatteryInitPhaseTwo @ 0x140C33E6C (PopBatteryInitPhaseTwo.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     Feature_EE_MPTF_Functionality__private_IsEnabledFallback @ 0x1404F6FE4 (Feature_EE_MPTF_Functionality__private_IsEnabledFallback.c)
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
