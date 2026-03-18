/*
 * XREFs of Amd64InitializeProfiling @ 0x140B50EA0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Test52061194__private_IsEnabledDeviceUsageNoInline @ 0x1404F6654 (Feature_Test52061194__private_IsEnabledDeviceUsageNoInline.c)
 *     Amd64InitializeProfilingEnhanced @ 0x140B50EC8 (Amd64InitializeProfilingEnhanced.c)
 *     Amd64InitializeProfilingOriginal @ 0x140B51488 (Amd64InitializeProfilingOriginal.c)
 */

__int64 Amd64InitializeProfiling()
{
  if ( (unsigned int)Feature_Test52061194__private_IsEnabledDeviceUsageNoInline() )
    return Amd64InitializeProfilingEnhanced();
  else
    return Amd64InitializeProfilingOriginal();
}
