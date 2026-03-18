/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x140352BB0
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x140206A10 (KeQueryLogicalProcessorRelationship.c)
 *     PoGetIdleTimes @ 0x140351EF0 (PoGetIdleTimes.c)
 *     KeSetTargetProcessorDpcEx @ 0x140352B60 (KeSetTargetProcessorDpcEx.c)
 *     KeSetIdealProcessorThread @ 0x1403B40B0 (KeSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403B4160 (KeSetIdealProcessorThreadByNumber.c)
 *     HalpInterruptDestinationToTarget @ 0x1403BAD88 (HalpInterruptDestinationToTarget.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140434F50 (PoGetPerfStateAndParkingInfo.c)
 *     KeSetTargetProcessorDpc @ 0x140480740 (KeSetTargetProcessorDpc.c)
 *     PpmSetSimulatedIdle @ 0x1404CD620 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedIdle @ 0x1404CF11C (PpmClearSimulatedIdle.c)
 *     HalSendNMI @ 0x1405441C0 (HalSendNMI.c)
 *     HalpInterruptDpReplaceBegin @ 0x140561B9C (HalpInterruptDpReplaceBegin.c)
 *     IntPartGetProcessorEfficiencyClass @ 0x1405BF380 (IntPartGetProcessorEfficiencyClass.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405CF5D0 (PpmUpdateProcessorIdleVeto.c)
 *     PspBuildCreateProcessContext @ 0x1408A2E70 (PspBuildCreateProcessContext.c)
 *     IopConnectInterrupt @ 0x140A12470 (IopConnectInterrupt.c)
 *     PpmInstallPlatformIdleStates @ 0x140A39740 (PpmInstallPlatformIdleStates.c)
 *     PpmUpdateIdleStates @ 0x140A66D50 (PpmUpdateIdleStates.c)
 *     PpmSetSimulatedLoad @ 0x140AB5610 (PpmSetSimulatedLoad.c)
 *     PpmClearSimulatedLoad @ 0x140AB6854 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x140ABBC18 (PpmPerfGetBrandedFrequency.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x140B5038C (HalpInterruptUpdateLocalUnitIdentifier.c)
 *     HalpInterruptReinitialize @ 0x140B6A818 (HalpInterruptReinitialize.c)
 *     PopReadSimulatedProcessorClass @ 0x140C31558 (PopReadSimulatedProcessorClass.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeGetProcessorIndexFromNumber(PPROCESSOR_NUMBER ProcNumber)
{
  __int64 Group; // rax
  __int64 Number; // rdx
  ULONG result; // eax

  if ( ProcNumber->Reserved )
    return -1;
  Group = ProcNumber->Group;
  if ( !(_WORD)Group && !ProcNumber->Number )
    return 0;
  if ( (unsigned __int16)Group >= (unsigned __int16)KiActiveGroups )
    return -1;
  Number = ProcNumber->Number;
  if ( (unsigned __int8)Number >= 0x40u )
    return -1;
  result = *((_DWORD *)qword_140F21E78 + 64 * Group + Number);
  if ( !result )
    return -1;
  return result;
}
