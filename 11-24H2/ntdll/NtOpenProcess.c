/*
 * XREFs of NtOpenProcess @ 0x180160510
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180028C60 (RtlQueryProcessDebugInformation.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x180029600 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpQueryCriticalSectionOwner @ 0x180029F24 (RtlpQueryCriticalSectionOwner.c)
 *     RtlpWow64SuspendThread @ 0x1800F3B20 (RtlpWow64SuspendThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  NTSTATUS result; // eax

  result = 38;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
