/*
 * XREFs of HalpInterruptSetProblemEx @ 0x1404443B8
 * Callers:
 *     HalGetMessageRoutingInfo @ 0x140200F50 (HalGetMessageRoutingInfo.c)
 *     HalEnableInterrupt @ 0x140201940 (HalEnableInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x140443DC4 (HalpInterruptEnableNmi.c)
 *     HalpInterruptSetLineState @ 0x140443F50 (HalpInterruptSetLineState.c)
 *     HalpInterruptFindBestRouting @ 0x14044478C (HalpInterruptFindBestRouting.c)
 *     HalDisableInterrupt @ 0x140444D30 (HalDisableInterrupt.c)
 *     HalpInterruptSetDestination @ 0x1404450C0 (HalpInterruptSetDestination.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1404451F8 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1404453D0 (HalpInterruptFindControllerAndLineState.c)
 *     HalpMaskInterrupt @ 0x140445850 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x140445980 (HalpUnmaskInterrupt.c)
 *     HalpInterruptSetLineStateInternal @ 0x140445BA4 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptSetDestinationInternal @ 0x140446EB8 (HalpInterruptSetDestinationInternal.c)
 *     HalQueryMaximumProcessorCount @ 0x1404477E0 (HalQueryMaximumProcessorCount.c)
 *     HalGetInterruptTargetInformation @ 0x1404B7D60 (HalGetInterruptTargetInformation.c)
 *     HalpInterruptGenerateMessage @ 0x14053E4A0 (HalpInterruptGenerateMessage.c)
 *     HalpInterruptRemap @ 0x14053E694 (HalpInterruptRemap.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14053EAF8 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptResetThisProcessor @ 0x14053F4E0 (HalpInterruptResetThisProcessor.c)
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x14053FAA0 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptRemapFixedLines @ 0x14053FD20 (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptRequestInterrupt @ 0x14053FF70 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptRestoreClock @ 0x140540090 (HalpInterruptRestoreClock.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1405478D4 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpConnectThermalInterrupt @ 0x1405535D0 (HalpConnectThermalInterrupt.c)
 *     HalpInterruptInitializeController @ 0x140553BD4 (HalpInterruptInitializeController.c)
 *     HalpInterruptInitializeLocalUnit @ 0x140553CEC (HalpInterruptInitializeLocalUnit.c)
 *     HalpInterruptParseAcpiTables @ 0x140554094 (HalpInterruptParseAcpiTables.c)
 *     HalpInterruptParseMadt @ 0x140554134 (HalpInterruptParseMadt.c)
 *     HalpInterruptSelectController @ 0x140554A68 (HalpInterruptSelectController.c)
 *     HalpAllocateKInterrupt @ 0x140557974 (HalpAllocateKInterrupt.c)
 *     HalpInterruptDpReplaceBegin @ 0x14055F29C (HalpInterruptDpReplaceBegin.c)
 *     HalpInterruptUnmap @ 0x1406F1C38 (HalpInterruptUnmap.c)
 *     HalpInterruptStartProcessor @ 0x140B3BED0 (HalpInterruptStartProcessor.c)
 *     HalpDpGetInterruptReplayState @ 0x140B3F720 (HalpDpGetInterruptReplayState.c)
 *     HalpDpReplayInterrupts @ 0x140B3FED0 (HalpDpReplayInterrupts.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x140B4038C (HalpInterruptUpdateLocalUnitIdentifier.c)
 *     HalpInterruptMaskAcpi @ 0x140B5D638 (HalpInterruptMaskAcpi.c)
 *     HalpInitializeInterrupts @ 0x140BFCE18 (HalpInitializeInterrupts.c)
 *     HalpPreAllocateKInterrupts @ 0x140C0201C (HalpPreAllocateKInterrupts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInterruptSetProblemEx(__int64 a1, int a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  result = a5;
  HalpInterruptLastProblemLine = a5;
  HalpInterruptLastProblemController = a1;
  HalpInterruptLastProblem = a2;
  HalpInterruptLastProblemStatus = a3;
  HalpInterruptLastProblemFile = a4;
  if ( a1 )
  {
    *(_DWORD *)(a1 + 316) = a2;
    *(_DWORD *)(a1 + 320) = a3;
    *(_QWORD *)(a1 + 328) = a4;
    *(_DWORD *)(a1 + 336) = a5;
  }
  return result;
}
