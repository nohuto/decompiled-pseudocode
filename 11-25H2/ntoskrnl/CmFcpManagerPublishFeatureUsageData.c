/*
 * XREFs of CmFcpManagerPublishFeatureUsageData @ 0x140A8D96C
 * Callers:
 *     CmFcShutdownSystem @ 0x1407C6490 (CmFcShutdownSystem.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x1407D5078 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x140A8D7AC (CmFcpManagerProcessUsageDataProviders.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C3BE84 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     CmpWorkItemQueueWork @ 0x1403B8E30 (CmpWorkItemQueueWork.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     RtlpFcInitializeDelayedFeatureUsageDataBuffer @ 0x1404B48E0 (RtlpFcInitializeDelayedFeatureUsageDataBuffer.c)
 *     RtlpFcSizeOfFeatureUsageDataBuffer @ 0x1405E6734 (RtlpFcSizeOfFeatureUsageDataBuffer.c)
 *     CmFcpManagerAddBufferIntoPublishListAndSetPublishState @ 0x1407D4F28 (CmFcpManagerAddBufferIntoPublishListAndSetPublishState.c)
 *     RtlUpdateSwapReference @ 0x140A308D0 (RtlUpdateSwapReference.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

void __fastcall CmFcpManagerPublishFeatureUsageData(__int64 a1, char a2)
{
  char v3; // bp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rsi
  __int64 *v6; // rax
  __int64 *v7; // rbp
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
        ExfAcquirePushLockExclusiveEx(v5, v6, (__int64)v5);
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
