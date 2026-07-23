/*
 * XREFs of NtDeviceIoControlFile @ 0x180160130
 * Callers:
 *     SaferpIsDllAllowed @ 0x1800EB17C (SaferpIsDllAllowed.c)
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x18010CC08 (RtlQueryVolumeDiskSpeedPolicy.c)
 *     GetProcessIptTrace @ 0x18015B3D4 (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x18015B4E0 (GetProcessIptTraceSize.c)
 *     RtlpQueryDiskWriteConstraintPolicyByHandle @ 0x18015B894 (RtlpQueryDiskWriteConstraintPolicyByHandle.c)
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
