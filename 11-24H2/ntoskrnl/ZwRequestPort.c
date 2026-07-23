/*
 * XREFs of ZwRequestPort @ 0x1406AA470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRequestPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
