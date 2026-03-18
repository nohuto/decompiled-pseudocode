/*
 * XREFs of KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20
 * Callers:
 *     KiAbCleanupLockEntriesState @ 0x140204E44 (KiAbCleanupLockEntriesState.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x140205BC0 (ExReleaseAutoExpandPushLockShared.c)
 *     MiAddViewsForSection @ 0x140213970 (MiAddViewsForSection.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     AlpcpQueueIoCompletionPort @ 0x140280A30 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpSignal @ 0x140284330 (AlpcpSignal.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     IopReleaseFileObjectLock @ 0x140285FF0 (IopReleaseFileObjectLock.c)
 *     FsRtlReleaseHeaderMutex @ 0x140286C50 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExReleasePushLockSharedEx @ 0x14029B310 (ExReleasePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     PspUnlockProcessShared @ 0x14029BF00 (PspUnlockProcessShared.c)
 *     ExReleasePushLockExclusiveEx @ 0x14029C430 (ExReleasePushLockExclusiveEx.c)
 *     ObpReleaseLookupContext @ 0x1402BC6D0 (ObpReleaseLookupContext.c)
 *     ExReleasePushLockEx @ 0x1402BC920 (ExReleasePushLockEx.c)
 *     MiPostInsertVad @ 0x1402BCBB0 (MiPostInsertVad.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402BD2A0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402E0DA0 (RtlpHpSegPageRangeShrink.c)
 *     KiAbUmPostWait @ 0x140305F28 (KiAbUmPostWait.c)
 *     KiAbProcessPreContextSwitch @ 0x140316AB0 (KiAbProcessPreContextSwitch.c)
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 *     ?StLockReleaseExclusive@@YAXPEAUVLOCK@@K@Z @ 0x14031F750 (-StLockReleaseExclusive@@YAXPEAUVLOCK@@K@Z.c)
 *     MiSetVadDeleted @ 0x14031F8D0 (MiSetVadDeleted.c)
 *     RtlpHpReleaseLockExclusive @ 0x14031FBD0 (RtlpHpReleaseLockExclusive.c)
 *     MiUnlockControlAreaFileObjectExclusive @ 0x14031FF90 (MiUnlockControlAreaFileObjectExclusive.c)
 *     MiManageSubsectionView @ 0x1403200E0 (MiManageSubsectionView.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140320330 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     PspUnlockProcessListShared @ 0x140320480 (PspUnlockProcessListShared.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x140320690 (RtlpHpReleaseQueuedLockExclusive.c)
 *     PspUnlockThreadSecurityExclusive @ 0x1403D43D0 (PspUnlockThreadSecurityExclusive.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x1403E2EE0 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     PspUnlockProcessThreadListShared @ 0x1403E6C20 (PspUnlockProcessThreadListShared.c)
 *     PspUnlockThreadSecurityShared @ 0x14041DA20 (PspUnlockThreadSecurityShared.c)
 *     KeAbUserModeEntryFree @ 0x1404706A0 (KeAbUserModeEntryFree.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14029BB60 (KiAbThreadRemoveBoostsSlow.c)
 *     KiAbEntryRemoveFromTree @ 0x14029D4A0 (KiAbEntryRemoveFromTree.c)
 */

__int64 __fastcall KiAbEntryFreeAndEnableInterrupts(__int64 a1, ULONG_PTR a2, __int64 a3, int a4, _QWORD *a5)
{
  __int64 v8; // rbx
  unsigned __int8 v9; // cl
  struct _KPRCB *v10; // rcx
  signed __int32 *v11; // r8
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  signed __int32 v17; // eax
  signed __int32 v18; // ett

  if ( *(__int64 *)a1 < 0 )
  {
    *(_BYTE *)a1 |= 2u;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v17 = *SchedulerAssist;
      do
      {
        v18 = v17;
        v17 = _InterlockedCompareExchange(SchedulerAssist, v17 & 0xFFDFFFFF, v17);
      }
      while ( v18 != v17 );
      if ( (v17 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    KiAbEntryRemoveFromTree(a1);
    _disable();
  }
  v8 = *(unsigned int *)(a1 + 80);
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 9) = 0;
  *(_QWORD *)a1 = 0LL;
  if ( a4 )
  {
    v9 = *(_BYTE *)(a1 + 8) & 0x3F;
    *(_WORD *)(a1 - 88LL * v9 - 8) |= (unsigned __int8)(1 << v9);
  }
  v10 = KeGetCurrentPrcb();
  v11 = (signed __int32 *)v10->SchedulerAssist;
  if ( v11 )
  {
    _m_prefetchw(v11);
    v15 = *v11;
    do
    {
      v16 = v15;
      v15 = _InterlockedCompareExchange(v11, v15 & 0xFFDFFFFF, v15);
    }
    while ( v16 != v15 );
    if ( (v15 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)v10);
  }
  _enable();
  result = (__int64)a5;
  if ( a5 )
  {
    *a5 = v8;
  }
  else if ( (_DWORD)v8 )
  {
    return KiAbThreadRemoveBoostsSlow(a2);
  }
  return result;
}
