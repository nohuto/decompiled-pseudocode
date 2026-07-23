/*
 * XREFs of NtReplyWaitReceivePortEx @ 0x1408AC130
 * Callers:
 *     NtListenPort @ 0x140735550 (NtListenPort.c)
 *     NtReplyWaitReceivePort @ 0x1408AC110 (NtReplyWaitReceivePort.c)
 * Callees:
 *     AlpcpSignal @ 0x140284330 (AlpcpSignal.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpReceiveLegacyMessage @ 0x1408AC320 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409F1EF0 (AlpcpReplyLegacySynchronousRequest.c)
 */

NTSTATUS __cdecl NtReplyWaitReceivePortEx(
        HANDLE PortHandle,
        PVOID *PortContext,
        PPORT_MESSAGE ReplyMessage,
        PPORT_MESSAGE ReceiveMessage,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  PVOID v15; // rdi
  __int64 v16; // r9
  __int64 v19; // r8
  int v20; // eax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v22[3]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+58h] [rbp-40h]
  PVOID v24; // [rsp+60h] [rbp-38h]
  __int64 v25; // [rsp+68h] [rbp-30h]
  unsigned int v26[4]; // [rsp+70h] [rbp-28h] BYREF

  memset_0(v22, 0, 0x40uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)ReceiveMessage & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ReceiveMessage < 0x7FFFFFFF0000LL )
      v11 = (__int64)ReceiveMessage;
    *(_BYTE *)v11 = *(_BYTE *)v11;
    *(_BYTE *)(v11 + 39) = *(_BYTE *)(v11 + 39);
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v15 = Object;
    v22[0] = Object;
    v26[0] = 0;
    if ( !ReplyMessage )
      goto LABEL_9;
    if ( (*((_DWORD *)Object + 104) & 0x2000) != 0 )
    {
      v26[0] = 4;
      v24 = 0LL;
      v23 = 0LL;
      v25 = 0LL;
      LOBYTE(v13) = PreviousMode;
      v20 = AlpcpReplyLegacySynchronousRequest(v22, ReplyMessage, v13);
    }
    else
    {
      v26[0] = 65541;
      v24 = 0LL;
      v23 = 0LL;
      v25 = 0LL;
      LOBYTE(v14) = PreviousMode;
      v20 = AlpcpSendMessage(v22, ReplyMessage, 0LL, v14);
    }
    v12 = v20;
    if ( v20 < 0 )
    {
      ObfDereferenceObject(v15);
      if ( v12 == -1073740029 )
        v12 = -1073741769;
    }
    else
    {
LABEL_9:
      v12 = AlpcpReceiveLegacyMessage(v22, ReceiveMessage, Timeout, PortContext);
      if ( _bittestandreset((signed __int32 *)v26, 2u) )
      {
        v19 = v26[0] >> 22;
        LOBYTE(v19) = (v26[0] & 0x400000) != 0;
        AlpcpSignal((__int64)v22, 0, v19, v16);
        if ( v24 )
          ObfDereferenceObject(v24);
      }
      ObfDereferenceObject(v15);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v12;
}
