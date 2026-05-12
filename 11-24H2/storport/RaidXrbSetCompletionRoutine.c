/*
 * XREFs of RaidXrbSetCompletionRoutine @ 0x14003D864
 * Callers:
 *     RaidAdapterDiagnosticIoctl @ 0x14018169C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x140182524 (RaidAdapterGetMiniportDumpInfo.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1401B63D0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1401B73F4 (RaWmiPassToMiniPort.c)
 *     StorGetNVMeIdentifyInfo @ 0x1401B8EB4 (StorGetNVMeIdentifyInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1401BA844 (RaidAdapterFreeMiniportDumpInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidXrbSetCompletionRoutine(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 656) = a2;
}
