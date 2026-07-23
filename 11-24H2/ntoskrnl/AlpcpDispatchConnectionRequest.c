/*
 * XREFs of AlpcpDispatchConnectionRequest @ 0x14089032C
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x140867F3C (AlpcpProcessConnectionRequest.c)
 *     NtSecureConnectPort @ 0x140890D60 (NtSecureConnectPort.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x140411C00 (ObReferenceObjectSafe.c)
 *     PsGetProcessJob @ 0x1404696D0 (PsGetProcessJob.c)
 *     PsGetJobEffectiveFreezeCount @ 0x1405E2830 (PsGetJobEffectiveFreezeCount.c)
 *     AlpcpSetOwnerPortMessage @ 0x140890C40 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14089A890 (AlpcpCompleteDispatchMessage.c)
 */

__int64 __fastcall AlpcpDispatchConnectionRequest(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  int v4; // r13d
  __int64 *v5; // r12
  volatile signed __int64 *v6; // rbx
  char *v7; // rdi
  __int64 v8; // rbp
  volatile signed __int64 *v9; // rdi
  char *v10; // r15
  __int64 v11; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  signed __int32 v13; // eax
  unsigned int v15; // ebx
  __int64 ProcessJob; // rax
  __int64 v17; // [rsp+60h] [rbp+8h]

  v1 = *a1;
  v2 = a1[1];
  v4 = *((_DWORD *)a1 + 12);
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v5 = *(__int64 **)(v1 + 16);
  v17 = v1;
  v6 = v5 - 2;
  v7 = (char *)KeAbPreAcquire((__int64)(v5 - 2), 0LL);
  if ( _InterlockedCompareExchange64(v5 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5 - 2, 0, v7, (__int64)(v5 - 2));
  if ( v7 )
    v7[10] = 1;
  v8 = *v5;
  if ( *v5 && ObReferenceObjectSafe(*v5) )
  {
    v9 = (volatile signed __int64 *)(v8 + 352);
    v10 = (char *)KeAbPreAcquire(v8 + 352, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 352), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(v8 + 352), 0, v10, v8 + 352);
    v11 = 0LL;
    if ( v10 )
      v10[10] = 1;
    if ( (*(_DWORD *)(v8 + 416) & 0x20) != 0 )
    {
      if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v5 - 2);
      KeAbPostRelease((ULONG_PTR)(v5 - 2));
      if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
      KeAbPostRelease(v8 + 352);
      v15 = -1073741769;
      goto LABEL_47;
    }
    if ( (*(_DWORD *)(*a1 + 256) & 0x800000) != 0 && (*(_DWORD *)(a1[1] + 40) & 0x200) == 0 )
    {
      if ( (*(_QWORD *)(v8 + 24) & 1) == 0 )
        v11 = *(_QWORD *)(v8 + 24);
      if ( v11 )
      {
        ProcessJob = PsGetProcessJob(v11);
        if ( ProcessJob )
        {
          if ( (unsigned int)PsGetJobEffectiveFreezeCount(ProcessJob) )
          {
            if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v5 - 2);
            KeAbPostRelease((ULONG_PTR)(v5 - 2));
            if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
            KeAbPostRelease(v8 + 352);
            v15 = -1073741770;
LABEL_47:
            ObfDereferenceObject((PVOID)v8);
            return v15;
          }
        }
      }
    }
    if ( (unsigned __int64)*(unsigned __int16 *)(v2 + 242) > *(_QWORD *)(v8 + 272) )
    {
      if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v5 - 2);
      KeAbPostRelease((ULONG_PTR)(v5 - 2));
      if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
      KeAbPostRelease(v8 + 352);
      v15 = -1073741789;
      goto LABEL_47;
    }
    if ( (v4 & 0x20000) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x20) != 0 )
      {
        if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v5 - 2);
        KeAbPostRelease((ULONG_PTR)(v5 - 2));
        if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
        KeAbPostRelease(v8 + 352);
        v15 = -1073741823;
        goto LABEL_47;
      }
      ++*(_WORD *)(v2 - 30);
      _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v2);
      ++*(_WORD *)(v2 - 30);
      *(_QWORD *)(v2 + 32) = CurrentThread;
    }
    *(_DWORD *)(v2 + 40) &= ~0x200u;
    *(_WORD *)(v2 + 244) |= 0x2000u;
    v13 = _InterlockedIncrement((volatile signed __int32 *)(v8 + 400));
    *(_QWORD *)(v2 + 120) = 0LL;
    *(_DWORD *)(v2 + 44) = v13;
    *(_QWORD *)(v2 + 184) = v5;
    *(_QWORD *)(v2 + 192) = v8;
    AlpcpSetOwnerPortMessage(v2, v17);
    a1[4] = v8;
    a1[2] = (__int64)v5;
    AlpcpCompleteDispatchMessage(a1);
    return 0LL;
  }
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5 - 2);
  KeAbPostRelease((ULONG_PTR)(v5 - 2));
  return 3221225527LL;
}
