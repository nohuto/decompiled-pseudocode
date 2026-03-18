/*
 * XREFs of ?DrvIsModeChangeHandledByDispBroker@@YA_NXZ @ 0x1401C84B0
 * Callers:
 *     DrvSetDisplayConfig @ 0x140137640 (DrvSetDisplayConfig.c)
 * Callees:
 *     DispBrokerGetCurrentMode @ 0x1400C83E0 (DispBrokerGetCurrentMode.c)
 *     Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage @ 0x14019F594 (Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage.c)
 */

bool DrvIsModeChangeHandledByDispBroker(void)
{
  __int64 v0; // rcx

  Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage();
  return (unsigned int)DispBrokerGetCurrentMode(v0) == 3;
}
