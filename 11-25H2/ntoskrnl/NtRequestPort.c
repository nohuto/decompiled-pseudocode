/*
 * XREFs of NtRequestPort @ 0x140A7E810
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 */

__int64 __fastcall NtRequestPort(HANDLE Handle, __m256i *a2)
{
  int v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD v7[6]; // [rsp+30h] [rbp-48h] BYREF
  int v8; // [rsp+60h] [rbp-18h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset_0(v7, 0, 0x40uLL);
  Object = 0LL;
  v4 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v7[0] = Object;
    v8 = 0x10000;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = AlpcpSendMessage((__int64)v7, a2, 0LL, KeGetCurrentThread()->PreviousMode);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v4;
}
