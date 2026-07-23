/*
 * XREFs of Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage @ 0x140473460
 * Callers:
 *     KeUpdateThreadTag @ 0x14046E3F0 (KeUpdateThreadTag.c)
 * Callees:
 *     Feature_Servicing_DeadlineQosReschedule__private_ReportUsageFallback @ 0x1405BF69C (Feature_Servicing_DeadlineQosReschedule__private_ReportUsageFallback.c)
 */

__int64 Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage()
{
  __int64 result; // rax

  result = (unsigned int)Feature_Servicing_DeadlineQosReschedule__private_featureState;
  if ( (Feature_Servicing_DeadlineQosReschedule__private_featureState & 0x10) == 0 )
    return Feature_Servicing_DeadlineQosReschedule__private_ReportUsageFallback(
             (unsigned int)Feature_Servicing_DeadlineQosReschedule__private_featureState,
             3LL);
  return result;
}
