/*
 * XREFs of HalpInterruptGsiToLine @ 0x1403733E0
 * Callers:
 *     HalpInterruptEnablePerformanceEvents @ 0x140373A20 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptEnableNmi @ 0x14049E4CC (HalpInterruptEnableNmi.c)
 *     HalpTimerEnableHypervisorTimer @ 0x1404C6408 (HalpTimerEnableHypervisorTimer.c)
 *     HalpInterruptConnect @ 0x14053E3D8 (HalpInterruptConnect.c)
 *     HalpInterruptRemap @ 0x14053E7C4 (HalpInterruptRemap.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x14054031C (HalpInterruptSetLineSpecificOverride.c)
 *     HalpTimerConfigureInterrupt @ 0x140544C40 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerUnmapInterrupt @ 0x1405462D0 (HalpTimerUnmapInterrupt.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x140547A84 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptParseMadt @ 0x140554374 (HalpInterruptParseMadt.c)
 *     HalpInterruptIsGsiValid @ 0x1406FB550 (HalpInterruptIsGsiValid.c)
 *     HalpInterruptUnmap @ 0x1406FB668 (HalpInterruptUnmap.c)
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x14037265C (HalpInterruptFindLinesForGsiRange.c)
 */

__int64 __fastcall HalpInterruptGsiToLine(unsigned int a1, _DWORD *a2)
{
  _DWORD *LinesForGsiRange; // rax

  LinesForGsiRange = HalpInterruptFindLinesForGsiRange(a1, a1 + 1);
  if ( !LinesForGsiRange )
    return 3221226021LL;
  *a2 = LinesForGsiRange[4];
  a2[1] = a1 + LinesForGsiRange[5] - LinesForGsiRange[7];
  return 0LL;
}
