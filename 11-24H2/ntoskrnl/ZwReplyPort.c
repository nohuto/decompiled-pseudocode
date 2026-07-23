/*
 * XREFs of ZwReplyPort @ 0x1406A7530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReplyPort(HANDLE PortHandle, PPORT_MESSAGE ReplyMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
