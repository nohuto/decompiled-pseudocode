/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x1403B30F0
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x140266270 (KeQueryLogicalProcessorRelationship.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1403B20E4 (PoGetPerfStateAndParkingInfo.c)
 *     KeSetIdealProcessorThread @ 0x1403B2460 (KeSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403B2510 (KeSetIdealProcessorThreadByNumber.c)
 *     PoGetIdleTimes @ 0x1403B2600 (PoGetIdleTimes.c)
 *     KeSetTargetProcessorDpcEx @ 0x1403B30A0 (KeSetTargetProcessorDpcEx.c)
 *     HalpInterruptDestinationToTarget @ 0x140446BF8 (HalpInterruptDestinationToTarget.c)
 *     KeSetTargetProcessorDpc @ 0x14047F9F0 (KeSetTargetProcessorDpc.c)
 *     PpmSetSimulatedIdle @ 0x1404CDA0C (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedIdle @ 0x1404CF2B8 (PpmClearSimulatedIdle.c)
 *     HalSendNMI @ 0x140541990 (HalSendNMI.c)
 *     HalpInterruptDpReplaceBegin @ 0x14055F29C (HalpInterruptDpReplaceBegin.c)
 *     IntPartGetProcessorEfficiencyClass @ 0x1405BB540 (IntPartGetProcessorEfficiencyClass.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405CAF20 (PpmUpdateProcessorIdleVeto.c)
 *     PspBuildCreateProcessContext @ 0x1408F0220 (PspBuildCreateProcessContext.c)
 *     IopConnectInterrupt @ 0x1409A29B0 (IopConnectInterrupt.c)
 *     PpmInstallPlatformIdleStates @ 0x140A34590 (PpmInstallPlatformIdleStates.c)
 *     PpmUpdateIdleStates @ 0x140A640E0 (PpmUpdateIdleStates.c)
 *     PpmSetSimulatedLoad @ 0x140AB0620 (PpmSetSimulatedLoad.c)
 *     PpmClearSimulatedLoad @ 0x140AB1848 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x140AB78D8 (PpmPerfGetBrandedFrequency.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x140B4038C (HalpInterruptUpdateLocalUnitIdentifier.c)
 *     HalpInterruptReinitialize @ 0x140B5AD18 (HalpInterruptReinitialize.c)
 *     PopReadSimulatedProcessorClass @ 0x140C20458 (PopReadSimulatedProcessorClass.c)
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
  result = *((_DWORD *)qword_140F216A8 + 64 * Group + Number);
  if ( !result )
    return -1;
  return result;
}
