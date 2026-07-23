/*
 * XREFs of NtAlpcConnectPortEx @ 0x140A2E0B0
 * Callers:
 *     <none>
 * Callees:
 *     AlpcpConnectPort @ 0x140916470 (AlpcpConnectPort.c)
 */

NTSTATUS __cdecl NtAlpcConnectPortEx(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ConnectionPortObjectAttributes,
        POBJECT_ATTRIBUTES ClientPortObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes,
        ULONG Flags,
        PSECURITY_DESCRIPTOR ServerSecurityRequirements,
        PPORT_MESSAGE ConnectionMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES OutMessageAttributes,
        PALPC_MESSAGE_ATTRIBUTES InMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  return AlpcpConnectPort(
           PortHandle,
           0LL,
           (__int64)ConnectionPortObjectAttributes,
           (__int64)ClientPortObjectAttributes,
           PortAttributes,
           Flags,
           ServerSecurityRequirements,
           0LL,
           (char *)ConnectionMessage,
           BufferLength,
           (__int64)OutMessageAttributes,
           (int *)InMessageAttributes,
           Timeout);
}
