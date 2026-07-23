/*
 * XREFs of CmFcpManagerPublishFeatureUsageData @ 0x140A8CF00
 * Callers:
 *     CmFcShutdownSystem @ 0x1407D60D4 (CmFcShutdownSystem.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x1407E54B8 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x140A8CD40 (CmFcpManagerProcessUsageDataProviders.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C4F31C (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     CmpWorkItemQueueWork @ 0x14021E9B0 (CmpWorkItemQueueWork.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlpFcInitializeDelayedFeatureUsageDataBuffer @ 0x1404AEA10 (RtlpFcInitializeDelayedFeatureUsageDataBuffer.c)
 *     RtlpFcSizeOfFeatureUsageDataBuffer @ 0x1405F00C4 (RtlpFcSizeOfFeatureUsageDataBuffer.c)
 *     CmFcpManagerAddBufferIntoPublishListAndSetPublishState @ 0x1407E536C (CmFcpManagerAddBufferIntoPublishListAndSetPublishState.c)
 *     RtlUpdateSwapReference @ 0x140A2B6A0 (RtlUpdateSwapReference.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void __fastcall CmFcpManagerPublishFeatureUsageData(__int64 a1, char a2)
{
  char v3; // bp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rsi
  char *v6; // rax
  char *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r12
  unsigned int v11; // edx
  unsigned int v12; // r13d
  _DWORD *Pool2; // rax
  _DWORD *v14; // r15
  ULONG_PTR v15; // [rsp+50h] [rbp+8h]

  v3 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1864), 2, 0) == 1 )
  {
    if ( !a2 )
    {
      CurrentThread = KeGetCurrentThread();
      v5 = (unsigned __int64 *)(a1 + 1472);
      --CurrentThread->KernelApcDisable;
      v6 = (char *)KeAbPreAcquire(a1 + 1472, 0LL);
      v7 = v6;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
        ExfAcquirePushLockExclusiveEx(v5, v6, (__int64)v5);
      if ( v7 )
        v7[10] = 1;
      v3 = 1;
    }
    v8 = *(_QWORD *)(a1 + 944) & 1LL;
    v9 = *(_QWORD *)(a1 + 8 * v8 + 1392);
    if ( *(_BYTE *)(a1 + 1856) )
    {
      if ( *(_DWORD *)(v9 + 16) )
      {
        v10 = ((_BYTE)v8 - 1) & 1;
        v11 = (*(_DWORD *)(a1 + 1408) + 511 + *(_DWORD *)(v9 + 20)) & 0xFFFFFE00;
        *(_DWORD *)(a1 + 1408) = v11;
        v12 = v11 + 508;
        v15 = RtlpFcSizeOfFeatureUsageDataBuffer(v11 + 508);
        Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL, v15, 0x63466D43u);
        v14 = Pool2;
        if ( Pool2 )
        {
          RtlpFcInitializeDelayedFeatureUsageDataBuffer(Pool2, v15);
          v14[7] = v12;
          *(_QWORD *)(a1 + 8 * v10 + 1392) = v14;
          RtlUpdateSwapReference(a1 + 944, v10);
          if ( CmFcpManagerAddBufferIntoPublishListAndSetPublishState(a1, v9) )
            CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a1 + 1688));
        }
      }
    }
    else
    {
      *(_DWORD *)(v9 + 16) = 0;
    }
    if ( v3 == 1 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1472), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1472));
      KeAbPostRelease(a1 + 1472);
      KeLeaveCriticalRegion();
    }
  }
}
