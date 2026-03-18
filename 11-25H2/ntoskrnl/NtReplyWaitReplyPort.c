/*
 * XREFs of NtReplyWaitReplyPort @ 0x1407356B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409CE020 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x1409CE6C0 (AlpcpProbeForWriteMessageHeader.c)
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
