/*
 * XREFs of NtAlpcAcceptConnectPort @ 0x140A1EC90
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     AlpcpAcceptConnectPort @ 0x140A1ED20 (AlpcpAcceptConnectPort.c)
 */

NTSTATUS __cdecl NtAlpcAcceptConnectPort(
        PHANDLE PortHandle,
        HANDLE ConnectionPortHandle,
        ULONG Flags,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes,
        PVOID PortContext,
        PPORT_MESSAGE ConnectionRequest,
        PALPC_MESSAGE_ATTRIBUTES ConnectionMessageAttributes,
        BOOLEAN AcceptConnection)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v10; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = AlpcpAcceptConnectPort(
          (int)PortHandle,
          Flags & 0xC0000000,
          (int)ConnectionPortHandle,
          (int)ObjectAttributes,
          PortAttributes,
          (__int64)PortContext,
          ConnectionRequest,
          (__int64)ConnectionMessageAttributes,
          AcceptConnection,
          0LL,
          0LL,
          0);
  KeLeaveCriticalRegion();
  return v10;
}
