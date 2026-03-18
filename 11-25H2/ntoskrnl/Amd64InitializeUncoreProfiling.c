/*
 * XREFs of Amd64InitializeUncoreProfiling @ 0x1405688B0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Test52061194__private_IsEnabledDeviceUsageNoInline @ 0x1404F1E40 (Feature_Test52061194__private_IsEnabledDeviceUsageNoInline.c)
 *     Amd64InitializeUncoreProfilingEnhanced @ 0x1405688D8 (Amd64InitializeUncoreProfilingEnhanced.c)
 *     Amd64InitializeUncoreProfilingOriginal @ 0x1405689E8 (Amd64InitializeUncoreProfilingOriginal.c)
 */

__int64 Amd64InitializeUncoreProfiling()
{
  if ( (unsigned int)Feature_Test52061194__private_IsEnabledDeviceUsageNoInline() )
    return Amd64InitializeUncoreProfilingEnhanced();
  else
    return Amd64InitializeUncoreProfilingOriginal();
}
