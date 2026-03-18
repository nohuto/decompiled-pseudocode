/*
 * XREFs of NtCreatePort @ 0x1407414F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     AlpcpCreateConnectionPort @ 0x14086210C (AlpcpCreateConnectionPort.c)
 */

__int64 __fastcall NtCreatePort(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int ConnectionPort; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ConnectionPort = AlpcpCreateConnectionPort(a1, a2, 0LL);
  KeLeaveCriticalRegion();
  return ConnectionPort;
}
