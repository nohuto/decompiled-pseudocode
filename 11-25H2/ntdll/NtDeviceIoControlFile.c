/*
 * XREFs of NtDeviceIoControlFile @ 0x180163300
 * Callers:
 *     SaferpIsDllAllowed @ 0x1800F1DAC (SaferpIsDllAllowed.c)
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x1801148F8 (RtlQueryVolumeDiskSpeedPolicy.c)
 *     GetProcessIptTrace @ 0x18015E4D8 (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x18015E5E4 (GetProcessIptTraceSize.c)
 *     RtlpQueryDiskWriteConstraintPolicyByHandle @ 0x18015E998 (RtlpQueryDiskWriteConstraintPolicyByHandle.c)
 * Callees:
 *     <none>
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
  NTSTATUS result; // eax

  result = 7;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
