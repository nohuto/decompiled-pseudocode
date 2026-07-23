/*
 * XREFs of Amd64InitializeUncoreProfiling @ 0x140569040
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Test52061194__private_IsEnabledDeviceUsageNoInline @ 0x1404F3F38 (Feature_Test52061194__private_IsEnabledDeviceUsageNoInline.c)
 *     Amd64InitializeUncoreProfilingEnhanced @ 0x140569068 (Amd64InitializeUncoreProfilingEnhanced.c)
 *     Amd64InitializeUncoreProfilingOriginal @ 0x140569178 (Amd64InitializeUncoreProfilingOriginal.c)
 */

__int64 Amd64InitializeUncoreProfiling()
{
  if ( (unsigned int)Feature_Test52061194__private_IsEnabledDeviceUsageNoInline() )
    return Amd64InitializeUncoreProfilingEnhanced();
  else
    return Amd64InitializeUncoreProfilingOriginal();
}
