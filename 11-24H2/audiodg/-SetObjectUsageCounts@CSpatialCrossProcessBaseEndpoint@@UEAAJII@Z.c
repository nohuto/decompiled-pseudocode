/*
 * XREFs of ?SetObjectUsageCounts@CSpatialCrossProcessBaseEndpoint@@UEAAJII@Z @ 0x14003A420
 * Callers:
 *     <none>
 * Callees:
 *     ?LogAsarUsageReporting@CSpatialCrossProcessEndpointTraceLogger@@QEAAXII@Z @ 0x14003A4A8 (-LogAsarUsageReporting@CSpatialCrossProcessEndpointTraceLogger@@QEAAXII@Z.c)
 *     ?CheckResourceLimits@CSpatialCrossProcessBaseEndpoint@@IEAAXI@Z @ 0x14003A540 (-CheckResourceLimits@CSpatialCrossProcessBaseEndpoint@@IEAAXI@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008D630 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::SetObjectUsageCounts(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int a2,
        unsigned int a3)
{
  unsigned int v6; // ebx

  CSpatialCrossProcessEndpointTraceLogger::LogAsarUsageReporting(
    (CSpatialCrossProcessBaseEndpoint *)((char *)this + 760),
    a2,
    a3);
  if ( a2 + a3 > *((_DWORD *)this + 67) )
  {
    v6 = -2005139346;
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::SetObjectUsageCounts", 0x3EFu, -2005139346);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)this + 160) + 56LL), __SPAIR64__(a3, a2));
    CSpatialCrossProcessBaseEndpoint::CheckResourceLimits((CSpatialCrossProcessBaseEndpoint *)((char *)this - 24), a3);
    return 0;
  }
  return v6;
}
