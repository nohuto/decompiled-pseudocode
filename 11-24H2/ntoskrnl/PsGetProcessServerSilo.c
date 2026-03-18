/*
 * XREFs of PsGetProcessServerSilo @ 0x140445660
 * Callers:
 *     ObSetProcessDeviceMap @ 0x140744600 (ObSetProcessDeviceMap.c)
 *     EtwpLogProcessPerfCtrs @ 0x1407A9DA8 (EtwpLogProcessPerfCtrs.c)
 *     EtwpEnableGuid @ 0x14083B040 (EtwpEnableGuid.c)
 *     ObpDecrementHandleCount @ 0x1408410A0 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x14084BFA0 (ObCloseHandleTableEntry.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     ObpIncrementHandleCountEx @ 0x14084FB60 (ObpIncrementHandleCountEx.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140852140 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     EtwTraceThread @ 0x1408A6918 (EtwTraceThread.c)
 *     PspTerminateThreadByPointer @ 0x1408A7CB0 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 *     ObClearProcessDeviceMap @ 0x1408A94FC (ObClearProcessDeviceMap.c)
 *     PerfInfoLogVirtualFree @ 0x1408DC5E8 (PerfInfoLogVirtualFree.c)
 *     PspMapSiloSharedDataView @ 0x140906E34 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140907078 (MmMapApiSetView.c)
 *     PspSetupUserProcessAddressSpace @ 0x140907EE0 (PspSetupUserProcessAddressSpace.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     PspExitLastThread @ 0x1409374F0 (PspExitLastThread.c)
 *     DbgkFlushErrorPort @ 0x140939888 (DbgkFlushErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14093A900 (DbgkpSendErrorMessage.c)
 *     PspTerminateAllThreads @ 0x14094A964 (PspTerminateAllThreads.c)
 *     EtwpProcessEnumCallback @ 0x14094ACC0 (EtwpProcessEnumCallback.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14094C470 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteProcessEvent @ 0x14094CE4C (EtwpWriteProcessEvent.c)
 *     ObQueryDeviceMapInformation @ 0x1409848B0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140984EA0 (ObpReferenceCurrentDeviceMap.c)
 *     PerfInfoLogVirtualAlloc @ 0x140A37358 (PerfInfoLogVirtualAlloc.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x140A45B44 (EtwpTrackGuidEntryRegistrations.c)
 *     PspEstimateNewProcessServerSilo @ 0x140A4A930 (PspEstimateNewProcessServerSilo.c)
 *     SepRmLsaConnectRequest @ 0x140A52AA4 (SepRmLsaConnectRequest.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140A5B354 (PspValidateJobAssignmentSiloPolicy.c)
 *     DbgkRegisterErrorPort @ 0x140A852C4 (DbgkRegisterErrorPort.c)
 *     NtCreateUserProcess @ 0x140ACBA80 (NtCreateUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 1520);
}
