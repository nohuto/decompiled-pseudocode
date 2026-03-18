/*
 * XREFs of PspSetProcessPpmPolicy @ 0x140AC4BB0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetProcessPpmPolicy @ 0x140200830 (KeSetProcessPpmPolicy.c)
 *     Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline @ 0x1404F0A4C (Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall PspSetProcessPpmPolicy(__int64 a1, int a2)
{
  if ( (unsigned int)Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline()
    && a2 == 9
    && PspDisableWindowInFocusUserIdleQos )
  {
    a2 = 7;
  }
  return KeSetProcessPpmPolicy(a1, a2);
}
