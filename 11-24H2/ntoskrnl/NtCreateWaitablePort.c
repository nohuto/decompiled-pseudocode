/*
 * XREFs of NtCreateWaitablePort @ 0x14073F460
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     AlpcpCreateConnectionPort @ 0x14086671C (AlpcpCreateConnectionPort.c)
 */

NTSTATUS __cdecl NtCreateWaitablePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG MaxConnectionInfoLength,
        ULONG MaxMessageLength,
        ULONG MaxPoolUsage)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS ConnectionPort; // ebx
  char v8; // [rsp+20h] [rbp-18h]
  char v9; // [rsp+28h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v9 = 1;
  v8 = 1;
  --CurrentThread->KernelApcDisable;
  ConnectionPort = AlpcpCreateConnectionPort(PortHandle, ObjectAttributes, 0LL, MaxMessageLength, v8, v9);
  KeLeaveCriticalRegion();
  return ConnectionPort;
}
