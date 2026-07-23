/*
 * XREFs of ZwAlpcQueryInformationMessage @ 0x1406A8530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcQueryInformationMessage(
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ALPC_MESSAGE_INFORMATION_CLASS MessageInformationClass,
        PVOID MessageInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
