/*
 * XREFs of NtSetInformationProcess @ 0x180162010
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180006BA0 (RtlAddGrowableFunctionTable.c)
 *     LdrpHandleTlsData @ 0x180008200 (LdrpHandleTlsData.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800E76F0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlCreateUserStack @ 0x1800F51C0 (RtlCreateUserStack.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800F9A50 (LdrpAllocateSchedulerSharedData.c)
 *     RtlCreateUserFiberShadowStack @ 0x180107170 (RtlCreateUserFiberShadowStack.c)
 *     RtlFreeUserFiberShadowStack @ 0x18010CE40 (RtlFreeUserFiberShadowStack.c)
 *     WerpSetProcessFaultInformation @ 0x180113E80 (WerpSetProcessFaultInformation.c)
 *     AVrfpEnableHandleVerifier @ 0x180131DD8 (AVrfpEnableHandleVerifier.c)
 *     RtlSetProcessIsCritical @ 0x180145BC0 (RtlSetProcessIsCritical.c)
 * Callees:
 *     <none>
 */

__int64 NtSetInformationProcess()
{
  __int64 result; // rax

  result = 28LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
