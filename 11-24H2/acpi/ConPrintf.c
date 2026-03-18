/*
 * XREFs of ConPrintf @ 0x1400067DC
 * Callers:
 *     ParsePackage @ 0x140001230 (ParsePackage.c)
 *     ParseString @ 0x1400014BC (ParseString.c)
 *     ReadObject @ 0x1400026A0 (ReadObject.c)
 *     ProcessEvalObj @ 0x140002AF0 (ProcessEvalObj.c)
 *     AccFieldUnit @ 0x140003430 (AccFieldUnit.c)
 *     ParseCall @ 0x140004010 (ParseCall.c)
 *     RunContext @ 0x140005EA0 (RunContext.c)
 *     ParseIntObj @ 0x140006630 (ParseIntObj.c)
 *     ParseScope @ 0x14000D030 (ParseScope.c)
 *     ParseTerm @ 0x14000D430 (ParseTerm.c)
 *     ParseArg @ 0x14000DB50 (ParseArg.c)
 *     ParseName @ 0x14000E040 (ParseName.c)
 *     ParseOpcode @ 0x14000E5F0 (ParseOpcode.c)
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x140010F68 (ACPIIoctlEvalPreProcessingV1.c)
 *     AsyncEvalObject @ 0x1400120D0 (AsyncEvalObject.c)
 *     InsertReadyQueue @ 0x140013A60 (InsertReadyQueue.c)
 *     AMLIEvalNameSpaceObject @ 0x140014164 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     ACPIInterruptDispatchEventDpc @ 0x140019BA0 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x14001B450 (ACPIIoctlEvalPreProcessingV2.c)
 *     ParseSuperName @ 0x140024820 (ParseSuperName.c)
 *     AMLIGetNameSpaceObject @ 0x140028510 (AMLIGetNameSpaceObject.c)
 *     AMLIEvalPkgDataElement @ 0x14002CC08 (AMLIEvalPkgDataElement.c)
 *     ToDecStr @ 0x14002DC70 (ToDecStr.c)
 *     ToHexStr @ 0x14002EEC0 (ToHexStr.c)
 *     ParseFieldList @ 0x1400358A8 (ParseFieldList.c)
 *     ParseField @ 0x140035A2C (ParseField.c)
 *     ParseInteger @ 0x14003E5E0 (ParseInteger.c)
 *     PrintObject @ 0x140055B98 (PrintObject.c)
 *     PrintIndent @ 0x140056344 (PrintIndent.c)
 *     AMLIDebugger @ 0x1400564EC (AMLIDebugger.c)
 *     AMLIEvalPackageElement @ 0x14006AB98 (AMLIEvalPackageElement.c)
 *     DumpObject @ 0x14006BA88 (DumpObject.c)
 *     NestAsyncEvalObject @ 0x14006D32C (NestAsyncEvalObject.c)
 *     CatError @ 0x14006DA70 (CatError.c)
 *     DebugInPort @ 0x14006DD70 (DebugInPort.c)
 *     DebugNotify @ 0x14006DE70 (DebugNotify.c)
 *     DebugQuit @ 0x14006E100 (DebugQuit.c)
 *     DebugRunMethod @ 0x14006E170 (DebugRunMethod.c)
 *     PrintBuffData @ 0x14006E578 (PrintBuffData.c)
 *     RunMethodCallBack @ 0x14006E600 (RunMethodCallBack.c)
 *     BreakPoint @ 0x14006F300 (BreakPoint.c)
 *     DbgParseOneArg @ 0x14006FFCC (DbgParseOneArg.c)
 *     AMLILoadDDB @ 0x1400C8044 (AMLILoadDDB.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

ULONG ConPrintf(char *Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  if ( (unsigned int)_vsnprintf(gPrintBuff, 0x3FFuLL, Format, va) > 0x3FE )
    byte_14008970F = 0;
  if ( qword_140089098 )
    return qword_140089098(gPrintBuff, qword_1400890A0);
  else
    return DbgPrintEx(0x19u, 3u, gPrintBuff);
}
