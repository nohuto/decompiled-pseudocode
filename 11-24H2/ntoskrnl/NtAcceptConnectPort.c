/*
 * XREFs of NtAcceptConnectPort @ 0x140A1EC10
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     AlpcpAcceptConnectPort @ 0x140A1ED20 (AlpcpAcceptConnectPort.c)
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

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = AlpcpAcceptConnectPort(
         (int)PortHandle,
         0,
         0,
         0,
         0LL,
         (__int64)PortContext,
         ConnectionRequest,
         0LL,
         AcceptConnection,
         ServerView,
         (__int64)ClientView,
         1);
  KeLeaveCriticalRegion();
  if ( v7 == -1073740029 )
    return -1073741813;
  return v7;
}
