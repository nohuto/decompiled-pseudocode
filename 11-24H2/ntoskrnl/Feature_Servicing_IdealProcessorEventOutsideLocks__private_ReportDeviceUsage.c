/*
 * XREFs of Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportDeviceUsage @ 0x1403A4B08
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1403A3DA8 (KiUpdateGlobalCpuSetConfiguration.c)
 * Callees:
 *     Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportUsageFallback @ 0x1405BC9EC (Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportUsageFallback.c)
 */

__int64 Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportDeviceUsage()
{
  __int64 result; // rax

  result = (unsigned int)Feature_Servicing_IdealProcessorEventOutsideLocks__private_featureState;
  if ( (Feature_Servicing_IdealProcessorEventOutsideLocks__private_featureState & 0x10) == 0 )
    return Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportUsageFallback(
             (unsigned int)Feature_Servicing_IdealProcessorEventOutsideLocks__private_featureState,
             3LL);
  return result;
}
