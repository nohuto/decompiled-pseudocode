/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x140370440
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x14032DFF0 (KeQueryLogicalProcessorRelationship.c)
 *     PoGetIdleTimes @ 0x14036F560 (PoGetIdleTimes.c)
 *     KeSetTargetProcessorDpcEx @ 0x1403703F0 (KeSetTargetProcessorDpcEx.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140370500 (PoGetPerfStateAndParkingInfo.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140370880 (KeSetIdealProcessorThreadByNumber.c)
 *     KeSetIdealProcessorThread @ 0x140370950 (KeSetIdealProcessorThread.c)
 *     KeSetTargetProcessorDpc @ 0x140370CF0 (KeSetTargetProcessorDpc.c)
 *     HalpInterruptDestinationToTarget @ 0x140370DAC (HalpInterruptDestinationToTarget.c)
 *     PpmSetSimulatedIdle @ 0x1404C69F0 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedIdle @ 0x1404C82E8 (PpmClearSimulatedIdle.c)
 *     HalSendNMI @ 0x140541B10 (HalSendNMI.c)
 *     HalpInterruptDpReplaceBegin @ 0x14055F7CC (HalpInterruptDpReplaceBegin.c)
 *     IntPartGetProcessorEfficiencyClass @ 0x1405BC9B0 (IntPartGetProcessorEfficiencyClass.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405CCCF0 (PpmUpdateProcessorIdleVeto.c)
 *     PspBuildCreateProcessContext @ 0x1408F9210 (PspBuildCreateProcessContext.c)
 *     IopConnectInterrupt @ 0x1409C0880 (IopConnectInterrupt.c)
 *     PpmInstallPlatformIdleStates @ 0x140A2E800 (PpmInstallPlatformIdleStates.c)
 *     PpmUpdateIdleStates @ 0x140A5FB30 (PpmUpdateIdleStates.c)
 *     PpmSetSimulatedLoad @ 0x140AAFAA0 (PpmSetSimulatedLoad.c)
 *     PpmClearSimulatedLoad @ 0x140AB0B2C (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x140AB6C38 (PpmPerfGetBrandedFrequency.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x140B523DC (HalpInterruptUpdateLocalUnitIdentifier.c)
 *     HalpInterruptReinitialize @ 0x140B6C0DC (HalpInterruptReinitialize.c)
 *     PopReadSimulatedProcessorClass @ 0x140C33678 (PopReadSimulatedProcessorClass.c)
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
  result = *((_DWORD *)qword_140F22998 + 64 * Group + Number);
  if ( !result )
    return -1;
  return result;
}
