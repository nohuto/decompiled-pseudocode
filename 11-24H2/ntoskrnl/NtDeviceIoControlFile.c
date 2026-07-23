/*
 * XREFs of NtDeviceIoControlFile @ 0x1408BF2C0
 * Callers:
 *     PopFlushVolumeWorker @ 0x140B6D040 (PopFlushVolumeWorker.c)
 * Callees:
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 */

NTSTATUS __stdcall NtDeviceIoControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  return IopXxxControlFile(
           FileHandle,
           (__int64)IoStatusBlock,
           IoControlCode,
           (__int64)InputBuffer,
           InputBufferLength,
           (__int64)OutputBuffer,
           OutputBufferLength,
           1,
           0);
}
