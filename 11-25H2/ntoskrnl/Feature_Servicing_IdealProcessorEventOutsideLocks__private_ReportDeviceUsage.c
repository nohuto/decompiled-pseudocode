/*
 * XREFs of Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportDeviceUsage @ 0x14049C89C
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14026C404 (KiUpdateGlobalCpuSetConfiguration.c)
 * Callees:
 *     Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportUsageFallback @ 0x1405BB57C (Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportUsageFallback.c)
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
