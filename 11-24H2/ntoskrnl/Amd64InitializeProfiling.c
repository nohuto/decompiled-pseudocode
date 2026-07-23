/*
 * XREFs of Amd64InitializeProfiling @ 0x140B52EF0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Test52061194__private_IsEnabledDeviceUsageNoInline @ 0x1404F3F38 (Feature_Test52061194__private_IsEnabledDeviceUsageNoInline.c)
 *     Amd64InitializeProfilingEnhanced @ 0x140B52F18 (Amd64InitializeProfilingEnhanced.c)
 *     Amd64InitializeProfilingOriginal @ 0x140B534D8 (Amd64InitializeProfilingOriginal.c)
 */

__int64 Amd64InitializeProfiling()
{
  if ( (unsigned int)Feature_Test52061194__private_IsEnabledDeviceUsageNoInline() )
    return Amd64InitializeProfilingEnhanced();
  else
    return Amd64InitializeProfilingOriginal();
}
