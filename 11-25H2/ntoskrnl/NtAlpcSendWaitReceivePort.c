/*
 * XREFs of NtAlpcSendWaitReceivePort @ 0x14084E310
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     AlpcpSignal @ 0x140284330 (AlpcpSignal.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     AlpcpReceiveMessage @ 0x1408A88E0 (AlpcpReceiveMessage.c)
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409CE020 (AlpcpProcessSynchronousRequest.c)
 */

NTSTATUS __cdecl NtAlpcSendWaitReceivePort(
        HANDLE PortHandle,
        ULONG Flags,
        PPORT_MESSAGE SendMessageA,
        PALPC_MESSAGE_ATTRIBUTES SendMessageAttributes,
        PPORT_MESSAGE ReceiveMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES ReceiveMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v11; // edi
  unsigned __int8 PreviousMode; // r14
  int v13; // ebx
  __int64 v14; // r9
  signed __int32 v16; // esi
  unsigned __int64 *v17; // rbp
  signed __int32 v18; // esi
  signed __int8 v19; // cf
  __int64 v20; // r8
  volatile signed __int32 *v21; // r13
  __int64 *v22; // rax
  struct _KEVENT *v23; // rcx
  PVOID Object; // [rsp+50h] [rbp-78h] BYREF
  __int64 *v25; // [rsp+58h] [rbp-70h]
  __int128 v26; // [rsp+60h] [rbp-68h] BYREF
  __int128 v27; // [rsp+70h] [rbp-58h]
  __int128 v28; // [rsp+80h] [rbp-48h]
  __int128 v29; // [rsp+90h] [rbp-38h] BYREF

  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = Flags & 0xFFFF0000;
  --CurrentThread->KernelApcDisable;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v13 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v13 >= 0 )
  {
    if ( (v11 & 0x40000) != 0 )
    {
      v16 = _InterlockedExchangeAdd((volatile signed __int32 *)Object + 101, 1u);
      v17 = (unsigned __int64 *)Object;
      v18 = v16 + 1;
      if ( !*((_QWORD *)Object + 51) )
        goto LABEL_5;
      v21 = (volatile signed __int32 *)((char *)Object + 352);
      v22 = KeAbPreAcquire((__int64)Object + 352, 0LL);
      v19 = _interlockedbittestandset64(v21, 0LL);
      v25 = v22;
      if ( v19 )
      {
        ExfAcquirePushLockExclusiveEx(v17 + 44, v22, (__int64)(v17 + 44));
        v22 = v25;
      }
      if ( v22 )
        *((_BYTE *)v22 + 10) = 1;
      v23 = (struct _KEVENT *)v17[51];
      if ( v23 && v18 == v23[1].Header.LockNV )
        KeSetEvent(v23, 0, 0);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v17 + 44);
      KeAbPostRelease((ULONG_PTR)(v17 + 44));
    }
    v17 = (unsigned __int64 *)Object;
LABEL_5:
    if ( (v11 & 0x20000) != 0 )
    {
      if ( SendMessageA && (v11 & 0x10000) == 0 && (v11 & 0x1000000) == 0 )
      {
        if ( ReceiveMessage )
          v13 = AlpcpProcessSynchronousRequest(
                  (_DWORD)v17,
                  v11,
                  (_DWORD)SendMessageA,
                  (_DWORD)SendMessageAttributes,
                  (__int64)ReceiveMessage,
                  (__int64)BufferLength,
                  (__int64)ReceiveMessageAttributes,
                  (__int64)Timeout,
                  PreviousMode);
        else
          v13 = -1073740027;
        goto LABEL_17;
      }
    }
    else
    {
      *(_QWORD *)&v26 = v17;
      LODWORD(v29) = v11;
      if ( !SendMessageA )
      {
LABEL_7:
        if ( ReceiveMessage )
          v13 = AlpcpReceiveMessage(&v26, ReceiveMessage, BufferLength, ReceiveMessageAttributes, Timeout);
        v19 = _bittestandreset((signed __int32 *)&v29, 2u);
        if ( v19 )
        {
          v20 = (unsigned int)v29 >> 22;
          LOBYTE(v20) = (v29 & 0x400000) != 0;
          AlpcpSignal((__int64)&v26, 0, v20, v14);
          if ( (_QWORD)v28 )
            ObfDereferenceObject((PVOID)v28);
        }
        goto LABEL_17;
      }
      if ( (v11 & 0x1000000) == 0 )
      {
        v28 = 0uLL;
        LODWORD(v29) = v11 | 4;
        *((_QWORD *)&v27 + 1) = 0LL;
        v13 = AlpcpSendMessage(&v26, SendMessageA, SendMessageAttributes, PreviousMode);
        if ( v13 >= 0 )
          goto LABEL_7;
LABEL_17:
        ObfDereferenceObject(v17);
        goto LABEL_2;
      }
    }
    v13 = -1073741584;
    goto LABEL_17;
  }
LABEL_2:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v13;
}
