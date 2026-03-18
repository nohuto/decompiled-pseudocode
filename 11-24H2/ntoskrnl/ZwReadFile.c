/*
 * XREFs of ZwReadFile @ 0x1406A64D0
 * Callers:
 *     CmpDoFileRead @ 0x140479BDC (CmpDoFileRead.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x1405A1E04 (SecureDump_LoadCertAndProvisionKey.c)
 *     RtlInitializeBootStatDataCache @ 0x1405E9650 (RtlInitializeBootStatDataCache.c)
 *     DifZwReadFileWrapper @ 0x140646D90 (DifZwReadFileWrapper.c)
 *     PopLoadFileInMemory @ 0x1407493F4 (PopLoadFileInMemory.c)
 *     SshpSessionManagerOpenControlTrace @ 0x140767400 (SshpSessionManagerOpenControlTrace.c)
 *     RtlCheckBootStatusIntegrity @ 0x140782BE4 (RtlCheckBootStatusIntegrity.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x140782E14 (RtlInitializeBootStatusDataBlackBox.c)
 *     CMFSystemThreadRoutine @ 0x1407C27E0 (CMFSystemThreadRoutine.c)
 *     EtwpRealtimeRestoreBuffer @ 0x1409D991C (EtwpRealtimeRestoreBuffer.c)
 *     EtwpUpdateFileHeader @ 0x1409DAB48 (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x1409DBD1C (EtwpFinalizeHeader.c)
 *     RtlpGetSetBootStatusData @ 0x140A3FA14 (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x140AAECB8 (EtwpRealtimeRestoreState.c)
 *     EmInitSystem @ 0x140C607D0 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReadFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, Event, ApcRoutine);
}
