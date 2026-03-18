/*
 * XREFs of VfIsVerifierEnabled @ 0x1404BC290
 * Callers:
 *     PipDmgIsDmaVerifierEnabled @ 0x140727624 (PipDmgIsDmaVerifierEnabled.c)
 *     KsepPatchDriverImportsTable @ 0x14073F684 (KsepPatchDriverImportsTable.c)
 *     PopDripsWatchdogTakeAction @ 0x1407664B0 (PopDripsWatchdogTakeAction.c)
 *     MiIssueDllInitializeCall @ 0x1407E7684 (MiIssueDllInitializeCall.c)
 *     MiUnloadApproved @ 0x1407E78AC (MiUnloadApproved.c)
 *     IopLoadUnloadDriver @ 0x1409C7700 (IopLoadUnloadDriver.c)
 *     IoShutdownSystem @ 0x140B5374C (IoShutdownSystem.c)
 *     PopMarkComponentsBootPhase @ 0x140B5D694 (PopMarkComponentsBootPhase.c)
 *     PopInvokeSystemStateHandler @ 0x140B6552C (PopInvokeSystemStateHandler.c)
 *     KdExitDebugger @ 0x140B75008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140B7A96C (KdEnterDebugger.c)
 *     VfDriverUnloadImage @ 0x140B8A5C0 (VfDriverUnloadImage.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
