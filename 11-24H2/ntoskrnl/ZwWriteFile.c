/*
 * XREFs of ZwWriteFile @ 0x1406A74B0
 * Callers:
 *     IopLiveDumpWriteBuffer @ 0x140495AFC (IopLiveDumpWriteBuffer.c)
 *     DifZwWriteFileWrapper @ 0x1406484B0 (DifZwWriteFileWrapper.c)
 *     DbgkpWerWriteSecondaryData @ 0x140706BBC (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x140706D20 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x14070F5C4 (IopBootLogToFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x140782E08 (RtlRestoreBootStatusDefaults.c)
 *     SmKmStoreFileWriteHeader @ 0x14079B6F8 (SmKmStoreFileWriteHeader.c)
 *     EtwpSavePersistedLogger @ 0x1407B02B0 (EtwpSavePersistedLogger.c)
 *     EtwpWriteBufferCompressed @ 0x1407B0AA0 (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x1407B0C70 (EtwpWriteRemainingCompressedData.c)
 *     CMFFlushHitsFile @ 0x1407C30E0 (CMFFlushHitsFile.c)
 *     LkmdTelpWriteDumpFile @ 0x140830134 (LkmdTelpWriteDumpFile.c)
 *     EtwpFlushBufferToLogfile @ 0x1409D4C28 (EtwpFlushBufferToLogfile.c)
 *     EtwpRealtimeSaveBuffer @ 0x1409D4F68 (EtwpRealtimeSaveBuffer.c)
 *     EtwpUpdateFileHeader @ 0x1409D5658 (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x1409D652C (EtwpFinalizeHeader.c)
 *     RtlpGetSetBootStatusData @ 0x140A352C4 (RtlpGetSetBootStatusData.c)
 *     CmpDoFileWrite @ 0x140A466A0 (CmpDoFileWrite.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140A579F0 (SshpSessionManagerFlushControlEventBufferWorker.c)
 *     SshpSessionManagerWriteBytes @ 0x140A57DDC (SshpSessionManagerWriteBytes.c)
 *     EtwpRealtimeSaveState @ 0x140AA5D18 (EtwpRealtimeSaveState.c)
 *     EtwpRealtimeRestoreState @ 0x140AA9B94 (EtwpRealtimeRestoreState.c)
 *     KdpWriteFileCallback @ 0x140B78EC0 (KdpWriteFileCallback.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C413AC (BapdpProcessVsmKeyBlobs.c)
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
  return KiServiceInternal(FileHandle);
}
