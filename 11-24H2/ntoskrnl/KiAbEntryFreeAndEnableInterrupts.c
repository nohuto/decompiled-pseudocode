/*
 * XREFs of KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0
 * Callers:
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     ExReleasePushLockSharedEx @ 0x14028E2D0 (ExReleasePushLockSharedEx.c)
 *     ExReleasePushLockExclusiveEx @ 0x14028E4B0 (ExReleasePushLockExclusiveEx.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x14028E600 (ExReleaseAutoExpandPushLockShared.c)
 *     PspUnlockProcessShared @ 0x14028E8F0 (PspUnlockProcessShared.c)
 *     ExReleasePushLockEx @ 0x14028EB40 (ExReleasePushLockEx.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x14028ECA0 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     ObpReleaseLookupContext @ 0x14028EDF0 (ObpReleaseLookupContext.c)
 *     MiPostInsertVad @ 0x14028F1F0 (MiPostInsertVad.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14028F9A0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiAbProcessPreContextSwitch @ 0x1402A5600 (KiAbProcessPreContextSwitch.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     FsRtlReleaseHeaderMutex @ 0x1402C6D00 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KiAbUmPostWait @ 0x14032F080 (KiAbUmPostWait.c)
 *     MiAddViewsForSection @ 0x140336DD0 (MiAddViewsForSection.c)
 *     MiSetVadDeleted @ 0x140360BE0 (MiSetVadDeleted.c)
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 *     MiUnlockControlAreaFileObjectExclusive @ 0x140361160 (MiUnlockControlAreaFileObjectExclusive.c)
 *     MiUnlockVadShared @ 0x1403620A0 (MiUnlockVadShared.c)
 *     MiManageSubsectionView @ 0x1403621F0 (MiManageSubsectionView.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140362450 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     PspUnlockProcessListShared @ 0x1403625A0 (PspUnlockProcessListShared.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1403628A0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140362A70 (MiUnlockAndDereferenceVadShared.c)
 *     RtlpHpSegPageRangeShrink @ 0x140363BF0 (RtlpHpSegPageRangeShrink.c)
 *     PspUnlockProcessThreadListShared @ 0x1403E2AC0 (PspUnlockProcessThreadListShared.c)
 *     PspUnlockThreadSecurityShared @ 0x14040AFC0 (PspUnlockThreadSecurityShared.c)
 *     KiAbCleanupLockEntriesState @ 0x14043D07C (KiAbCleanupLockEntriesState.c)
 *     KeAbUserModeEntryFree @ 0x140463468 (KeAbUserModeEntryFree.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14028D4F0 (KiAbEntryRemoveFromTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14031FE60 (KiAbThreadRemoveBoostsSlow.c)
 */

__int64 __fastcall KiAbEntryFreeAndEnableInterrupts(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int v5; // esi
  __int64 v8; // rbx
  unsigned __int8 v9; // cl
  struct _KPRCB *v10; // rcx
  unsigned __int32 *v11; // r8
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v15; // eax
  __int64 v16; // rdx
  unsigned __int32 v17; // ett
  unsigned __int32 v18; // eax
  __int64 v19; // rdx
  unsigned __int32 v20; // ett

  v5 = a4;
  if ( *(__int64 *)a1 < 0 )
  {
    *(_BYTE *)a1 |= 2u;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v18 = *SchedulerAssist;
      do
      {
        v19 = v18;
        LODWORD(v19) = v18 & 0xFFDFFFFF;
        v20 = v18;
        v18 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v18 & 0xFFDFFFFF, v18);
      }
      while ( v20 != v18 );
      if ( (v18 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v19, SchedulerAssist, a4);
    }
    _enable();
    KiAbEntryRemoveFromTree(a1);
    _disable();
  }
  v8 = *(unsigned int *)(a1 + 80);
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 9) = 0;
  *(_QWORD *)a1 = 0LL;
  if ( v5 )
  {
    v9 = *(_BYTE *)(a1 + 8) & 0x3F;
    *(_WORD *)(a1 - 88LL * v9 - 8) |= (unsigned __int8)(1 << v9);
  }
  v10 = KeGetCurrentPrcb();
  v11 = (unsigned __int32 *)v10->SchedulerAssist;
  if ( v11 )
  {
    _m_prefetchw(v11);
    v15 = *v11;
    do
    {
      v16 = v15;
      LODWORD(v16) = v15 & 0xFFDFFFFF;
      v17 = v15;
      v15 = _InterlockedCompareExchange((volatile signed __int32 *)v11, v15 & 0xFFDFFFFF, v15);
    }
    while ( v17 != v15 );
    if ( (v15 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v10, v16, v11, a4);
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
