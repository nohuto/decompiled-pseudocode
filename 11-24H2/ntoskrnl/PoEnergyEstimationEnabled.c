/*
 * XREFs of PoEnergyEstimationEnabled @ 0x140440E80
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14073F800 (NtAlpcImpersonateClientContainerOfPort.c)
 *     NtCreateJobObject @ 0x14085C390 (NtCreateJobObject.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x14085EBE0 (PspQueryProcessAccountingInformationCallback.c)
 *     PsQueryProcessEnergyValues @ 0x14085EE30 (PsQueryProcessEnergyValues.c)
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1409C1630 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1409E5458 (PspFoldProcessAccountingIntoJob.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     PpmCheckReInit @ 0x140A6B620 (PpmCheckReInit.c)
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

char PoEnergyEstimationEnabled()
{
  return PopEnergyEstimationEnabled;
}
