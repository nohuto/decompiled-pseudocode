/*
 * XREFs of AlpcpDispatchReplyToWaitingThread @ 0x140899F40
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
 *     KeReleaseSemaphoreEx @ 0x1403AB4BC (KeReleaseSemaphoreEx.c)
 *     AlpcpLogWaitForReply @ 0x1407409E0 (AlpcpLogWaitForReply.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14089BA70 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14089BCC0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 *     AlpcpLogSendMessage @ 0x140AA49B4 (AlpcpLogSendMessage.c)
 */

__int64 __fastcall AlpcpDispatchReplyToWaitingThread(__int64 a1)
{
  ULONG_PTR v1; // rdi
  void *v2; // r15
  unsigned int v4; // r13d
  __int64 v5; // rbp
  int v6; // ecx
  int v7; // r12d
  char *v8; // rax
  char *v9; // r13
  struct _KTHREAD *CurrentThread; // r8
  __int16 v11; // dx
  __int16 v12; // dx
  unsigned int v13; // ecx
  __int64 v14; // rax
  unsigned __int64 *v15; // r15
  char *v16; // rax
  char *v17; // r13
  signed __int32 v18; // eax
  int v19; // ecx
  int v20; // r12d
  char *v21; // r14
  __int64 v22; // r9
  bool v24; // zf
  __int64 v25; // r15
  signed __int64 *v26; // rbx
  char *v27; // r14
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // [rsp+30h] [rbp-58h]
  unsigned int v31; // [rsp+90h] [rbp+8h]
  __int16 v32; // [rsp+98h] [rbp+10h]
  __int64 v33; // [rsp+A0h] [rbp+18h]
  struct _KTHREAD *v34; // [rsp+A8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(void **)a1;
  v4 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v5 = *(_QWORD *)(v1 + 24);
  v6 = *(_DWORD *)(v1 + 40);
  v33 = *(_QWORD *)(v1 + 32);
  v7 = *(_DWORD *)(v5 + 416) >> 1;
  v31 = v4;
  v32 = v6;
  if ( (unsigned __int64)*(unsigned __int16 *)(a1 + 52) > *(_QWORD *)(v5 + 272) )
  {
    AlpcpUnlockMessage(v1);
    return 3221225507LL;
  }
  else
  {
    *(_QWORD *)(v1 + 24) = 0LL;
    *(_QWORD *)(v1 + 200) = 0LL;
    if ( *(_WORD *)(a1 + 54) == 11 )
    {
      v8 = (char *)KeAbPreAcquire(v5 + 352, 0LL);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 352), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v5 + 352), v8, v5 + 352);
      if ( v9 )
        v9[10] = 1;
      *(_DWORD *)(v5 + 416) &= ~8u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 352));
      KeAbPostRelease(v5 + 352);
      v6 = *(_DWORD *)(v1 + 40);
      v4 = v31;
    }
    CurrentThread = KeGetCurrentThread();
    *(_WORD *)(v1 + 242) = *(_WORD *)(a1 + 52);
    v34 = CurrentThread;
    *(_WORD *)(v1 + 240) = *(_WORD *)(a1 + 52) - 40;
    v11 = *(_WORD *)(a1 + 54);
    *(_WORD *)(v1 + 244) = v11;
    *(_WORD *)(v1 + 246) = *(_WORD *)(a1 + 56);
    *(_OWORD *)(v1 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
    if ( (v4 & 0x10000) != 0 )
    {
      v12 = v11 & 0xDFFF;
      v13 = v6 | 0x200;
    }
    else
    {
      v12 = v11 | 0x2000;
      v13 = v6 & 0xFFFFFDFF;
    }
    *(_DWORD *)(v1 + 40) = v13;
    *(_WORD *)(v1 + 244) = v12;
    PsReferenceSiloContext(v2);
    *(_DWORD *)(v1 + 40) |= 0x1000u;
    *(_QWORD *)(v1 + 24) = v2;
    if ( (v4 & 0x20000) != 0 )
    {
      _InterlockedExchange64((volatile __int64 *)&v34[1].RelativeTimerBias, v1);
      *(_DWORD *)(v1 + 40) |= 0x800u;
      ++*(_WORD *)(v1 - 30);
    }
    v14 = *(_QWORD *)(v1 + 16);
    *(_DWORD *)(v1 + 40) |= 0x100u;
    v30 = v14;
    if ( v14 )
    {
      v15 = (unsigned __int64 *)(v14 + 176);
      v16 = (char *)KeAbPreAcquire(v14 + 176, 0LL);
      v17 = v16;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
        ExfAcquirePushLockExclusiveEx(v15, v16, (__int64)v15);
      if ( v17 )
        v17[10] = 1;
      --*(_DWORD *)(v30 + 456);
      *(_DWORD *)(v1 + 40) &= 0xFFFFFFF8;
      *(_QWORD *)(v1 + 16) = 0LL;
      **(_QWORD **)(v1 + 8) = *(_QWORD *)v1;
      *(_QWORD *)(*(_QWORD *)v1 + 8LL) = *(_QWORD *)(v1 + 8);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v15);
      KeAbPostRelease((ULONG_PTR)v15);
      --*(_WORD *)(v1 - 30);
      v4 = v31;
    }
    *(_DWORD *)(v1 + 40) = *(_DWORD *)(v1 + 40) & 0xFFFFFFF8 | 5;
    v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 400), 1u);
    v19 = *(_DWORD *)(v1 + 40);
    v20 = v7 & 3;
    *(_DWORD *)(v1 + 44) = v18 + 1;
    *(_DWORD *)(v1 + 40) = (8 * v20) | v19 & 0xFFFFFF87;
    if ( v20 == 1 )
    {
      v25 = *(_QWORD *)(v5 + 16);
      v26 = (signed __int64 *)(v25 - 16);
      v27 = (char *)KeAbPreAcquire(v25 - 16, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v25 - 16), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v25 - 16), 0, v27, v25 - 16);
      if ( v27 )
        v27[10] = 1;
      v28 = *(_QWORD *)(v25 + 8);
      v29 = 0LL;
      if ( v28 )
        v29 = *(_QWORD *)(v28 + 56);
      *(_QWORD *)(v1 + 120) = v29;
      if ( _InterlockedCompareExchange64(v26, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v26);
      KeAbPostRelease((ULONG_PTR)v26);
    }
    else
    {
      *(_QWORD *)(v1 + 120) = *(_QWORD *)(v5 + 56);
    }
    if ( *(_QWORD *)(v1 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v1);
      *(_QWORD *)(v1 + 176) = 0LL;
    }
    v21 = (char *)KeAbPreAcquire(v5 + 352, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 352), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(v5 + 352), 0, v21, v5 + 352);
    if ( v21 )
      v21[10] = 1;
    if ( *(_QWORD *)(v1 + 144) )
      AlpcpExposeViewAttributeInSenderContext(v5, v1);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v5 + 352));
    KeAbPostRelease(v5 + 352);
    if ( AlpcpLogEnabled )
      AlpcpLogSendMessage(v1);
    if ( (v4 & 0x20000) != 0 )
    {
      v24 = AlpcpLogEnabled == 0;
      *(_QWORD *)(v1 + 32) = v34;
      *(_QWORD *)(a1 + 24) = v33;
      if ( !v24 )
        AlpcpLogWaitForReply(v1);
      AlpcpUnlockMessage(v1);
    }
    else
    {
      *(_QWORD *)(v1 + 32) = 0LL;
      --*(_WORD *)(v1 - 30);
      AlpcpUnlockMessage(v1);
      if ( (v4 & 4) != 0 )
        *(_QWORD *)(a1 + 24) = v33;
      else
        KeReleaseSemaphoreEx((volatile signed __int32 *)(v33 + 1304), 1LL, 1, v22, (v4 >> 21) & 2, 0LL);
    }
    if ( (v32 & 0x1000) != 0 )
      ObfDereferenceObject((PVOID)v5);
    return 0LL;
  }
}
