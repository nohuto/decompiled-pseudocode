/*
 * XREFs of NtSetQuotaInformationFile @ 0x14070C260
 * Callers:
 *     <none>
 * Callees:
 *     IopSetEaOrQuotaInformationFile @ 0x1407068A0 (IopSetEaOrQuotaInformationFile.c)
 */

NTSTATUS __stdcall NtSetQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length)
{
  char v5; // [rsp+20h] [rbp-18h]

  return IopSetEaOrQuotaInformationFile(FileHandle, (unsigned __int64)IoStatusBlock, Buffer, Length, v5);
}
