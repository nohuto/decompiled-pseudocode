/*
 * XREFs of HalpInterruptSetProblemEx @ 0x14037537C
 * Callers:
 *     HalEnableInterrupt @ 0x1402B3DD0 (HalEnableInterrupt.c)
 *     HalGetMessageRoutingInfo @ 0x1402B4240 (HalGetMessageRoutingInfo.c)
 *     HalpInterruptSetLineState @ 0x1402B4E20 (HalpInterruptSetLineState.c)
 *     HalpMaskInterrupt @ 0x1403723C0 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x1403724F0 (HalpUnmaskInterrupt.c)
 *     HalpInterruptSetLineStateInternal @ 0x140372714 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1403735D0 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptSetDestination @ 0x140373710 (HalpInterruptSetDestination.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x140373848 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalDisableInterrupt @ 0x140373FF0 (HalDisableInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x1403747D8 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptFindBestRouting @ 0x1403752D0 (HalpInterruptFindBestRouting.c)
 *     HalQueryMaximumProcessorCount @ 0x140375540 (HalQueryMaximumProcessorCount.c)
 *     HalpInterruptEnableNmi @ 0x14049E4CC (HalpInterruptEnableNmi.c)
 *     HalGetInterruptTargetInformation @ 0x1404B1E00 (HalGetInterruptTargetInformation.c)
 *     HalpInterruptGenerateMessage @ 0x14053E5D0 (HalpInterruptGenerateMessage.c)
 *     HalpInterruptRemap @ 0x14053E7C4 (HalpInterruptRemap.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14053EC28 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptResetThisProcessor @ 0x14053F610 (HalpInterruptResetThisProcessor.c)
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x14053FC20 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptRemapFixedLines @ 0x14053FEA0 (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptRequestInterrupt @ 0x1405400F0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptRestoreClock @ 0x140540210 (HalpInterruptRestoreClock.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x140547A84 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpConnectThermalInterrupt @ 0x140553810 (HalpConnectThermalInterrupt.c)
 *     HalpInterruptInitializeController @ 0x140553E14 (HalpInterruptInitializeController.c)
 *     HalpInterruptInitializeLocalUnit @ 0x140553F2C (HalpInterruptInitializeLocalUnit.c)
 *     HalpInterruptParseAcpiTables @ 0x1405542D4 (HalpInterruptParseAcpiTables.c)
 *     HalpInterruptParseMadt @ 0x140554374 (HalpInterruptParseMadt.c)
 *     HalpInterruptSelectController @ 0x140554CA8 (HalpInterruptSelectController.c)
 *     HalpAllocateKInterrupt @ 0x140557EA4 (HalpAllocateKInterrupt.c)
 *     HalpInterruptDpReplaceBegin @ 0x14055F7CC (HalpInterruptDpReplaceBegin.c)
 *     HalpInterruptUnmap @ 0x1406FB668 (HalpInterruptUnmap.c)
 *     HalpInterruptStartProcessor @ 0x140B4DF10 (HalpInterruptStartProcessor.c)
 *     HalpDpGetInterruptReplayState @ 0x140B51770 (HalpDpGetInterruptReplayState.c)
 *     HalpDpReplayInterrupts @ 0x140B51F20 (HalpDpReplayInterrupts.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x140B523DC (HalpInterruptUpdateLocalUnitIdentifier.c)
 *     HalpInterruptMaskAcpi @ 0x140B6DFB8 (HalpInterruptMaskAcpi.c)
 *     HalpInitializeInterrupts @ 0x140C0FE18 (HalpInitializeInterrupts.c)
 *     HalpPreAllocateKInterrupts @ 0x140C150AC (HalpPreAllocateKInterrupts.c)
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
