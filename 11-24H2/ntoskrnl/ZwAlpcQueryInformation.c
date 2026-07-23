/*
 * XREFs of ZwAlpcQueryInformation @ 0x1406A8510
 * Callers:
 *     DifZwAlpcQueryInformationWrapper @ 0x14063ABC0 (DifZwAlpcQueryInformationWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcQueryInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
