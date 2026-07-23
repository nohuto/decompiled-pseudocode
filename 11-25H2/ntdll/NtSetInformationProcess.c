/*
 * XREFs of NtSetInformationProcess @ 0x1801635A0
 * Callers:
 *     LdrpHandleTlsData @ 0x180021A20 (LdrpHandleTlsData.c)
 *     RtlAddGrowableFunctionTable @ 0x180024410 (RtlAddGrowableFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800E8E30 (RtlDeleteGrowableFunctionTable.c)
 *     RtlCreateUserStack @ 0x1800F6D40 (RtlCreateUserStack.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800FB7F0 (LdrpAllocateSchedulerSharedData.c)
 *     RtlCreateUserFiberShadowStack @ 0x180109A80 (RtlCreateUserFiberShadowStack.c)
 *     RtlFreeUserFiberShadowStack @ 0x18010EE90 (RtlFreeUserFiberShadowStack.c)
 *     WerpSetProcessFaultInformation @ 0x180116D64 (WerpSetProcessFaultInformation.c)
 *     AVrfpEnableHandleVerifier @ 0x1801338B8 (AVrfpEnableHandleVerifier.c)
 *     RtlSetProcessIsCritical @ 0x180147170 (RtlSetProcessIsCritical.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  NTSTATUS result; // eax

  result = 28;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
