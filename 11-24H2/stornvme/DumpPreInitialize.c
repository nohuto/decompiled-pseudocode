/*
 * XREFs of DumpPreInitialize @ 0x140017660
 * Callers:
 *     <none>
 * Callees:
 *     wil_InitializeFeatureStaging @ 0x140046078 (wil_InitializeFeatureStaging.c)
 */

__int64 DumpPreInitialize()
{
  g_DumpPreInitializeInvoked = 1;
  return wil_InitializeFeatureStaging();
}
