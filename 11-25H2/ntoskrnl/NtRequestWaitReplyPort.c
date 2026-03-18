/*
 * XREFs of NtRequestWaitReplyPort @ 0x1409CDE90
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409CE020 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x1409CE6C0 (AlpcpProbeForWriteMessageHeader.c)
 */

__int64 __fastcall NtRequestWaitReplyPort(void *a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS v7; // ebx
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v7 >= 0 )
  {
    if ( PreviousMode )
      AlpcpProbeForWriteMessageHeader(a3, 0LL);
    v7 = AlpcpProcessSynchronousRequest((_DWORD)Object, 0x20000, a2, 0, a3, 0LL, 0LL, 0LL, PreviousMode);
    if ( v7 == -1073740029 )
      v7 = -1073741769;
    if ( v7 == -1073740031 )
      v7 = -1073741229;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
