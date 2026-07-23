/*
 * XREFs of ZwAlpcCancelMessage @ 0x1406A82F0
 * Callers:
 *     SshpAlpcProcessAlpcMessage @ 0x14076802C (SshpAlpcProcessAlpcMessage.c)
 *     PopUmpoProcessMessage @ 0x140A180D8 (PopUmpoProcessMessage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCancelMessage(HANDLE PortHandle, ULONG Flags, PALPC_CONTEXT_ATTR MessageContext)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
