/*
 * XREFs of HalpInterruptGsiToLine @ 0x140445508
 * Callers:
 *     HalpInterruptEnableNmi @ 0x140443DC4 (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x140444F88 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpTimerEnableHypervisorTimer @ 0x1404CD4C8 (HalpTimerEnableHypervisorTimer.c)
 *     HalpInterruptConnect @ 0x14053E2A8 (HalpInterruptConnect.c)
 *     HalpInterruptRemap @ 0x14053E694 (HalpInterruptRemap.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x14054019C (HalpInterruptSetLineSpecificOverride.c)
 *     HalpTimerConfigureInterrupt @ 0x140544A90 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerUnmapInterrupt @ 0x140546120 (HalpTimerUnmapInterrupt.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1405478D4 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptParseMadt @ 0x140554134 (HalpInterruptParseMadt.c)
 *     HalpInterruptIsGsiValid @ 0x1406F1B20 (HalpInterruptIsGsiValid.c)
 *     HalpInterruptUnmap @ 0x1406F1C38 (HalpInterruptUnmap.c)
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x140445AEC (HalpInterruptFindLinesForGsiRange.c)
 */

__int64 __fastcall HalpInterruptGsiToLine(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  _DWORD *LinesForGsiRange; // rax

  v3 = a1;
  LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(a1, (unsigned int)(a1 + 1));
  if ( !LinesForGsiRange )
    return 3221226021LL;
  *a2 = LinesForGsiRange[4];
  a2[1] = v3 + LinesForGsiRange[5] - LinesForGsiRange[7];
  return 0LL;
}
