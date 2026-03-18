/*
 * XREFs of PoEnergyEstimationEnabled @ 0x140448760
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407418D0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     PspAllocateThread @ 0x1408A49BC (PspAllocateThread.c)
 *     NtCreateJobObject @ 0x1408EAB60 (NtCreateJobObject.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x1408ED3B0 (PspQueryProcessAccountingInformationCallback.c)
 *     PsQueryProcessEnergyValues @ 0x1408ED600 (PsQueryProcessEnergyValues.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1409C4310 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1409EAB68 (PspFoldProcessAccountingIntoJob.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 *     PpmCheckReInit @ 0x140A72240 (PpmCheckReInit.c)
 *     PpmEventTraceControlCallback @ 0x140ACA960 (PpmEventTraceControlCallback.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

char PoEnergyEstimationEnabled()
{
  return PopEnergyEstimationEnabled;
}
