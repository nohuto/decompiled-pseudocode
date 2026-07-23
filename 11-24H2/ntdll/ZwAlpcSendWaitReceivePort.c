/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x180161200
 * Callers:
 *     CsrClientCallServer @ 0x1800241C0 (CsrClientCallServer.c)
 *     TppWorkerThread @ 0x1800502D0 (TppWorkerThread.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x180086B88 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     SendMessageToWERService @ 0x1800ADEC8 (SendMessageToWERService.c)
 *     RtlSendMsgToSm @ 0x18010ADF0 (RtlSendMsgToSm.c)
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
