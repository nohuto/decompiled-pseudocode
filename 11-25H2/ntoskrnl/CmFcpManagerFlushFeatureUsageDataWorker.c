/*
 * XREFs of CmFcpManagerFlushFeatureUsageDataWorker @ 0x1407D5040
 * Callers:
 *     <none>
 * Callees:
 *     CmFcpManagerProcessUsageDataProviders @ 0x140A8D7AC (CmFcpManagerProcessUsageDataProviders.c)
 */

__int64 __fastcall CmFcpManagerFlushFeatureUsageDataWorker(__int64 a1, __int64 a2)
{
  return CmFcpManagerProcessUsageDataProviders(a2);
}
