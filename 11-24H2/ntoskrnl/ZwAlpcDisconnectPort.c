/*
 * XREFs of ZwAlpcDisconnectPort @ 0x1406A8470
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140A7ABB4 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 *     DbgkRegisterErrorPort @ 0x140A7FE04 (DbgkRegisterErrorPort.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcDisconnectPort(HANDLE PortHandle, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
