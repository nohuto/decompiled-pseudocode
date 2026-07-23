/*
 * XREFs of NtSetInformationProcess @ 0x1801603D0
 * Callers:
 *     RtlDeleteGrowableFunctionTable @ 0x1800279B0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x1800335A0 (RtlAddGrowableFunctionTable.c)
 *     LdrpHandleTlsData @ 0x180034C00 (LdrpHandleTlsData.c)
 *     RtlCreateUserStack @ 0x1800EFCE0 (RtlCreateUserStack.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800F4700 (LdrpAllocateSchedulerSharedData.c)
 *     RtlCreateUserFiberShadowStack @ 0x1801020A0 (RtlCreateUserFiberShadowStack.c)
 *     RtlFreeUserFiberShadowStack @ 0x180107C90 (RtlFreeUserFiberShadowStack.c)
 *     WerpSetProcessFaultInformation @ 0x18010F180 (WerpSetProcessFaultInformation.c)
 *     AVrfpEnableHandleVerifier @ 0x180130008 (AVrfpEnableHandleVerifier.c)
 *     RtlSetProcessIsCritical @ 0x180143F70 (RtlSetProcessIsCritical.c)
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
