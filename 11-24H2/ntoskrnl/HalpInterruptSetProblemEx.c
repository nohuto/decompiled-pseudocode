/*
 * XREFs of HalpInterruptSetProblemEx @ 0x1403BC82C
 * Callers:
 *     HalEnableInterrupt @ 0x1403B7D10 (HalEnableInterrupt.c)
 *     HalGetMessageRoutingInfo @ 0x1403B81B0 (HalGetMessageRoutingInfo.c)
 *     HalDisableInterrupt @ 0x1403B8EA0 (HalDisableInterrupt.c)
 *     HalpInterruptSetDestination @ 0x1403B9230 (HalpInterruptSetDestination.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1403B9368 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1403B9540 (HalpInterruptFindControllerAndLineState.c)
 *     HalpMaskInterrupt @ 0x1403B99F0 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x1403B9B20 (HalpUnmaskInterrupt.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403B9D44 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptSetDestinationInternal @ 0x1403BB048 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptFindBestRouting @ 0x1403BB29C (HalpInterruptFindBestRouting.c)
 *     HalpInterruptSetLineState @ 0x1403BBB90 (HalpInterruptSetLineState.c)
 *     HalQueryMaximumProcessorCount @ 0x1403BC0C0 (HalQueryMaximumProcessorCount.c)
 *     HalpInterruptEnableNmi @ 0x1404A356C (HalpInterruptEnableNmi.c)
 *     HalGetInterruptTargetInformation @ 0x1404B7620 (HalGetInterruptTargetInformation.c)
 *     HalpInterruptGenerateMessage @ 0x140540CD0 (HalpInterruptGenerateMessage.c)
 *     HalpInterruptRemap @ 0x140540EC4 (HalpInterruptRemap.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x140541328 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptResetThisProcessor @ 0x140541D10 (HalpInterruptResetThisProcessor.c)
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x1405422D0 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptRemapFixedLines @ 0x140542550 (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptRequestInterrupt @ 0x1405427A0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptRestoreClock @ 0x1405428C0 (HalpInterruptRestoreClock.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x14054A1C4 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpConnectThermalInterrupt @ 0x140555ED0 (HalpConnectThermalInterrupt.c)
 *     HalpInterruptInitializeController @ 0x1405564D4 (HalpInterruptInitializeController.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1405565EC (HalpInterruptInitializeLocalUnit.c)
 *     HalpInterruptParseAcpiTables @ 0x140556994 (HalpInterruptParseAcpiTables.c)
 *     HalpInterruptParseMadt @ 0x140556A34 (HalpInterruptParseMadt.c)
 *     HalpInterruptSelectController @ 0x140557368 (HalpInterruptSelectController.c)
 *     HalpAllocateKInterrupt @ 0x14055A274 (HalpAllocateKInterrupt.c)
 *     HalpInterruptDpReplaceBegin @ 0x140561B9C (HalpInterruptDpReplaceBegin.c)
 *     HalpInterruptUnmap @ 0x1406FDA28 (HalpInterruptUnmap.c)
 *     HalpInterruptStartProcessor @ 0x140B4BED0 (HalpInterruptStartProcessor.c)
 *     HalpDpGetInterruptReplayState @ 0x140B4F720 (HalpDpGetInterruptReplayState.c)
 *     HalpDpReplayInterrupts @ 0x140B4FED0 (HalpDpReplayInterrupts.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x140B5038C (HalpInterruptUpdateLocalUnitIdentifier.c)
 *     HalpInterruptMaskAcpi @ 0x140B6C718 (HalpInterruptMaskAcpi.c)
 *     HalpInitializeInterrupts @ 0x140C0DE18 (HalpInitializeInterrupts.c)
 *     HalpPreAllocateKInterrupts @ 0x140C130AC (HalpPreAllocateKInterrupts.c)
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
