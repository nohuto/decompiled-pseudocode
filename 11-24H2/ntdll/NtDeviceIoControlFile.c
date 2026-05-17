/*
 * XREFs of NtDeviceIoControlFile @ 0x180161D70
 * Callers:
 *     SaferpIsDllAllowed @ 0x1800F04FC (SaferpIsDllAllowed.c)
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x1801117F8 (RtlQueryVolumeDiskSpeedPolicy.c)
 *     GetProcessIptTrace @ 0x18015D014 (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x18015D120 (GetProcessIptTraceSize.c)
 *     RtlpQueryDiskWriteConstraintPolicyByHandle @ 0x18015D4D4 (RtlpQueryDiskWriteConstraintPolicyByHandle.c)
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
