/*
 * XREFs of ZwFlushBuffersFile @ 0x1406A6D70
 * Callers:
 *     CmpDoFileFlush @ 0x140490EF0 (CmpDoFileFlush.c)
 *     DifZwFlushBuffersFileWrapper @ 0x14063FEF0 (DifZwFlushBuffersFileWrapper.c)
 *     PopCreateHiberFile @ 0x140751D30 (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x1407DA2E8 (CmReplaceKey.c)
 *     CmpWriteOffsetArrayToFile @ 0x1407DC93C (CmpWriteOffsetArrayToFile.c)
 *     RtlpGetSetBootStatusData @ 0x140A3FA14 (RtlpGetSetBootStatusData.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140A5F4A0 (SshpSessionManagerFlushControlEventBufferWorker.c)
 *     PopFlushVolumeWorker @ 0x140B6BC10 (PopFlushVolumeWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock);
}
