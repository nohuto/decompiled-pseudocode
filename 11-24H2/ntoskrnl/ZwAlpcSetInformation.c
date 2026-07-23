/*
 * XREFs of ZwAlpcSetInformation @ 0x1406A8590
 * Callers:
 *     DifZwAlpcSetInformationWrapper @ 0x14063AF50 (DifZwAlpcSetInformationWrapper.c)
 *     PopUmpoInitializeChannel @ 0x140C34578 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140C347F4 (PopUmpoInitializeMonitorChannel.c)
 *     SshpAlpcInitialize @ 0x140C36544 (SshpAlpcInitialize.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcSetInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
