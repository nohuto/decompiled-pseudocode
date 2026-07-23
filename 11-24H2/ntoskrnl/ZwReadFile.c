/*
 * XREFs of ZwReadFile @ 0x1406A7470
 * Callers:
 *     CmpDoFileRead @ 0x14047546C (CmpDoFileRead.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14059ED44 (SecureDump_LoadCertAndProvisionKey.c)
 *     RtlInitializeBootStatDataCache @ 0x1405E6BA0 (RtlInitializeBootStatDataCache.c)
 *     DifZwReadFileWrapper @ 0x140645350 (DifZwReadFileWrapper.c)
 *     PopLoadFileInMemory @ 0x140747724 (PopLoadFileInMemory.c)
 *     SshpSessionManagerOpenControlTrace @ 0x140766E60 (SshpSessionManagerOpenControlTrace.c)
 *     RtlCheckBootStatusIntegrity @ 0x140782B14 (RtlCheckBootStatusIntegrity.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x140782D44 (RtlInitializeBootStatusDataBlackBox.c)
 *     CMFSystemThreadRoutine @ 0x1407C3A10 (CMFSystemThreadRoutine.c)
 *     EtwpRealtimeRestoreBuffer @ 0x1409D442C (EtwpRealtimeRestoreBuffer.c)
 *     EtwpUpdateFileHeader @ 0x1409D5658 (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x1409D652C (EtwpFinalizeHeader.c)
 *     RtlpGetSetBootStatusData @ 0x140A352C4 (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x140AA9B94 (EtwpRealtimeRestoreState.c)
 *     EmInitSystem @ 0x140C62920 (EmInitSystem.c)
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
  return KiServiceInternal(FileHandle);
}
