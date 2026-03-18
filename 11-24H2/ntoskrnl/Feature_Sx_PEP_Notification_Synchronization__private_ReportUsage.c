/*
 * XREFs of Feature_Sx_PEP_Notification_Synchronization__private_ReportUsage @ 0x1405CD900
 * Callers:
 *     PoFxInitPowerManagement @ 0x140C2E41C (PoFxInitPowerManagement.c)
 * Callees:
 *     Feature_Sx_PEP_Notification_Synchronization__private_ReportUsageFallback @ 0x1405CD938 (Feature_Sx_PEP_Notification_Synchronization__private_ReportUsageFallback.c)
 */

__int64 Feature_Sx_PEP_Notification_Synchronization__private_ReportUsage()
{
  __int64 result; // rax

  result = (unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_featureState;
  if ( (Feature_Sx_PEP_Notification_Synchronization__private_featureState & 0x10) == 0 )
    return Feature_Sx_PEP_Notification_Synchronization__private_ReportUsageFallback(
             (unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_featureState,
             3LL);
  return result;
}
