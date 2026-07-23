/*
 * XREFs of ZwCompleteConnectPort @ 0x1406A87F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCompleteConnectPort(HANDLE PortHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
