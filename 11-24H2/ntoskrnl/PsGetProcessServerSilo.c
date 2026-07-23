/*
 * XREFs of PsGetProcessServerSilo @ 0x14043D810
 * Callers:
 *     ObSetProcessDeviceMap @ 0x1407428F0 (ObSetProcessDeviceMap.c)
 *     EtwpLogProcessPerfCtrs @ 0x1407A9EE8 (EtwpLogProcessPerfCtrs.c)
 *     ObpDecrementHandleCount @ 0x14083D360 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x140848260 (ObCloseHandleTableEntry.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     ObpIncrementHandleCountEx @ 0x14084BE20 (ObpIncrementHandleCountEx.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14084E400 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     PerfInfoLogVirtualFree @ 0x1408DA818 (PerfInfoLogVirtualFree.c)
 *     PspMapSiloSharedDataView @ 0x1408DD840 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1408DDA88 (MmMapApiSetView.c)
 *     PspSetupUserProcessAddressSpace @ 0x1408DF5FC (PspSetupUserProcessAddressSpace.c)
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 *     PspTerminateAllThreads @ 0x1408EEED4 (PspTerminateAllThreads.c)
 *     EtwpProcessEnumCallback @ 0x1408EF230 (EtwpProcessEnumCallback.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1408F09E0 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteProcessEvent @ 0x1408F13BC (EtwpWriteProcessEvent.c)
 *     PspExitLastThread @ 0x1408F27B8 (PspExitLastThread.c)
 *     EtwTraceThread @ 0x1408FCF28 (EtwTraceThread.c)
 *     PspTerminateThreadByPointer @ 0x1408FDF10 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 *     ObClearProcessDeviceMap @ 0x1408FF75C (ObClearProcessDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x14096D0C0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x14096D6B0 (ObpReferenceCurrentDeviceMap.c)
 *     DbgkpSendErrorMessage @ 0x1409E93F0 (DbgkpSendErrorMessage.c)
 *     PerfInfoLogVirtualAlloc @ 0x140A2C1A8 (PerfInfoLogVirtualAlloc.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x140A3B628 (EtwpTrackGuidEntryRegistrations.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 *     PspEstimateNewProcessServerSilo @ 0x140A41590 (PspEstimateNewProcessServerSilo.c)
 *     SepRmLsaConnectRequest @ 0x140A4AAF4 (SepRmLsaConnectRequest.c)
 *     DbgkFlushErrorPort @ 0x140A527EC (DbgkFlushErrorPort.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140A52C64 (PspValidateJobAssignmentSiloPolicy.c)
 *     DbgkRegisterErrorPort @ 0x140A7FE04 (DbgkRegisterErrorPort.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 1520);
}
