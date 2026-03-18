/*
 * XREFs of AMLIDebugger @ 0x1400564EC
 * Callers:
 *     ParseScope @ 0x14000D030 (ParseScope.c)
 *     ParseTerm @ 0x14000D430 (ParseTerm.c)
 *     ParseOpcode @ 0x14000E5F0 (ParseOpcode.c)
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x140010F68 (ACPIIoctlEvalPreProcessingV1.c)
 *     InsertReadyQueue @ 0x140013A60 (InsertReadyQueue.c)
 *     AMLIEvalNameSpaceObject @ 0x140014164 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     ACPIInterruptDispatchEventDpc @ 0x140019BA0 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x14001B450 (ACPIIoctlEvalPreProcessingV2.c)
 *     AMLIGetNameSpaceObject @ 0x140028510 (AMLIGetNameSpaceObject.c)
 *     AMLIEvalPkgDataElement @ 0x14002CC08 (AMLIEvalPkgDataElement.c)
 *     AMLIEvalPackageElement @ 0x14006AB98 (AMLIEvalPackageElement.c)
 *     CatError @ 0x14006DA70 (CatError.c)
 *     BreakPoint @ 0x14006F300 (BreakPoint.c)
 *     Load @ 0x14006F3B0 (Load.c)
 *     ProcessLoadTable @ 0x14006FA50 (ProcessLoadTable.c)
 *     AMLIInitialize @ 0x1400C4F80 (AMLIInitialize.c)
 *     AMLILoadDDB @ 0x1400C8044 (AMLILoadDDB.c)
 * Callees:
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     Debugger @ 0x14006E888 (Debugger.c)
 */

ULONG AMLIDebugger()
{
  ULONG result; // eax

  result = gdwfAMLIInit;
  if ( (gdwfAMLIInit & 0x40) != 0 )
  {
    if ( (gDebugger & 4) != 0 )
    {
      return ConPrintf("\nRe-entering AML debugger is not allowed.\nType 'g' to go back to the AML debugger.\n");
    }
    else
    {
      _InterlockedAnd(&gDebugger, 0xFFFFFFFD);
      _InterlockedOr(&gDebugger, 1u);
      result = Debugger();
      _InterlockedAnd(&gDebugger, 0xFFFFFFFC);
    }
  }
  return result;
}
