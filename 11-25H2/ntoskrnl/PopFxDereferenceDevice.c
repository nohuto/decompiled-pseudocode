/*
 * XREFs of PopFxDereferenceDevice @ 0x1403589F8
 * Callers:
 *     PopFxProcessWork @ 0x14034B940 (PopFxProcessWork.c)
 *     PopFxClearDeviceConstraints @ 0x140354884 (PopFxClearDeviceConstraints.c)
 *     PopRequestCompletion @ 0x1403580F0 (PopRequestCompletion.c)
 *     PopFxReleasePowerIrp @ 0x1403588E0 (PopFxReleasePowerIrp.c)
 *     PopFxAllocatePowerIrp @ 0x140358D10 (PopFxAllocatePowerIrp.c)
 *     PopRequestPowerIrp @ 0x140359B00 (PopRequestPowerIrp.c)
 *     PopAllocateIrp @ 0x140359E20 (PopAllocateIrp.c)
 *     PopFxDirectedPowerTransitionWorker @ 0x14044FCC0 (PopFxDirectedPowerTransitionWorker.c)
 *     PopFxActivateDevice @ 0x14047D560 (PopFxActivateDevice.c)
 *     PoFxNotifySurprisePowerOn @ 0x14048C950 (PoFxNotifySurprisePowerOn.c)
 *     PopFxPlatformIdleVeto @ 0x1404A1630 (PopFxPlatformIdleVeto.c)
 *     PoFxPowerControl @ 0x1404A8EE0 (PoFxPowerControl.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1404C8348 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1404F73C4 (PopFxCompleteDirectedPowerTransition.c)
 *     PoFxAddComponentRelation @ 0x1405CB690 (PoFxAddComponentRelation.c)
 *     PoFxAddDeviceRelation @ 0x1405CB900 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveComponentRelation @ 0x1405CBD40 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x1405CBFA0 (PoFxRemoveDeviceRelation.c)
 *     PopFxComponentPerfWork @ 0x1405CC250 (PopFxComponentPerfWork.c)
 *     PopFxDeviceWork @ 0x1405CC860 (PopFxDeviceWork.c)
 *     PopFxProcessorIdleVeto @ 0x1405CD020 (PopFxProcessorIdleVeto.c)
 *     PopFxUpdatePlatformIdleState @ 0x1405CD8B0 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x1405CD990 (PopFxUpdateProcessorIdleState.c)
 *     PopPepPlatformStateRegistered @ 0x1405D6B38 (PopPepPlatformStateRegistered.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x140741AEC (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopFxRegisterDevice @ 0x140742880 (PopFxRegisterDevice.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x140A6F990 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopFxUpdateVetoMaskWork @ 0x140A966B0 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
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
