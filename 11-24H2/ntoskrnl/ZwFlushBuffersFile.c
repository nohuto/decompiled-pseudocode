/*
 * XREFs of ZwFlushBuffersFile @ 0x1406A7D10
 * Callers:
 *     CmpDoFileFlush @ 0x14048BB7C (CmpDoFileFlush.c)
 *     DifZwFlushBuffersFileWrapper @ 0x14063E4B0 (DifZwFlushBuffersFileWrapper.c)
 *     PopCreateHiberFile @ 0x140750050 (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x1407DA838 (CmReplaceKey.c)
 *     CmpWriteOffsetArrayToFile @ 0x1407DCE8C (CmpWriteOffsetArrayToFile.c)
 *     RtlpGetSetBootStatusData @ 0x140A352C4 (RtlpGetSetBootStatusData.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140A579F0 (SshpSessionManagerFlushControlEventBufferWorker.c)
 *     PopFlushVolumeWorker @ 0x140B6D040 (PopFlushVolumeWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
