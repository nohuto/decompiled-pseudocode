/*
 * XREFs of CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x1407E54B8
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacityWorker @ 0x1407E5620 (CmFcpManagerPublishFeatureUsageDataIfNearCapacityWorker.c)
 * Callees:
 *     RtlAcquireSwapReference @ 0x14021E2E4 (RtlAcquireSwapReference.c)
 *     RtlReleaseSwapReference @ 0x14021E4BC (RtlReleaseSwapReference.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmFcpManagerFeatureUsageBufferNearCapacityThreshold @ 0x1404B6E98 (CmFcpManagerFeatureUsageBufferNearCapacityThreshold.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x140A8CF00 (CmFcpManagerPublishFeatureUsageData.c)
 */

void __fastcall CmFcpManagerPublishFeatureUsageDataIfNearCapacity(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // r14
  __int64 v4; // rdi
  char v5; // si
  char i; // r15
  unsigned int v7; // eax
  __int64 v8; // rdx
  _QWORD *v9; // rax
  char *v10; // rax
  char *v11; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 944);
  --CurrentThread->KernelApcDisable;
  LODWORD(v4) = RtlAcquireSwapReference((__int64 *)(a1 + 944));
  v5 = 0;
  for ( i = 1; ; i = 0 )
  {
    v7 = CmFcpManagerFeatureUsageBufferNearCapacityThreshold(*(_DWORD *)(*(_QWORD *)(a1 + 8LL * (unsigned int)v4 + 1392)
                                                                       + 28LL));
    if ( (unsigned int)v8 < v7 )
      break;
    if ( v5 )
      goto LABEL_14;
    v9 = KeAbPreAcquire(a1 + 1472, 0LL);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 1472), 0LL) )
    {
      if ( v9 )
        *((_BYTE *)v9 + 10) = 1;
LABEL_14:
      if ( i )
        RtlReleaseSwapReference(v2, v4);
      LOBYTE(v8) = 1;
      CmFcpManagerPublishFeatureUsageData(a1, v8);
LABEL_20:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1472), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1472));
      KeAbPostRelease(a1 + 1472);
      goto LABEL_23;
    }
    if ( v9 )
      KeAbPostReleaseEx(a1 + 1472, (ULONG_PTR)v9);
    RtlReleaseSwapReference(v2, v4);
    v10 = (char *)KeAbPreAcquire(a1 + 1472, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1472), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1472), v10, a1 + 1472);
    if ( v11 )
      v11[10] = 1;
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
