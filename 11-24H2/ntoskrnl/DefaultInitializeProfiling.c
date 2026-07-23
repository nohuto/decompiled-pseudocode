/*
 * XREFs of DefaultInitializeProfiling @ 0x140B4EA60
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Test52061194__private_IsEnabledDeviceUsageNoInline @ 0x1404F3F38 (Feature_Test52061194__private_IsEnabledDeviceUsageNoInline.c)
 *     DefaultInitializeProfilingEnhanced @ 0x140B4EA88 (DefaultInitializeProfilingEnhanced.c)
 *     DefaultInitializeProfilingOriginal @ 0x140B4EB50 (DefaultInitializeProfilingOriginal.c)
 */

__int64 DefaultInitializeProfiling()
{
  if ( (unsigned int)Feature_Test52061194__private_IsEnabledDeviceUsageNoInline() )
    return DefaultInitializeProfilingEnhanced();
  else
    return DefaultInitializeProfilingOriginal();
}
