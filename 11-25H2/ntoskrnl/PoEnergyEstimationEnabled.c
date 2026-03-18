/*
 * XREFs of PoEnergyEstimationEnabled @ 0x14044A480
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407358B0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     NtCreateJobObject @ 0x1408DB4B0 (NtCreateJobObject.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x1408DE040 (PspQueryProcessAccountingInformationCallback.c)
 *     PsQueryProcessEnergyValues @ 0x1408DE290 (PsQueryProcessEnergyValues.c)
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1409CE840 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1409F043C (PspFoldProcessAccountingIntoJob.c)
 *     PpmCheckReInit @ 0x140A4D648 (PpmCheckReInit.c)
 *     PpmEventTraceControlCallback @ 0x140AC4110 (PpmEventTraceControlCallback.c)
 * Callees:
 *     <none>
 */

char PoEnergyEstimationEnabled()
{
  return PopEnergyEstimationEnabled;
}
