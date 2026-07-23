/*
 * XREFs of CmFcRegisterFeatureConfigurationChangeNotification @ 0x1406F8CF8
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1404C5390 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140A9CFDC (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 */

__int64 __fastcall CmFcRegisterFeatureConfigurationChangeNotification(int a1, int a2, int a3, __int64 a4)
{
  return CmFcManagerRegisterFeatureConfigurationChangeNotification(a1, a1, a2, a3, a4);
}
