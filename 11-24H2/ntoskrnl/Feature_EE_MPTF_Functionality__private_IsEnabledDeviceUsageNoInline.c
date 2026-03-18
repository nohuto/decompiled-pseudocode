/*
 * XREFs of Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1404F96CC
 * Callers:
 *     PopConnectToPolicyDevice @ 0x14075A3DC (PopConnectToPolicyDevice.c)
 *     PopNotifyPolicyDevice @ 0x14075A6B0 (PopNotifyPolicyDevice.c)
 *     PopBatteryAdd @ 0x14075AC50 (PopBatteryAdd.c)
 *     PopBatteryEtwCallback @ 0x14075AD80 (PopBatteryEtwCallback.c)
 *     PopBatteryQueryStatus @ 0x14075ADC4 (PopBatteryQueryStatus.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PopBatteryApplyCompositeState @ 0x140A3AD08 (PopBatteryApplyCompositeState.c)
 *     PopBatteryWorker @ 0x140AC7D70 (PopBatteryWorker.c)
 *     PoInitDriverServices @ 0x140C2CEDC (PoInitDriverServices.c)
 *     PopBatteryInit @ 0x140C31AC0 (PopBatteryInit.c)
 *     PopBatteryInitPhaseTwo @ 0x140C31D4C (PopBatteryInitPhaseTwo.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     Feature_EE_MPTF_Functionality__private_IsEnabledFallback @ 0x1404F9704 (Feature_EE_MPTF_Functionality__private_IsEnabledFallback.c)
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
