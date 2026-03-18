/*
 * XREFs of AlpcpAssociateIoCompletionPort @ 0x140A0A810
 * Callers:
 *     NtAlpcSetInformation @ 0x140A0A340 (NtAlpcSetInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403BCF10 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x140470198 (AlpcpFreeCompletionPacketLookaside.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x140A0AA80 (AlpcpAllocateCompletionPacketLookaside.c)
 */

__int64 __fastcall AlpcpAssociateIoCompletionPort(_QWORD *a1, void *a2, __int64 a3)
{
  unsigned __int64 *v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  NTSTATUS v9; // eax
  unsigned int *v10; // rdx
  unsigned int v11; // ebp
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 CompletionPacketLookaside; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // r14
  _QWORD *i; // r14
  void *v19; // rcx
  KSPIN_LOCK *v20; // rcx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225485LL;
  v6 = a1 + 44;
  v7 = KeAbPreAcquire((__int64)(a1 + 44), 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, (__int64)v7, (__int64)v6);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  if ( a1[4] )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease((ULONG_PTR)v6);
    return 3221225544LL;
  }
  else
  {
    if ( !a1[45] )
    {
      Object = 0LL;
      v9 = ObReferenceObjectByHandle(a2, 2u, IoCompletionObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
      v10 = (unsigned int *)Object;
      a1[4] = Object;
      v11 = v9;
      if ( v9 >= 0 )
      {
        v12 = a1[45];
        a1[5] = a3;
        if ( v12 )
        {
          v13 = *(_QWORD *)(v12 + 96) >> 3;
        }
        else
        {
          if ( (*(_BYTE *)v10 & 0x7F) == 0x15 )
            v13 = v10[166];
          else
            v13 = v10[11];
          if ( (unsigned int)v13 > 4 )
            v13 = 4LL;
        }
        CompletionPacketLookaside = AlpcpAllocateCompletionPacketLookaside(v13, v10, a3);
        a1[6] = CompletionPacketLookaside;
        if ( CompletionPacketLookaside )
        {
          v15 = KeAbPreAcquire((__int64)(a1 + 17), 0LL);
          v16 = v15;
          if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 34, 0LL) )
            ExfAcquirePushLockExclusiveEx(a1 + 17, (__int64)v15, (__int64)(a1 + 17));
          if ( v16 )
            *((_BYTE *)v16 + 10) = 1;
          for ( i = (_QWORD *)a1[18]; i != a1 + 18; i = (_QWORD *)*i )
            AlpcpQueueIoCompletionPort(a1, 0, 0, 0, 0);
          if ( (_InterlockedExchangeAdd64(a1 + 17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(a1 + 17);
          KeAbPostRelease((ULONG_PTR)(a1 + 17));
          v11 = 0;
LABEL_24:
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v6);
          KeAbPostRelease((ULONG_PTR)v6);
          return v11;
        }
        v11 = -1073741670;
      }
      v19 = (void *)a1[4];
      if ( v19 )
      {
        ObfDereferenceObject(v19);
        a1[4] = 0LL;
      }
      v20 = (KSPIN_LOCK *)a1[6];
      if ( v20 )
      {
        AlpcpFreeCompletionPacketLookaside(v20);
        a1[6] = 0LL;
      }
      goto LABEL_24;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease((ULONG_PTR)v6);
    return 3221225659LL;
  }
}
