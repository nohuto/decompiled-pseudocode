/*
 * XREFs of CmFcpManagerFlushFeatureUsageDataWorker @ 0x1407E4EB0
 * Callers:
 *     <none>
 * Callees:
 *     CmFcpManagerProcessUsageDataProviders @ 0x140A90644 (CmFcpManagerProcessUsageDataProviders.c)
 */

__int64 __fastcall CmFcpManagerFlushFeatureUsageDataWorker(__int64 a1, __int64 a2)
{
  return CmFcpManagerProcessUsageDataProviders(a2);
}
