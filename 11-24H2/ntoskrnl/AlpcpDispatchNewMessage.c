/*
 * XREFs of AlpcpDispatchNewMessage @ 0x140890E80
 * Callers:
 *     AlpcpSendMessage @ 0x14088E810 (AlpcpSendMessage.c)
 *     AlpcpAcceptConnectPort @ 0x1409F4F00 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ObReferenceObjectSafe @ 0x14041D310 (ObReferenceObjectSafe.c)
 *     PsGetProcessJob @ 0x14046EFC0 (PsGetProcessJob.c)
 *     PsGetJobEffectiveFreezeCount @ 0x1405E5308 (PsGetJobEffectiveFreezeCount.c)
 *     AlpcpCompleteDispatchMessage @ 0x1408912A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x140892E2C (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 *     AlpcpUnlockMessage @ 0x140898D70 (AlpcpUnlockMessage.c)
 */

__int64 __fastcall AlpcpDispatchNewMessage(__int64 *a1)
{
  __int64 v1; // r13
  int v2; // eax
  ULONG_PTR v4; // rdi
  __int64 *v5; // r12
  int v6; // ebx
  _QWORD *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rsi
  _QWORD *v10; // r15
  _QWORD *v11; // r15
  __int16 v12; // cx
  __int16 v13; // cx
  __int64 v15; // rcx
  __int64 ProcessJob; // rax
  int v17; // [rsp+60h] [rbp+8h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp+10h]

  v1 = *a1;
  v2 = *((_DWORD *)a1 + 12);
  v4 = a1[1];
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v5 = *(__int64 **)(v1 + 16);
  v17 = v2;
  CurrentThread = KeGetCurrentThread();
  v6 = (*(_DWORD *)(v1 + 416) >> 1) & 3;
  v7 = KeAbPreAcquire((__int64)(v5 - 2), 0LL);
  if ( _InterlockedCompareExchange64(v5 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5 - 2, 0, v7, (__int64)(v5 - 2));
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  if ( v6 == 2 )
  {
    v8 = *v5;
    v9 = v5[1];
  }
  else if ( v6 == 1 )
  {
    v8 = *v5;
    v9 = *v5;
  }
  else
  {
    v8 = v5[2];
    v9 = v8;
  }
  if ( v8 && !ObReferenceObjectSafe(v8) )
    v8 = 0LL;
  if ( v9 && !ObReferenceObjectSafe(v9) )
    v9 = 0LL;
  if ( v8 && v9 )
  {
    v10 = KeAbPreAcquire(v8 + 352, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 352), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(v8 + 352), 0, v10, v8 + 352);
    if ( v10 )
      *((_BYTE *)v10 + 10) = 1;
    if ( v9 != v8 )
    {
      v11 = KeAbPreAcquire(v9 + 352, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 352), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v9 + 352), 0, v11, v9 + 352);
      if ( v11 )
        *((_BYTE *)v11 + 10) = 1;
    }
    if ( (*(_DWORD *)(v8 + 416) & 0x20) != 0
      || (*(_DWORD *)(v9 + 416) & 0x20) != 0
      || (*(_DWORD *)(v1 + 416) & 0x20) != 0 && (*(_DWORD *)(v1 + 256) & 0x1000) == 0 )
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v5, v8, v9);
      AlpcpUnlockMessage(v4);
      return 3221225527LL;
    }
    else if ( (*(_DWORD *)(*a1 + 256) & 0x800000) != 0
           && (*(_DWORD *)(a1[1] + 40) & 0x200) == 0
           && (v15 = *(_QWORD *)(v8 + 24), (v15 & 1) == 0)
           && v15
           && (ProcessJob = PsGetProcessJob(v15)) != 0
           && (unsigned int)PsGetJobEffectiveFreezeCount(ProcessJob) )
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v5, v8, v9);
      AlpcpUnlockMessage(v4);
      return 3221225526LL;
    }
    else if ( (*(_DWORD *)(v8 + 256) & 0x20000) != 0 )
    {
      if ( (unsigned __int64)*((unsigned __int16 *)a1 + 26) > *(_QWORD *)(v8 + 272) )
      {
        AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v5, v8, v9);
        AlpcpUnlockMessage(v4);
        return 3221225507LL;
      }
      else
      {
        *(_QWORD *)(v4 + 200) = 0LL;
        *(_WORD *)(v4 + 242) = *((_WORD *)a1 + 26);
        *(_WORD *)(v4 + 240) = *((_WORD *)a1 + 26) - 40;
        v12 = *((_WORD *)a1 + 27);
        *(_WORD *)(v4 + 244) = v12;
        *(_WORD *)(v4 + 246) = *((_WORD *)a1 + 28);
        *(_OWORD *)(v4 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
        if ( (v17 & 0x10000) != 0 )
        {
          *(_DWORD *)(v4 + 40) |= 0x200u;
          v13 = v12 & 0xDFFF;
        }
        else
        {
          *(_DWORD *)(v4 + 40) &= ~0x200u;
          v13 = v12 | 0x2000;
        }
        *(_WORD *)(v4 + 244) = v13;
        PsReferenceSiloContext((void *)v1);
        *(_DWORD *)(v4 + 40) |= 0x1000u;
        *(_QWORD *)(v4 + 24) = v1;
        *(_DWORD *)(v4 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v9 + 400));
        *(_QWORD *)(v4 + 120) = *(_QWORD *)(v9 + 56);
        *(_QWORD *)(v4 + 184) = v5;
        *(_QWORD *)(v4 + 192) = *v5;
        if ( v9 != v8 )
        {
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 352), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v9 + 352));
          KeAbPostRelease(v9 + 352);
        }
        if ( (v17 & 0x20000) != 0 )
        {
          *(_DWORD *)(v4 + 40) &= ~0x100u;
          *(_QWORD *)(v4 + 32) = CurrentThread;
          *(_WORD *)(v4 - 30) += 2;
          _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v4);
        }
        a1[4] = v8;
        a1[2] = (__int64)v5;
        AlpcpCompleteDispatchMessage(a1);
        ObfDereferenceObject((PVOID)v9);
        return 0LL;
      }
    }
    else
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v5, v8, v9);
      AlpcpUnlockMessage(v4);
      return 3221227271LL;
    }
  }
  else
  {
    if ( _InterlockedCompareExchange64(v5 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5 - 2);
    KeAbPostRelease((ULONG_PTR)(v5 - 2));
    if ( v8 )
      ObfDereferenceObject((PVOID)v8);
    if ( v9 )
      ObfDereferenceObject((PVOID)v9);
    AlpcpUnlockMessage(v4);
    return 3221225527LL;
  }
}
