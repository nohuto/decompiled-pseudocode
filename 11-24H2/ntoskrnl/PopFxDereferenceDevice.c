/*
 * XREFs of PopFxDereferenceDevice @ 0x1403A7F58
 * Callers:
 *     PopFxCompleteComponentActivation @ 0x1402BFDF0 (PopFxCompleteComponentActivation.c)
 *     PopFxProcessWork @ 0x1402BFE70 (PopFxProcessWork.c)
 *     PopFxAllocatePowerIrp @ 0x1402E6A5C (PopFxAllocatePowerIrp.c)
 *     PoFxPowerControl @ 0x1403A58C0 (PoFxPowerControl.c)
 *     PopFxPlatformIdleVeto @ 0x1403A6020 (PopFxPlatformIdleVeto.c)
 *     PoFxNotifySurprisePowerOn @ 0x1403A6200 (PoFxNotifySurprisePowerOn.c)
 *     PopRequestCompletion @ 0x1403A6460 (PopRequestCompletion.c)
 *     PopFxReleasePowerIrp @ 0x1403A7E40 (PopFxReleasePowerIrp.c)
 *     PopRequestPowerIrp @ 0x1403A7FD0 (PopRequestPowerIrp.c)
 *     PopAllocateIrp @ 0x1403A8268 (PopAllocateIrp.c)
 *     PopFxActivateDevice @ 0x140490A10 (PopFxActivateDevice.c)
 *     PopFxDirectedPowerTransitionWorker @ 0x1404B3CA0 (PopFxDirectedPowerTransitionWorker.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1404C2478 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopFxClearDeviceConstraints @ 0x1404CDF98 (PopFxClearDeviceConstraints.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1404F756C (PopFxCompleteDirectedPowerTransition.c)
 *     PoFxAddComponentRelation @ 0x1405CD500 (PoFxAddComponentRelation.c)
 *     PoFxAddDeviceRelation @ 0x1405CD770 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveComponentRelation @ 0x1405CDBB0 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x1405CDE10 (PoFxRemoveDeviceRelation.c)
 *     PopFxComponentPerfWork @ 0x1405CE0C0 (PopFxComponentPerfWork.c)
 *     PopFxDeviceWork @ 0x1405CE730 (PopFxDeviceWork.c)
 *     PopFxProcessorIdleVeto @ 0x1405CEFC0 (PopFxProcessorIdleVeto.c)
 *     PopFxUpdatePlatformIdleState @ 0x1405CF850 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x1405CF930 (PopFxUpdateProcessorIdleState.c)
 *     PopPepPlatformStateRegistered @ 0x1405D8BE8 (PopPepPlatformStateRegistered.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14074BEEC (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopFxRegisterDevice @ 0x14074CC80 (PopFxRegisterDevice.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x140A6AD30 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopFxUpdateVetoMaskWork @ 0x140A97B30 (PopFxUpdateVetoMaskWork.c)
 *     PopSystemIrpCompletion @ 0x140B71950 (PopSystemIrpCompletion.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 */

LONG __fastcall PopFxDereferenceDevice(__int64 a1, int a2)
{
  LONG result; // eax

  _InterlockedDecrement((volatile signed __int32 *)(a1 + 4LL * a2 + 272));
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 244), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 248), 0, 0);
  return result;
}
