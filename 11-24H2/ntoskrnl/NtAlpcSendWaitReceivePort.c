/*
 * XREFs of NtAlpcSendWaitReceivePort @ 0x14084A0C0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     AlpcpSignal @ 0x14031BB60 (AlpcpSignal.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x14088E810 (AlpcpSendMessage.c)
 *     AlpcpReceiveMessage @ 0x140899160 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x140A304CC (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall NtAlpcSendWaitReceivePort(
        void *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // edi
  unsigned __int8 PreviousMode; // r14
  NTSTATUS v13; // ebx
  signed __int32 v15; // esi
  unsigned __int64 *v16; // rbp
  signed __int32 v17; // esi
  signed __int8 v18; // cf
  volatile signed __int32 *v19; // r13
  _QWORD *v20; // rax
  struct _KEVENT *v21; // rcx
  PVOID Object; // [rsp+50h] [rbp-78h] BYREF
  _QWORD *v23; // [rsp+58h] [rbp-70h]
  __int128 v24; // [rsp+60h] [rbp-68h] BYREF
  __int128 v25; // [rsp+70h] [rbp-58h]
  __int128 v26; // [rsp+80h] [rbp-48h]
  __int128 v27; // [rsp+90h] [rbp-38h] BYREF

  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = a2 & 0xFFFF0000;
  --CurrentThread->KernelApcDisable;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v13 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v13 >= 0 )
  {
    if ( (v11 & 0x40000) != 0 )
    {
      v15 = _InterlockedExchangeAdd((volatile signed __int32 *)Object + 101, 1u);
      v16 = (unsigned __int64 *)Object;
      v17 = v15 + 1;
      if ( !*((_QWORD *)Object + 51) )
        goto LABEL_5;
      v19 = (volatile signed __int32 *)((char *)Object + 352);
      v20 = KeAbPreAcquire((__int64)Object + 352, 0LL);
      v18 = _interlockedbittestandset64(v19, 0LL);
      v23 = v20;
      if ( v18 )
      {
        ExfAcquirePushLockExclusiveEx(v16 + 44, (__int64)v20, (__int64)(v16 + 44));
        v20 = v23;
      }
      if ( v20 )
        *((_BYTE *)v20 + 10) = 1;
      v21 = (struct _KEVENT *)v16[51];
      if ( v21 && v17 == v21[1].Header.LockNV )
        KeSetEvent(v21, 0, 0);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v16 + 44);
      KeAbPostRelease((ULONG_PTR)(v16 + 44));
    }
    v16 = (unsigned __int64 *)Object;
LABEL_5:
    if ( (v11 & 0x20000) != 0 )
    {
      if ( a3 && (v11 & 0x10000) == 0 && (v11 & 0x1000000) == 0 )
      {
        if ( a5 )
          v13 = AlpcpProcessSynchronousRequest((_DWORD)v16, v11, a3, a4, a5, a6, a7, a8, PreviousMode);
        else
          v13 = -1073740027;
        goto LABEL_17;
      }
    }
    else
    {
      *(_QWORD *)&v24 = v16;
      LODWORD(v27) = v11;
      if ( !a3 )
      {
LABEL_7:
        if ( a5 )
          v13 = AlpcpReceiveMessage(&v24, a5, a6, a7, a8);
        v18 = _bittestandreset((signed __int32 *)&v27, 2u);
        if ( v18 )
        {
          AlpcpSignal((__int64)&v24, 0, (v27 & 0x400000) != 0);
          if ( (_QWORD)v26 )
            ObfDereferenceObject((PVOID)v26);
        }
        goto LABEL_17;
      }
      if ( (v11 & 0x1000000) == 0 )
      {
        v26 = 0uLL;
        LODWORD(v27) = v11 | 4;
        *((_QWORD *)&v25 + 1) = 0LL;
        v13 = AlpcpSendMessage(&v24, a3, a4, PreviousMode);
        if ( v13 >= 0 )
          goto LABEL_7;
LABEL_17:
        ObfDereferenceObject(v16);
        goto LABEL_2;
      }
    }
    v13 = -1073741584;
    goto LABEL_17;
  }
LABEL_2:
  KeLeaveCriticalRegionThread();
  return (unsigned int)v13;
}
