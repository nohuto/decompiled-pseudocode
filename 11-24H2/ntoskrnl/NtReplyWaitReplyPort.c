/*
 * XREFs of NtReplyWaitReplyPort @ 0x14073F600
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x1408A1E50 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpProcessSynchronousRequest @ 0x140A24FBC (AlpcpProcessSynchronousRequest.c)
 */

NTSTATUS __cdecl NtReplyWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE ReplyMessage)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  int v5; // ebx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    if ( (*((_DWORD *)Object + 104) & 6) == 2 )
    {
      v5 = -1073741811;
    }
    else
    {
      if ( PreviousMode )
        AlpcpProbeForWriteMessageHeader(ReplyMessage, 0LL);
      v5 = AlpcpProcessSynchronousRequest(
             (_DWORD)Object,
             131073,
             (_DWORD)ReplyMessage,
             0,
             (__int64)ReplyMessage,
             0LL,
             0LL,
             0LL,
             PreviousMode);
      if ( v5 == -1073740029 )
        v5 = -1073741769;
      if ( v5 == -1073740031 )
        v5 = -1073741229;
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  KeLeaveCriticalRegion();
  return v5;
}
