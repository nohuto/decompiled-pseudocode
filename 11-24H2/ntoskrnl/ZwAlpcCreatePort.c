/*
 * XREFs of ZwAlpcCreatePort @ 0x1406A8350
 * Callers:
 *     DifZwAlpcCreatePortWrapper @ 0x14063A5B0 (DifZwAlpcCreatePortWrapper.c)
 *     PopUmpoInitializeChannel @ 0x140C34578 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140C347F4 (PopUmpoInitializeMonitorChannel.c)
 *     SshpAlpcInitialize @ 0x140C36544 (SshpAlpcInitialize.c)
 *     SeRmInitPhase1 @ 0x140C6239C (SeRmInitPhase1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreatePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
