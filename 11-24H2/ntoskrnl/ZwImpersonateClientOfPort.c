/*
 * XREFs of ZwImpersonateClientOfPort @ 0x1406A7790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
