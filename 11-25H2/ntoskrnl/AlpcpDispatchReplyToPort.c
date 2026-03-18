/*
 * XREFs of AlpcpDispatchReplyToPort @ 0x1408ACCE0
 * Callers:
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     AlpcpAcceptConnectPort @ 0x1409F5B30 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectSafe @ 0x140420490 (ObReferenceObjectSafe.c)
 *     AlpcpCompleteDispatchMessage @ 0x1408A9370 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpCancelMessage @ 0x1408AC700 (AlpcpCancelMessage.c)
 *     AlpcpClearOwnerPortMessage @ 0x1408AD120 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x1408AD160 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpLockBlobShared @ 0x1408AD220 (AlpcpLockBlobShared.c)
 */

__int64 __fastcall AlpcpDispatchReplyToPort(__int64 a1)
{
  _DWORD *v1; // r12
  ULONG_PTR v2; // rdi
  __int64 v4; // rbp
  __int64 v5; // rsi
  int v6; // eax
  __int64 *v7; // r15
  __int64 *v8; // r13
  __int64 v9; // r13
  volatile signed __int32 *v10; // rdx
  volatile signed __int32 *v11; // r14
  __int64 *v12; // rax
  __int64 *v13; // r12
  struct _KTHREAD *CurrentThread; // r14
  __int16 v15; // cx
  int v16; // eax
  __int16 v17; // cx
  unsigned int v18; // eax
  __int64 *v19; // rbp
  __int64 *v21; // r13
  signed __int32 v22[22]; // [rsp+0h] [rbp-58h] BYREF
  int v23; // [rsp+60h] [rbp+8h]
  volatile signed __int32 *Object; // [rsp+68h] [rbp+10h]

  v1 = 0LL;
  v2 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  v23 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v5 = *(_QWORD *)(v2 + 24);
  v6 = (*(_DWORD *)(v5 + 416) >> 1) & 3;
  if ( v6 == 2 )
  {
    v7 = *(__int64 **)(v5 + 16);
    v8 = KeAbPreAcquire((__int64)(v7 - 2), 0LL);
    if ( _InterlockedCompareExchange64(v7 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v7 - 2, 0, v8, (unsigned __int64)(v7 - 2));
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
    v9 = v7[2];
    v10 = (volatile signed __int32 *)v9;
  }
  else if ( v6 == 1 )
  {
    v7 = *(__int64 **)(v4 + 16);
    v21 = KeAbPreAcquire((__int64)(v7 - 2), 0LL);
    if ( _InterlockedCompareExchange64(v7 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v7 - 2, 0, v21, (unsigned __int64)(v7 - 2));
    if ( v21 )
      *((_BYTE *)v21 + 10) = 1;
    v9 = *v7;
    v10 = (volatile signed __int32 *)*v7;
    if ( v4 != v5 )
      v10 = (volatile signed __int32 *)v7[1];
  }
  else
  {
    v7 = *(__int64 **)(v5 + 16);
    AlpcpLockBlobShared(v7);
    v10 = (volatile signed __int32 *)v7[1];
    v9 = *v7;
  }
  Object = v10;
  if ( (*(_DWORD *)(v4 + 416) & 0x20) != 0 && (*(_DWORD *)(v4 + 256) & 0x1000) == 0
    || (*(_DWORD *)(v5 + 416) & 0x20) != 0 && (*(_DWORD *)(v5 + 256) & 0x1000) == 0 )
  {
    goto LABEL_44;
  }
  if ( (unsigned __int64)*(unsigned __int16 *)(a1 + 52) <= *(_QWORD *)(v9 + 272) )
  {
    v11 = v10;
    if ( ObReferenceObjectSafe(v9) )
      v1 = (_DWORD *)v9;
    if ( Object && !ObReferenceObjectSafe((__int64)Object) )
      v11 = 0LL;
    if ( v1 )
    {
      if ( !v11 )
      {
        ObfDereferenceObject(v1);
        goto LABEL_44;
      }
      if ( (v1[104] & 0x20) == 0 && (v11[104] & 0x20) == 0 )
      {
        *(_QWORD *)(v2 + 200) = 0LL;
        if ( *(_WORD *)(a1 + 54) == 11 )
        {
          v12 = KeAbPreAcquire(v5 + 352, 0LL);
          v13 = v12;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 352), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v5 + 352), v12, v5 + 352);
          if ( v13 )
            *((_BYTE *)v13 + 10) = 1;
          *(_DWORD *)(v5 + 416) &= ~8u;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 352));
          KeAbPostRelease(v5 + 352);
        }
        CurrentThread = KeGetCurrentThread();
        *(_WORD *)(v2 + 242) = *(_WORD *)(a1 + 52);
        *(_WORD *)(v2 + 240) = *(_WORD *)(a1 + 52) - 40;
        v15 = *(_WORD *)(a1 + 54);
        *(_WORD *)(v2 + 244) = v15;
        *(_WORD *)(v2 + 246) = *(_WORD *)(a1 + 56);
        v16 = *(_DWORD *)(v2 + 40);
        *(_OWORD *)(v2 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
        if ( (v23 & 0x10000) != 0 )
        {
          v17 = v15 & 0xDFFF;
          v18 = v16 | 0x200;
        }
        else
        {
          v17 = v15 | 0x2000;
          v18 = v16 & 0xFFFFFDFF;
        }
        *(_WORD *)(v2 + 244) = v17;
        *(_DWORD *)(v2 + 40) = v18 | 0x10000;
        _InterlockedOr(v22, 0);
        AlpcpClearOwnerPortMessage(v2);
        PsReferenceSiloContext((void *)v4);
        *(_DWORD *)(v2 + 40) |= 0x1000u;
        *(_QWORD *)(v2 + 24) = v4;
        *(_DWORD *)(v2 + 44) = _InterlockedIncrement(Object + 100);
        *(_QWORD *)(v2 + 120) = *((_QWORD *)Object + 7);
        ObfDereferenceObject((PVOID)Object);
        if ( *(_QWORD *)(v2 + 16) )
          AlpcpRemoveMessageFromPendingQueue(v2);
        v19 = KeAbPreAcquire(v9 + 352, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 352), 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)(v9 + 352), 0, v19, v9 + 352);
        if ( v19 )
          *((_BYTE *)v19 + 10) = 1;
        if ( (v23 & 0x20000) != 0 )
        {
          *(_DWORD *)(v2 + 40) &= ~0x100u;
          *(_QWORD *)(v2 + 32) = CurrentThread;
          *(_WORD *)(v2 - 30) += 2;
          _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v2);
        }
        *(_QWORD *)(a1 + 32) = v9;
        *(_QWORD *)(a1 + 16) = v7;
        if ( (*(_BYTE *)(v2 + 160) & 1) != 0 )
          *(_DWORD *)(a1 + 48) |= 8u;
        AlpcpCompleteDispatchMessage(a1);
        return 0LL;
      }
      ObfDereferenceObject(v1);
    }
    else if ( !v11 )
    {
      goto LABEL_44;
    }
    ObfDereferenceObject((PVOID)v11);
LABEL_44:
    if ( _InterlockedCompareExchange64(v7 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v7 - 2);
    KeAbPostRelease((ULONG_PTR)(v7 - 2));
    AlpcpCancelMessage(v4, v2, 0x10000);
    return 3221225527LL;
  }
  if ( _InterlockedCompareExchange64(v7 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v7 - 2);
  KeAbPostRelease((ULONG_PTR)(v7 - 2));
  AlpcpUnlockMessage(v2);
  return 3221225507LL;
}
