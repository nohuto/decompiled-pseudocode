/*
 * XREFs of Simulator_TestNotify @ 0x14006B5BC
 * Callers:
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     AMLIEvalNameSpaceObject @ 0x140014164 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     ACPIInterruptDispatchEventDpc @ 0x140019BA0 (ACPIInterruptDispatchEventDpc.c)
 *     Simulator_Pre_RegEventHandler @ 0x140051FD0 (Simulator_Pre_RegEventHandler.c)
 *     Simulator_NotifyNamespaceCollision @ 0x14006B25C (Simulator_NotifyNamespaceCollision.c)
 *     Simulator_RefreshTree @ 0x14006B4BC (Simulator_RefreshTree.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1400C82BC (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Simulator_TestNotify(PVOID Argument1)
{
  if ( !g_SimulatorCallbackObject )
    return 3221225473LL;
  ExNotifyCallback(g_SimulatorCallbackObject, Argument1, 0LL);
  return 0LL;
}
