/*
 * XREFs of Feature_HoldingModeChangeLockwhenCheckingMonitorPowerState__private_IsEnabledFallback @ 0x14006B53C
 * Callers:
 *     Feature_HoldingModeChangeLockwhenCheckingMonitorPowerState__private_IsEnabledDeviceUsageNoInline @ 0x14006B504 (Feature_HoldingModeChangeLockwhenCheckingMonitorPowerState__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140061F08 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_HoldingModeChangeLockwhenCheckingMonitorPowerState__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           &Feature_HoldingModeChangeLockwhenCheckingMonitorPowerState__private_descriptor);
}
