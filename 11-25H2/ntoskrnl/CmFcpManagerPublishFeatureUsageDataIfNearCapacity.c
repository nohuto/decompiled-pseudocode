/*
 * XREFs of CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x1407D5078
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacityWorker @ 0x1407D51E0 (CmFcpManagerPublishFeatureUsageDataIfNearCapacityWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     RtlAcquireSwapReference @ 0x1403B8A54 (RtlAcquireSwapReference.c)
 *     RtlReleaseSwapReference @ 0x1403B8C2C (RtlReleaseSwapReference.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     CmFcpManagerFeatureUsageBufferNearCapacityThreshold @ 0x1404BD078 (CmFcpManagerFeatureUsageBufferNearCapacityThreshold.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x140A8D96C (CmFcpManagerPublishFeatureUsageData.c)
 */

void __fastcall CmFcpManagerPublishFeatureUsageDataIfNearCapacity(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v2; // r14
  __int64 v4; // rdi
  char v5; // si
  char i; // r15
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = (volatile signed __int64 *)(a1 + 944);
  --CurrentThread->KernelApcDisable;
  LODWORD(v4) = RtlAcquireSwapReference((__int64 *)(a1 + 944));
  v5 = 0;
  for ( i = 1; ; i = 0 )
  {
    v7 = CmFcpManagerFeatureUsageBufferNearCapacityThreshold(*(_DWORD *)(*(_QWORD *)(a1 + 8LL * (unsigned int)v4 + 1320)
                                                                       + 28LL));
    if ( (unsigned int)v8 < v7 )
      break;
    if ( v5 )
      goto LABEL_14;
    v9 = KeAbPreAcquire(a1 + 1400, 0LL);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 1400), 0LL) )
    {
      if ( v9 )
        *((_BYTE *)v9 + 10) = 1;
LABEL_14:
      if ( i )
        RtlReleaseSwapReference(v2, v4);
      LOBYTE(v8) = 1;
      CmFcpManagerPublishFeatureUsageData(a1, v8);
LABEL_20:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1400), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1400));
      KeAbPostRelease(a1 + 1400);
      goto LABEL_23;
    }
    if ( v9 )
      KeAbPostReleaseEx(a1 + 1400, (ULONG_PTR)v9);
    RtlReleaseSwapReference(v2, v4);
    v10 = KeAbPreAcquire(a1 + 1400, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1400), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1400), v10, a1 + 1400);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    v5 = 1;
    v4 = *v2 & 1;
  }
  if ( i )
    RtlReleaseSwapReference(v2, v4);
  if ( v5 )
    goto LABEL_20;
LABEL_23:
  KeLeaveCriticalRegion();
}
