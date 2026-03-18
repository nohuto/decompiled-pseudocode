/*
 * XREFs of NtReplyWaitReplyPort @ 0x1407416D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x1408997B0 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpProcessSynchronousRequest @ 0x140A304CC (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall NtReplyWaitReplyPort(void *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS v5; // ebx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    if ( (*((_DWORD *)Object + 104) & 6) == 2 )
    {
      v5 = -1073741811;
    }
    else
    {
      if ( PreviousMode )
        AlpcpProbeForWriteMessageHeader(a2, 0LL);
      v5 = AlpcpProcessSynchronousRequest((_DWORD)Object, 131073, a2, 0, a2, 0LL, 0LL, 0LL, PreviousMode);
      if ( v5 == -1073740029 )
        v5 = -1073741769;
      if ( v5 == -1073740031 )
        v5 = -1073741229;
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
