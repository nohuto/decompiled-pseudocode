/*
 * XREFs of AlpcpReceiveSynchronousReply @ 0x14088AA00
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x14086392C (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x14088A87C (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpProcessSynchronousRequest @ 0x140A304CC (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     AlpcpSignalAndWait @ 0x140324E10 (AlpcpSignalAndWait.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     AlpcpWaitForSingleObject @ 0x140438750 (AlpcpWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     AlpcpInsertMessagePendingQueue @ 0x14088AD40 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpLogReceiveMessage @ 0x1408928A0 (AlpcpLogReceiveMessage.c)
 *     AlpcpCancelMessage @ 0x140894410 (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x140898D70 (AlpcpUnlockMessage.c)
 */

__int64 __fastcall AlpcpReceiveSynchronousReply(
        __int64 *a1,
        unsigned __int8 a2,
        ULONG_PTR *a3,
        int a4,
        LARGE_INTEGER *a5)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v8; // r13
  unsigned int v9; // ebp
  ULONG_PTR v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  signed __int64 BugCheckParameter4; // rax
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // edx
  int v17; // ecx
  _QWORD *v19; // rsi
  int v20; // ecx

  CurrentThread = KeGetCurrentThread();
  v8 = *a1;
  v9 = AlpcpSignalAndWait((__int64)a1, &CurrentThread[1].KernelStack, WrLpcReply, a2, a5, 1u);
  v10 = _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, 0LL);
  if ( !v10 )
  {
    if ( v9 )
      AlpcpWaitForSingleObject(&CurrentThread[1].KernelStack, WrLpcReply, 0, 0, 0LL);
    return 3221227265LL;
  }
  v11 = KeAbPreAcquire(v10 - 16, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 - 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v10 - 16), (__int64)v11, v10 - 16);
  if ( v12 )
    *((_BYTE *)v12 + 10) = 1;
  *(_BYTE *)(v10 - 32) |= 1u;
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 24), 0x10000uLL) + 0x10000;
  if ( BugCheckParameter4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, v10, 0x26uLL, BugCheckParameter4);
  v14 = *(_DWORD *)(v10 + 40);
  if ( (v14 & 0x800) != 0 )
  {
    v14 &= ~0x800u;
    *(_DWORD *)(v10 + 40) = v14;
  }
  --*(_WORD *)(v10 - 30);
  if ( (v14 & 7) != 5 )
  {
    if ( *(struct _KTHREAD **)(v10 + 32) != CurrentThread )
      goto LABEL_24;
    if ( !v9 )
      v9 = -1073740031;
    goto LABEL_38;
  }
  *(_DWORD *)(v10 + 40) = v14 & 0xFFFFFFF8;
  if ( !v9 )
    goto LABEL_11;
  if ( *(struct _KTHREAD **)(v10 + 32) == CurrentThread )
  {
LABEL_38:
    *(_QWORD *)(v10 + 32) = 0LL;
    --*(_WORD *)(v10 - 30);
    if ( (*(_DWORD *)(v10 + 40) & 0x80u) != 0 )
      AlpcpUnlockMessage(v10);
    else
      AlpcpCancelMessage(v8, v10, 0LL);
    return v9;
  }
  AlpcpWaitForSingleObject(&CurrentThread[1].KernelStack, WrLpcReply, 0, 0, 0LL);
  v9 = 0;
LABEL_11:
  v15 = *(_DWORD *)(v10 + 40);
  if ( (v15 & 0x80u) != 0 )
  {
LABEL_24:
    AlpcpUnlockMessage(v10);
    return 3221227265LL;
  }
  if ( (v15 & 0x200) != 0 )
  {
    v16 = (*(_QWORD *)(v10 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
    if ( !*(_QWORD *)(v10 + 144) )
      v16 = *(_QWORD *)(v10 + 136) != 0LL ? 0x80000000 : 0;
    v17 = v16 | 0x10000000;
    if ( !*(_QWORD *)(v10 + 152) )
      v17 = v16;
    if ( (v17 & a4) == 0 )
    {
      *(_WORD *)(v10 + 244) &= ~0x2000u;
LABEL_19:
      if ( AlpcpLogEnabled )
        AlpcpLogReceiveMessage(v10);
      *a3 = v10;
      return v9;
    }
  }
  *(_WORD *)(v10 + 244) |= 0x2000u;
  v19 = KeAbPreAcquire(v8 + 352, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(v8 + 352), 0, v19, v8 + 352);
  if ( v19 )
    *((_BYTE *)v19 + 10) = 1;
  v20 = *(_DWORD *)(v8 + 416);
  if ( (v20 & 0x40) == 0 )
  {
    if ( (*(_DWORD *)(v8 + 256) & 0x1000) == 0 || (v20 & 0x20) == 0 || !*(_QWORD *)(v10 + 32) )
    {
      ++*(_WORD *)(v10 - 30);
      AlpcpInsertMessagePendingQueue(v8, v10);
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
    KeAbPostRelease(v8 + 352);
    goto LABEL_19;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 352), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
  KeAbPostRelease(v8 + 352);
  AlpcpCancelMessage(v8, v10, 0LL);
  return 3221227264LL;
}
