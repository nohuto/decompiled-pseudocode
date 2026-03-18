/*
 * XREFs of NtRequestPort @ 0x140A81E90
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x14088E810 (AlpcpSendMessage.c)
 */

__int64 __fastcall NtRequestPort(HANDLE Handle, __m256i *a2)
{
  int v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7[6]; // [rsp+30h] [rbp-48h] BYREF
  int v8; // [rsp+60h] [rbp-18h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset_0(v7, 0, 0x40uLL);
  Object = 0LL;
  v4 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v7[0] = (__int64)Object;
    v8 = 0x10000;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = AlpcpSendMessage(v7, a2, 0LL, KeGetCurrentThread()->PreviousMode);
    KeLeaveCriticalRegionThread();
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v4;
}
