/*
 * XREFs of NtAcceptConnectPort @ 0x1409F5A20
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     AlpcpAcceptConnectPort @ 0x1409F5B30 (AlpcpAcceptConnectPort.c)
 */

NTSTATUS __cdecl NtAcceptConnectPort(
        PHANDLE PortHandle,
        PVOID PortContext,
        PPORT_MESSAGE ConnectionRequest,
        BOOLEAN AcceptConnection,
        PPORT_VIEW ServerView,
        PREMOTE_PORT_VIEW ClientView)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx
  char v10; // [rsp+58h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v10 = 1;
  --CurrentThread->KernelApcDisable;
  v7 = AlpcpAcceptConnectPort(
         PortHandle,
         0LL,
         0LL,
         0LL,
         0LL,
         PortContext,
         ConnectionRequest,
         0LL,
         AcceptConnection,
         ServerView,
         ClientView,
         v10);
  KeLeaveCriticalRegion();
  if ( v7 == -1073740029 )
    return -1073741813;
  return v7;
}
