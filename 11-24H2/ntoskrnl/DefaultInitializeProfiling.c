/*
 * XREFs of DefaultInitializeProfiling @ 0x140B4CA20
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Test52061194__private_IsEnabledDeviceUsageNoInline @ 0x1404F6654 (Feature_Test52061194__private_IsEnabledDeviceUsageNoInline.c)
 *     DefaultInitializeProfilingEnhanced @ 0x140B4CA48 (DefaultInitializeProfilingEnhanced.c)
 *     DefaultInitializeProfilingOriginal @ 0x140B4CB10 (DefaultInitializeProfilingOriginal.c)
 */

__int64 DefaultInitializeProfiling()
{
  if ( (unsigned int)Feature_Test52061194__private_IsEnabledDeviceUsageNoInline() )
    return DefaultInitializeProfilingEnhanced();
  else
    return DefaultInitializeProfilingOriginal();
}
