/*
 * XREFs of CmFcpManagerPublishFeatureUsageData @ 0x140A90804
 * Callers:
 *     CmFcShutdownSystem @ 0x1407D5BE4 (CmFcShutdownSystem.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x1407E4EE8 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x140A90644 (CmFcpManagerProcessUsageDataProviders.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C4D180 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     CmpWorkItemQueueWork @ 0x1403A68B0 (CmpWorkItemQueueWork.c)
 *     RtlpFcInitializeDelayedFeatureUsageDataBuffer @ 0x1404B41F0 (RtlpFcInitializeDelayedFeatureUsageDataBuffer.c)
 *     RtlpFcSizeOfFeatureUsageDataBuffer @ 0x1405F2A84 (RtlpFcSizeOfFeatureUsageDataBuffer.c)
 *     CmFcpManagerAddBufferIntoPublishListAndSetPublishState @ 0x1407E4D98 (CmFcpManagerAddBufferIntoPublishListAndSetPublishState.c)
 *     RtlUpdateSwapReference @ 0x140A36190 (RtlUpdateSwapReference.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

void __fastcall CmFcpManagerPublishFeatureUsageData(__int64 a1, char a2)
{
  char v3; // bp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r12
  unsigned int v11; // edx
  unsigned int v12; // r13d
  _DWORD *Pool2; // rax
  _DWORD *v14; // r15
  size_t v15; // [rsp+50h] [rbp+8h]

  v3 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1792), 2, 0) == 1 )
  {
    if ( !a2 )
    {
      CurrentThread = KeGetCurrentThread();
      v5 = (unsigned __int64 *)(a1 + 1400);
      --CurrentThread->KernelApcDisable;
      v6 = KeAbPreAcquire(a1 + 1400, 0LL);
      v7 = v6;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
        ExfAcquirePushLockExclusiveEx(v5, (__int64)v6, (__int64)v5);
      if ( v7 )
        *((_BYTE *)v7 + 10) = 1;
      v3 = 1;
    }
    v8 = *(_QWORD *)(a1 + 944) & 1LL;
    v9 = *(_QWORD *)(a1 + 8 * v8 + 1320);
    if ( *(_BYTE *)(a1 + 1784) )
    {
      if ( *(_DWORD *)(v9 + 16) )
      {
        v10 = ((_BYTE)v8 - 1) & 1;
        v11 = (*(_DWORD *)(a1 + 1336) + 511 + *(_DWORD *)(v9 + 20)) & 0xFFFFFE00;
        *(_DWORD *)(a1 + 1336) = v11;
        v12 = v11 + 508;
        v15 = RtlpFcSizeOfFeatureUsageDataBuffer(v11 + 508);
        Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
        v14 = Pool2;
        if ( Pool2 )
        {
          RtlpFcInitializeDelayedFeatureUsageDataBuffer(Pool2, v15);
          v14[7] = v12;
          *(_QWORD *)(a1 + 8 * v10 + 1320) = v14;
          RtlUpdateSwapReference(a1 + 944, v10);
          if ( CmFcpManagerAddBufferIntoPublishListAndSetPublishState(a1, v9) )
            CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a1 + 1616));
        }
      }
    }
    else
    {
      *(_DWORD *)(v9 + 16) = 0;
    }
    if ( v3 == 1 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1400), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1400));
      KeAbPostRelease(a1 + 1400);
      KeLeaveCriticalRegion();
    }
  }
}
