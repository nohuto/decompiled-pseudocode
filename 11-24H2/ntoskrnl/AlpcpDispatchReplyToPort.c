/*
 * XREFs of AlpcpDispatchReplyToPort @ 0x14089BF40
 * Callers:
 *     AlpcpSendMessage @ 0x140898440 (AlpcpSendMessage.c)
 *     AlpcpDispatchMessage @ 0x14089BE90 (AlpcpDispatchMessage.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x140411C00 (ObReferenceObjectSafe.c)
 *     AlpcpCompleteDispatchMessage @ 0x14089A890 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpClearOwnerPortMessage @ 0x14089C36C (AlpcpClearOwnerPortMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x14089C3A0 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpCancelMessage @ 0x14089C73C (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 */

__int64 __fastcall AlpcpDispatchReplyToPort(__int64 a1)
{
  ULONG_PTR v1; // rdi
  __int64 v2; // r14
  __int64 v4; // rsi
  int v5; // eax
  __int64 *v6; // r12
  char *v7; // r15
  __int64 v8; // r13
  __int64 v9; // r12
  _DWORD *v10; // rbp
  _DWORD *v11; // r15
  char *v12; // rax
  char *v13; // r15
  struct _KTHREAD *CurrentThread; // r15
  __int16 v15; // cx
  int v16; // eax
  __int16 v17; // cx
  unsigned int v18; // eax
  char *v19; // rbp
  __int64 *v21; // r12
  char *v22; // r15
  __int64 *v23; // rbx
  __int64 *v24; // r12
  char *v25; // r15
  signed __int32 v26[22]; // [rsp+0h] [rbp-58h] BYREF
  int v27; // [rsp+60h] [rbp+8h]
  __int64 *v28; // [rsp+68h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)a1;
  v27 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = *(_QWORD *)(v1 + 24);
  v5 = (*(_DWORD *)(v4 + 416) >> 1) & 3;
  if ( v5 == 2 )
  {
    v6 = *(__int64 **)(v4 + 16);
    v28 = v6;
    v7 = (char *)KeAbPreAcquire((__int64)(v6 - 2), 0LL);
    if ( _InterlockedCompareExchange64(v6 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v6 - 2, 0, v7, (__int64)(v6 - 2));
    if ( v7 )
      v7[10] = 1;
    v8 = v6[2];
LABEL_7:
    v9 = v8;
    goto LABEL_8;
  }
  if ( v5 == 1 )
  {
    v24 = *(__int64 **)(v2 + 16);
    v28 = v24;
    v25 = (char *)KeAbPreAcquire((__int64)(v24 - 2), 0LL);
    if ( _InterlockedCompareExchange64(v24 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v24 - 2, 0, v25, (__int64)(v24 - 2));
    if ( v25 )
      v25[10] = 1;
    v8 = *v24;
    if ( v2 == v4 )
      goto LABEL_7;
    v9 = v24[1];
  }
  else
  {
    v21 = *(__int64 **)(v4 + 16);
    v28 = v21;
    v22 = (char *)KeAbPreAcquire((__int64)(v21 - 2), 0LL);
    if ( _InterlockedCompareExchange64(v21 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v21 - 2, 0, v22, (__int64)(v21 - 2));
    if ( v22 )
      v22[10] = 1;
    v8 = *v21;
    v9 = v21[1];
  }
LABEL_8:
  if ( (*(_DWORD *)(v2 + 416) & 0x20) != 0 && (*(_DWORD *)(v2 + 256) & 0x1000) == 0
    || (*(_DWORD *)(v4 + 416) & 0x20) != 0 && (*(_DWORD *)(v4 + 256) & 0x1000) == 0 )
  {
    v23 = v28;
    if ( _InterlockedCompareExchange64(v28 - 2, 0LL, 17LL) == 17 )
      goto LABEL_69;
LABEL_68:
    ExfReleasePushLockShared(v23 - 2);
LABEL_69:
    KeAbPostRelease((ULONG_PTR)(v23 - 2));
    AlpcpCancelMessage(v2, v1, 0x10000LL);
    return 3221225527LL;
  }
  if ( (unsigned __int64)*(unsigned __int16 *)(a1 + 52) <= *(_QWORD *)(v8 + 272) )
  {
    v10 = (_DWORD *)v9;
    v11 = 0LL;
    if ( ObReferenceObjectSafe(v8) )
      v11 = (_DWORD *)v8;
    if ( v9 && !ObReferenceObjectSafe(v9) )
      v10 = 0LL;
    if ( v11 )
    {
      if ( !v10 )
      {
        ObfDereferenceObject(v11);
LABEL_50:
        v23 = v28;
        if ( _InterlockedCompareExchange64(v28 - 2, 0LL, 17LL) == 17 )
          goto LABEL_69;
        goto LABEL_68;
      }
      if ( (v11[104] & 0x20) == 0 && (v10[104] & 0x20) == 0 )
      {
        *(_QWORD *)(v1 + 200) = 0LL;
        if ( *(_WORD *)(a1 + 54) == 11 )
        {
          v12 = (char *)KeAbPreAcquire(v4 + 352, 0LL);
          v13 = v12;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 352), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 352), v12, v4 + 352);
          if ( v13 )
            v13[10] = 1;
          *(_DWORD *)(v4 + 416) &= ~8u;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 352));
          KeAbPostRelease(v4 + 352);
        }
        CurrentThread = KeGetCurrentThread();
        *(_WORD *)(v1 + 242) = *(_WORD *)(a1 + 52);
        *(_WORD *)(v1 + 240) = *(_WORD *)(a1 + 52) - 40;
        v15 = *(_WORD *)(a1 + 54);
        *(_WORD *)(v1 + 244) = v15;
        *(_WORD *)(v1 + 246) = *(_WORD *)(a1 + 56);
        v16 = *(_DWORD *)(v1 + 40);
        *(_OWORD *)(v1 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
        if ( (v27 & 0x10000) != 0 )
        {
          v17 = v15 & 0xDFFF;
          v18 = v16 | 0x200;
        }
        else
        {
          v17 = v15 | 0x2000;
          v18 = v16 & 0xFFFFFDFF;
        }
        *(_WORD *)(v1 + 244) = v17;
        *(_DWORD *)(v1 + 40) = v18 | 0x10000;
        _InterlockedOr(v26, 0);
        AlpcpClearOwnerPortMessage(v1);
        PsReferenceSiloContext((void *)v2);
        *(_DWORD *)(v1 + 40) |= 0x1000u;
        *(_QWORD *)(v1 + 24) = v2;
        *(_DWORD *)(v1 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v9 + 400));
        *(_QWORD *)(v1 + 120) = *(_QWORD *)(v9 + 56);
        ObfDereferenceObject((PVOID)v9);
        if ( *(_QWORD *)(v1 + 16) )
          AlpcpRemoveMessageFromPendingQueue(v1);
        v19 = (char *)KeAbPreAcquire(v8 + 352, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 352), 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)(v8 + 352), 0, v19, v8 + 352);
        if ( v19 )
          v19[10] = 1;
        if ( (v27 & 0x20000) != 0 )
        {
          *(_DWORD *)(v1 + 40) &= ~0x100u;
          *(_QWORD *)(v1 + 32) = CurrentThread;
          *(_WORD *)(v1 - 30) += 2;
          _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v1);
        }
        *(_QWORD *)(a1 + 16) = v28;
        *(_QWORD *)(a1 + 32) = v8;
        if ( (*(_BYTE *)(v1 + 160) & 1) != 0 )
          *(_DWORD *)(a1 + 48) |= 8u;
        AlpcpCompleteDispatchMessage(a1);
        return 0LL;
      }
      ObfDereferenceObject(v11);
    }
    else if ( !v10 )
    {
      goto LABEL_50;
    }
    ObfDereferenceObject(v10);
    goto LABEL_50;
  }
  if ( _InterlockedCompareExchange64(v28 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v28 - 2);
  KeAbPostRelease((ULONG_PTR)(v28 - 2));
  AlpcpUnlockMessage(v1);
  return 3221225507LL;
}
