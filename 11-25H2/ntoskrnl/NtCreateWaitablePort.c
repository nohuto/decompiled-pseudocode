/*
 * XREFs of NtCreateWaitablePort @ 0x140735510
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     AlpcpCreateConnectionPort @ 0x1409DFF40 (AlpcpCreateConnectionPort.c)
 */

__int64 __fastcall NtCreateWaitablePort(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int ConnectionPort; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ConnectionPort = AlpcpCreateConnectionPort(a1, a2, 0LL);
  KeLeaveCriticalRegion();
  return ConnectionPort;
}
