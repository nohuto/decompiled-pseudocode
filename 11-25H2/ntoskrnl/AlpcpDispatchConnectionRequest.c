/*
 * XREFs of AlpcpDispatchConnectionRequest @ 0x14098D0EC
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x140914AA0 (AlpcpProcessConnectionRequest.c)
 *     NtSecureConnectPort @ 0x14098DB40 (NtSecureConnectPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectSafe @ 0x140420490 (ObReferenceObjectSafe.c)
 *     PsGetProcessJob @ 0x140470690 (PsGetProcessJob.c)
 *     PsGetJobEffectiveFreezeCount @ 0x1405D936C (PsGetJobEffectiveFreezeCount.c)
 *     AlpcpCompleteDispatchMessage @ 0x1408A9370 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpSetOwnerPortMessage @ 0x14098DA20 (AlpcpSetOwnerPortMessage.c)
 */

__int64 __fastcall AlpcpDispatchConnectionRequest(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  int v4; // r13d
  __int64 *v5; // r12
  volatile signed __int64 *v6; // rbx
  __int64 *v7; // rdi
  __int64 v8; // rbp
  volatile signed __int64 *v10; // rdi
  __int64 *v11; // r15
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  signed __int32 v14; // eax
  unsigned int v15; // ebx
  __int64 ProcessJob; // rax
  __int64 v17; // [rsp+60h] [rbp+8h]

  v1 = *(_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v5 = *(__int64 **)(v1 + 16);
  v17 = v1;
  v6 = v5 - 2;
  v7 = KeAbPreAcquire((__int64)(v5 - 2), 0LL);
  if ( _InterlockedCompareExchange64(v5 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5 - 2, 0, v7, (unsigned __int64)(v5 - 2));
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  v8 = *v5;
  if ( *v5 && ObReferenceObjectSafe(*v5) )
  {
    v10 = (volatile signed __int64 *)(v8 + 352);
    v11 = KeAbPreAcquire(v8 + 352, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 352), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(v8 + 352), 0, v11, v8 + 352);
    v12 = 0LL;
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    if ( (*(_DWORD *)(v8 + 416) & 0x20) != 0 )
    {
      if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v5 - 2);
      KeAbPostRelease((ULONG_PTR)(v5 - 2));
      if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
      KeAbPostRelease(v8 + 352);
      v15 = -1073741769;
      goto LABEL_48;
    }
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 256LL) & 0x800000) != 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 40LL) & 0x200) == 0 )
    {
      if ( (*(_QWORD *)(v8 + 24) & 1) == 0 )
        v12 = *(_QWORD *)(v8 + 24);
      if ( v12 )
      {
        ProcessJob = PsGetProcessJob(v12);
        if ( ProcessJob )
        {
          if ( (unsigned int)PsGetJobEffectiveFreezeCount(ProcessJob) )
          {
            if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v5 - 2);
            KeAbPostRelease((ULONG_PTR)(v5 - 2));
            if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
            KeAbPostRelease(v8 + 352);
            v15 = -1073741770;
LABEL_48:
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
      if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
      KeAbPostRelease(v8 + 352);
      v15 = -1073741789;
      goto LABEL_48;
    }
    if ( (v4 & 0x20000) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x20) != 0 )
      {
        if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v5 - 2);
        KeAbPostRelease((ULONG_PTR)(v5 - 2));
        if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
        KeAbPostRelease(v8 + 352);
        v15 = -1073741823;
        goto LABEL_48;
      }
      ++*(_WORD *)(v2 - 30);
      _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v2);
      ++*(_WORD *)(v2 - 30);
      *(_QWORD *)(v2 + 32) = CurrentThread;
    }
    *(_DWORD *)(v2 + 40) &= ~0x200u;
    *(_WORD *)(v2 + 244) |= 0x2000u;
    v14 = _InterlockedIncrement((volatile signed __int32 *)(v8 + 400));
    *(_QWORD *)(v2 + 120) = 0LL;
    *(_DWORD *)(v2 + 44) = v14;
    *(_QWORD *)(v2 + 184) = v5;
    *(_QWORD *)(v2 + 192) = v8;
    AlpcpSetOwnerPortMessage(v2, v17);
    *(_QWORD *)(a1 + 32) = v8;
    *(_QWORD *)(a1 + 16) = v5;
    AlpcpCompleteDispatchMessage(a1);
    return 0LL;
  }
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5 - 2);
  KeAbPostRelease((ULONG_PTR)(v5 - 2));
  return 3221225527LL;
}
