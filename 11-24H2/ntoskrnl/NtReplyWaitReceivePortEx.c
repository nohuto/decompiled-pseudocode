/*
 * XREFs of NtReplyWaitReceivePortEx @ 0x14089D590
 * Callers:
 *     NtListenPort @ 0x14073F4A0 (NtListenPort.c)
 *     NtReplyWaitReceivePort @ 0x14089D570 (NtReplyWaitReceivePort.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     AlpcpSignal @ 0x1402C46F0 (AlpcpSignal.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x140898440 (AlpcpSendMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x14089D780 (AlpcpReceiveLegacyMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409E5CE0 (AlpcpReplyLegacySynchronousRequest.c)
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
  PVOID v14; // rdi
  int v17; // eax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  __int64 v19[3]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v20; // [rsp+58h] [rbp-40h]
  PVOID v21; // [rsp+60h] [rbp-38h]
  __int64 v22; // [rsp+68h] [rbp-30h]
  signed __int32 v23[4]; // [rsp+70h] [rbp-28h] BYREF

  memset_0(v19, 0, 0x40uLL);
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
    v14 = Object;
    v19[0] = (__int64)Object;
    v23[0] = 0;
    if ( !ReplyMessage )
      goto LABEL_9;
    if ( (*((_DWORD *)Object + 104) & 0x2000) != 0 )
    {
      v23[0] = 4;
      v21 = 0LL;
      v20 = 0LL;
      v22 = 0LL;
      LOBYTE(v13) = PreviousMode;
      v17 = AlpcpReplyLegacySynchronousRequest(v19, ReplyMessage, v13);
    }
    else
    {
      v23[0] = 65541;
      v21 = 0LL;
      v20 = 0LL;
      v22 = 0LL;
      v17 = AlpcpSendMessage(v19, (__m256i *)ReplyMessage, 0LL, PreviousMode);
    }
    v12 = v17;
    if ( v17 < 0 )
    {
      ObfDereferenceObject(v14);
      if ( v12 == -1073740029 )
        v12 = -1073741769;
    }
    else
    {
LABEL_9:
      v12 = AlpcpReceiveLegacyMessage(v19, ReceiveMessage, Timeout, PortContext);
      if ( _bittestandreset(v23, 2u) )
      {
        AlpcpSignal((__int64)v19, 0, (v23[0] & 0x400000) != 0);
        if ( v21 )
          ObfDereferenceObject(v21);
      }
      ObfDereferenceObject(v14);
    }
  }
  KeLeaveCriticalRegionThread();
  return v12;
}
