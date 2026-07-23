/*
 * XREFs of VfIsVerifierEnabled @ 0x1404B71A0
 * Callers:
 *     PipDmgIsDmaVerifierEnabled @ 0x1407251B4 (PipDmgIsDmaVerifierEnabled.c)
 *     KsepPatchDriverImportsTable @ 0x14073D5B4 (KsepPatchDriverImportsTable.c)
 *     PopDripsWatchdogTakeAction @ 0x140765E80 (PopDripsWatchdogTakeAction.c)
 *     MiIssueDllInitializeCall @ 0x1407E7C54 (MiIssueDllInitializeCall.c)
 *     MiUnloadApproved @ 0x1407E7E7C (MiUnloadApproved.c)
 *     IopLoadUnloadDriver @ 0x140A66EE0 (IopLoadUnloadDriver.c)
 *     IoShutdownSystem @ 0x140B5579C (IoShutdownSystem.c)
 *     PopMarkComponentsBootPhase @ 0x140B5F714 (PopMarkComponentsBootPhase.c)
 *     PopInvokeSystemStateHandler @ 0x140B6766C (PopInvokeSystemStateHandler.c)
 *     KdExitDebugger @ 0x140B77008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140B7C96C (KdEnterDebugger.c)
 *     VfDriverUnloadImage @ 0x140B8C5C0 (VfDriverUnloadImage.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
