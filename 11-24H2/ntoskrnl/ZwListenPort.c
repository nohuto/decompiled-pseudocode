/*
 * XREFs of ZwListenPort @ 0x1406A9550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwListenPort(HANDLE PortHandle, PPORT_MESSAGE ConnectionRequest)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
