/*
 * XREFs of PsGetProcessServerSilo @ 0x140447CD0
 * Callers:
 *     ObSetProcessDeviceMap @ 0x1407385E0 (ObSetProcessDeviceMap.c)
 *     EtwpLogProcessPerfCtrs @ 0x14079A9D8 (EtwpLogProcessPerfCtrs.c)
 *     MiHotPatchAllProcesses @ 0x1407E2DB4 (MiHotPatchAllProcesses.c)
 *     PspMapSiloSharedDataView @ 0x14083B6C0 (PspMapSiloSharedDataView.c)
 *     PspSetupUserProcessAddressSpace @ 0x14083C23C (PspSetupUserProcessAddressSpace.c)
 *     ObpDecrementHandleCount @ 0x140844E00 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x1408501F0 (ObCloseHandleTableEntry.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ObpIncrementHandleCountEx @ 0x1408539A0 (ObpIncrementHandleCountEx.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140855F70 (CmpCheckOpenAccessOnKeyBody.c)
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 *     DbgkpSendErrorMessage @ 0x1408B6DA4 (DbgkpSendErrorMessage.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     PspTerminateAllThreads @ 0x1408BDBA4 (PspTerminateAllThreads.c)
 *     EtwpProcessEnumCallback @ 0x1408BEE80 (EtwpProcessEnumCallback.c)
 *     ObClearProcessDeviceMap @ 0x1408E0E18 (ObClearProcessDeviceMap.c)
 *     PspTerminateThreadByPointer @ 0x1408F48F0 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 *     EtwTraceThread @ 0x1408F592C (EtwTraceThread.c)
 *     PerfInfoLogVirtualFree @ 0x1408F7478 (PerfInfoLogVirtualFree.c)
 *     MmMapApiSetView @ 0x1408FA238 (MmMapApiSetView.c)
 *     DbgkFlushErrorPort @ 0x14091D610 (DbgkFlushErrorPort.c)
 *     PspExitLastThread @ 0x14091ECC8 (PspExitLastThread.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140920364 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteProcessEvent @ 0x1409211D4 (EtwpWriteProcessEvent.c)
 *     ObQueryDeviceMapInformation @ 0x14097E7F0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x14097EE00 (ObpReferenceCurrentDeviceMap.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x1409BD31C (PspEstimateNewProcessServerSilo.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409FED50 (EtwpTrackGuidEntryRegistrations.c)
 *     PerfInfoLogVirtualAlloc @ 0x140A31480 (PerfInfoLogVirtualAlloc.c)
 *     SepRmLsaConnectRequest @ 0x140A4F304 (SepRmLsaConnectRequest.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140A58CFC (PspValidateJobAssignmentSiloPolicy.c)
 *     DbgkRegisterErrorPort @ 0x140A80BEC (DbgkRegisterErrorPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 1520);
}
