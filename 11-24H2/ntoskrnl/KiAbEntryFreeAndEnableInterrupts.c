/*
 * XREFs of KiAbEntryFreeAndEnableInterrupts @ 0x14025CDA0
 * Callers:
 *     KiAbUmPostWait @ 0x140207AA0 (KiAbUmPostWait.c)
 *     MiAddViewsForSection @ 0x14020DA70 (MiAddViewsForSection.c)
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     ExReleasePushLockSharedEx @ 0x14025DCC0 (ExReleasePushLockSharedEx.c)
 *     ExReleasePushLockExclusiveEx @ 0x14025DEA0 (ExReleasePushLockExclusiveEx.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x14025DFF0 (ExReleaseAutoExpandPushLockShared.c)
 *     PspUnlockProcessShared @ 0x14025E2E0 (PspUnlockProcessShared.c)
 *     ExReleasePushLockEx @ 0x14025E530 (ExReleasePushLockEx.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x14025E690 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     ObpReleaseLookupContext @ 0x14025E7E0 (ObpReleaseLookupContext.c)
 *     MiPostInsertVad @ 0x14025EBE0 (MiPostInsertVad.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14025F390 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiAbProcessPreContextSwitch @ 0x140295A00 (KiAbProcessPreContextSwitch.c)
 *     MiSetVadDeleted @ 0x1402B94A0 (MiSetVadDeleted.c)
 *     RtlpHpReleaseLockExclusive @ 0x1402B9650 (RtlpHpReleaseLockExclusive.c)
 *     MiUnlockControlAreaFileObjectExclusive @ 0x1402B9A20 (MiUnlockControlAreaFileObjectExclusive.c)
 *     MiUnlockVadShared @ 0x1402BA960 (MiUnlockVadShared.c)
 *     MiManageSubsectionView @ 0x1402BAAB0 (MiManageSubsectionView.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1402BAD10 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     PspUnlockProcessListShared @ 0x1402BAE60 (PspUnlockProcessListShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1402BB160 (RtlpHpReleaseQueuedLockExclusive.c)
 *     MiUnlockAndDereferenceVadShared @ 0x1402BB330 (MiUnlockAndDereferenceVadShared.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402BC4B0 (RtlpHpSegPageRangeShrink.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     IopReleaseFileObjectLock @ 0x14031D520 (IopReleaseFileObjectLock.c)
 *     FsRtlReleaseHeaderMutex @ 0x14031E170 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PspUnlockProcessThreadListShared @ 0x1403EFB40 (PspUnlockProcessThreadListShared.c)
 *     PspUnlockThreadSecurityShared @ 0x14041AFC0 (PspUnlockThreadSecurityShared.c)
 *     KiAbCleanupLockEntriesState @ 0x140444ED4 (KiAbCleanupLockEntriesState.c)
 *     KeAbUserModeEntryFree @ 0x14046AAD8 (KeAbUserModeEntryFree.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14025CEE0 (KiAbEntryRemoveFromTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x140340980 (KiAbThreadRemoveBoostsSlow.c)
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
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
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
      KiRemoveSystemWorkPriorityKick(v10);
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
