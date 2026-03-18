/*
 * XREFs of ?TdrValidateDebugMode@@YAXXZ @ 0x1400716B0
 * Callers:
 *     TdrTimedOperationAllowToDebugTimeout @ 0x1400716F0 (TdrTimedOperationAllowToDebugTimeout.c)
 *     ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z @ 0x1401CA1D0 (-TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z.c)
 *     TdrAllowToDebugTimeout @ 0x1401CB99C (TdrAllowToDebugTimeout.c)
 * Callees:
 *     <none>
 */

void TdrValidateDebugMode(void)
{
  if ( (unsigned int)g_TdrDebugMode >= 4 )
    g_TdrDebugMode = 0;
}
