/*
 * XREFs of ZwRequestWaitReplyPort @ 0x1406A77F0
 * Callers:
 *     DifZwRequestWaitReplyPortWrapper @ 0x1406459E0 (DifZwRequestWaitReplyPortWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage, PPORT_MESSAGE ReplyMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
