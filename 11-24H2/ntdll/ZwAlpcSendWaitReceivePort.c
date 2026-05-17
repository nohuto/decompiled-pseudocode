/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x180162E40
 * Callers:
 *     SendMessageToWERService @ 0x1800015D0 (SendMessageToWERService.c)
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18006A498 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     CsrClientCallServer @ 0x1800A6DD0 (CsrClientCallServer.c)
 *     RtlSendMsgToSm @ 0x18010FE10 (RtlSendMsgToSm.c)
 * Callees:
 *     <none>
 */

__int64 ZwAlpcSendWaitReceivePort()
{
  __int64 result; // rax

  result = 142LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
