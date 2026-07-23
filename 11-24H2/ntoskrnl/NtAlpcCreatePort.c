/*
 * XREFs of NtAlpcCreatePort @ 0x140866500
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     AlpcpCreateConnectionPort @ 0x14086671C (AlpcpCreateConnectionPort.c)
 */

NTSTATUS __cdecl NtAlpcCreatePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS ConnectionPort; // ebx
  char v6; // [rsp+20h] [rbp-18h]
  char v7; // [rsp+28h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  ConnectionPort = AlpcpCreateConnectionPort(PortHandle, ObjectAttributes, PortAttributes, 0LL, v6, v7);
  KeLeaveCriticalRegion();
  return ConnectionPort;
}
