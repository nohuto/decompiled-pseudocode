/*
 * XREFs of NtRequestPort @ 0x140A7CA70
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x140898440 (AlpcpSendMessage.c)
 */

NTSTATUS __cdecl NtRequestPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage)
{
  NTSTATUS v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7[6]; // [rsp+30h] [rbp-48h] BYREF
  int v8; // [rsp+60h] [rbp-18h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset_0(v7, 0, 0x40uLL);
  Object = 0LL;
  v4 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v7[0] = (__int64)Object;
    v8 = 0x10000;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = AlpcpSendMessage(v7, (__m256i *)RequestMessage, 0LL, KeGetCurrentThread()->PreviousMode);
    KeLeaveCriticalRegionThread();
    ObfDereferenceObject(Object);
  }
  return v4;
}
