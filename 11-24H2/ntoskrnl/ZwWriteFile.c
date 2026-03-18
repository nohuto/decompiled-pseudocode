/*
 * XREFs of ZwWriteFile @ 0x1406A6510
 * Callers:
 *     IopLiveDumpWriteBuffer @ 0x14049B10C (IopLiveDumpWriteBuffer.c)
 *     DifZwWriteFileWrapper @ 0x140649EF0 (DifZwWriteFileWrapper.c)
 *     DbgkpWerWriteSecondaryData @ 0x140708FFC (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x140709160 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x140711A34 (IopBootLogToFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x140782ED8 (RtlRestoreBootStatusDefaults.c)
 *     SmKmStoreFileWriteHeader @ 0x14079B5E8 (SmKmStoreFileWriteHeader.c)
 *     EtwpSavePersistedLogger @ 0x1407AFE60 (EtwpSavePersistedLogger.c)
 *     EtwpWriteBufferCompressed @ 0x1407B0650 (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x1407B0820 (EtwpWriteRemainingCompressedData.c)
 *     CMFFlushHitsFile @ 0x1407C1EAC (CMFFlushHitsFile.c)
 *     LkmdTelpWriteDumpFile @ 0x14082F93C (LkmdTelpWriteDumpFile.c)
 *     EtwpRealtimeSaveState @ 0x1409D75AC (EtwpRealtimeSaveState.c)
 *     EtwpFlushBufferToLogfile @ 0x1409DA118 (EtwpFlushBufferToLogfile.c)
 *     EtwpRealtimeSaveBuffer @ 0x1409DA458 (EtwpRealtimeSaveBuffer.c)
 *     EtwpUpdateFileHeader @ 0x1409DAB48 (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x1409DBD1C (EtwpFinalizeHeader.c)
 *     RtlpGetSetBootStatusData @ 0x140A3FA14 (RtlpGetSetBootStatusData.c)
 *     CmpDoFileWrite @ 0x140A4F8F0 (CmpDoFileWrite.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140A5F4A0 (SshpSessionManagerFlushControlEventBufferWorker.c)
 *     SshpSessionManagerWriteBytes @ 0x140A5F88C (SshpSessionManagerWriteBytes.c)
 *     EtwpRealtimeRestoreState @ 0x140AAECB8 (EtwpRealtimeRestoreState.c)
 *     KdpWriteFileCallback @ 0x140B76EC0 (KdpWriteFileCallback.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C3F25C (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWriteFile(
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
