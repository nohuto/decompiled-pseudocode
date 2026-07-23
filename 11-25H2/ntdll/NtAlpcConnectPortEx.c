/*
 * XREFs of NtAlpcConnectPortEx @ 0x180164190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
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
  NTSTATUS result; // eax

  result = 124;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
