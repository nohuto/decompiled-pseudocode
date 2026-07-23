/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x1801643D0
 * Callers:
 *     CsrClientCallServer @ 0x180035C10 (CsrClientCallServer.c)
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 *     SendMessageToWERService @ 0x1800CFEA0 (SendMessageToWERService.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x1800E5178 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     RtlSendMsgToSm @ 0x180112B80 (RtlSendMsgToSm.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcSendWaitReceivePort(
        HANDLE PortHandle,
        ULONG Flags,
        PPORT_MESSAGE SendMessageA,
        PALPC_MESSAGE_ATTRIBUTES SendMessageAttributes,
        PPORT_MESSAGE ReceiveMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES ReceiveMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 142;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
