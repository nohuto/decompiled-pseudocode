/*
 * XREFs of PopFxDereferenceDevice @ 0x140376880
 * Callers:
 *     PoFxNotifySurprisePowerOn @ 0x1403111B0 (PoFxNotifySurprisePowerOn.c)
 *     PopFxCompleteComponentActivation @ 0x140317240 (PopFxCompleteComponentActivation.c)
 *     PopFxProcessWork @ 0x1403172E0 (PopFxProcessWork.c)
 *     PopRequestCompletion @ 0x140376130 (PopRequestCompletion.c)
 *     PopFxReleasePowerIrp @ 0x140376768 (PopFxReleasePowerIrp.c)
 *     PopRequestPowerIrp @ 0x140377360 (PopRequestPowerIrp.c)
 *     PopAllocateIrp @ 0x1403775F8 (PopAllocateIrp.c)
 *     PopFxAllocatePowerIrp @ 0x140378380 (PopFxAllocatePowerIrp.c)
 *     PopFxDirectedPowerTransitionWorker @ 0x140451590 (PopFxDirectedPowerTransitionWorker.c)
 *     PopFxActivateDevice @ 0x140496080 (PopFxActivateDevice.c)
 *     PopFxPlatformIdleVeto @ 0x1404A1080 (PopFxPlatformIdleVeto.c)
 *     PopFxClearDeviceConstraints @ 0x1404A6344 (PopFxClearDeviceConstraints.c)
 *     PoFxPowerControl @ 0x1404A9650 (PoFxPowerControl.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1404C8FC8 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1404F9C8C (PopFxCompleteDirectedPowerTransition.c)
 *     PoFxAddComponentRelation @ 0x1405CFDE0 (PoFxAddComponentRelation.c)
 *     PoFxAddDeviceRelation @ 0x1405D0050 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveComponentRelation @ 0x1405D0490 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x1405D06F0 (PoFxRemoveDeviceRelation.c)
 *     PopFxComponentPerfWork @ 0x1405D09A0 (PopFxComponentPerfWork.c)
 *     PopFxDeviceWork @ 0x1405D1010 (PopFxDeviceWork.c)
 *     PopFxProcessorIdleVeto @ 0x1405D18A0 (PopFxProcessorIdleVeto.c)
 *     PopFxUpdatePlatformIdleState @ 0x1405D2130 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x1405D2210 (PopFxUpdateProcessorIdleState.c)
 *     PopPepPlatformStateRegistered @ 0x1405DBD18 (PopPepPlatformStateRegistered.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14074DBBC (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopFxRegisterDevice @ 0x14074E950 (PopFxRegisterDevice.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x140A71950 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopFxUpdateVetoMaskWork @ 0x140A9C5C0 (PopFxUpdateVetoMaskWork.c)
 *     PopSystemIrpCompletion @ 0x140B6F8E0 (PopSystemIrpCompletion.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
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
