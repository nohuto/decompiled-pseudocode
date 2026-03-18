/*
 * XREFs of MiSetPagesModified @ 0x140492C90
 * Callers:
 *     MiCreateNewSection @ 0x1409433C0 (MiCreateNewSection.c)
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiLockLowestValidPageTableEx @ 0x140218760 (MiLockLowestValidPageTableEx.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140240FA0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402440D0 (MiReferenceControlAreaFileWithTag.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E44B0 (MiGetEffectivePagePriorityThread.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiCapturePfnPageFileInfoInline @ 0x14036D370 (MiCapturePfnPageFileInfoInline.c)
 *     MiUpdateControlAreaCommitCount @ 0x14036F1FC (MiUpdateControlAreaCommitCount.c)
 *     MiGetCommittedPages @ 0x140370A88 (MiGetCommittedPages.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiMapImageInSystemSpace @ 0x1408F5378 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1408F560C (MiUnmapImageInSystemSpace.c)
 *     MiPrefetchControlArea @ 0x1409572D4 (MiPrefetchControlArea.c)
 *     MiDeleteFileExtents @ 0x140A204B8 (MiDeleteFileExtents.c)
 */

__int64 __fastcall MiSetPagesModified(_QWORD *a1, int a2)
{
  __int64 v4; // rsi
  __int64 v5; // r12
  struct _KTHREAD *CurrentThread; // r13
  unsigned int EffectivePagePriorityThread; // eax
  int v9; // ebx
  __int64 v10; // rbx
  __int64 v11; // rdx
  ULONG_PTR v12; // rdi
  __int64 v13; // r15
  _QWORD *v14; // rcx
  unsigned __int8 v15; // si
  unsigned __int64 valid; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // rbx
  __int64 CommittedPages; // rbx
  __int64 v20; // r12
  unsigned __int64 v21; // r15
  unsigned __int64 *v22; // rbx
  _QWORD *v23; // rax
  _QWORD *v24; // rdi
  __int64 v25; // rdx
  $81B80DCEA5A02D890AB7B2872B48AC01 *v27; // rcx
  unsigned __int8 v28; // [rsp+30h] [rbp-128h]
  unsigned int v29; // [rsp+34h] [rbp-124h]
  __int64 v31; // [rsp+48h] [rbp-110h]
  _QWORD *v32; // [rsp+58h] [rbp-100h]
  __int64 v33; // [rsp+60h] [rbp-F8h]
  __int64 v34; // [rsp+68h] [rbp-F0h]
  __int64 v35; // [rsp+A8h] [rbp-B0h]
  unsigned __int64 v36; // [rsp+B0h] [rbp-A8h]
  unsigned __int64 v37; // [rsp+B8h] [rbp-A0h]
  ULONG_PTR v38[2]; // [rsp+C0h] [rbp-98h] BYREF
  _QWORD v39[3]; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v40; // [rsp+E8h] [rbp-70h]

  memset_0(v39, 0, 0x50uLL);
  v4 = *((_QWORD *)qword_140E2FF88 + (*((_WORD *)a1 + 30) & 0x3FF));
  v35 = v4;
  v34 = *a1;
  v5 = *(unsigned int *)(*a1 + 8LL);
  if ( !(unsigned int)MiChargeCommit(v4, (unsigned int)v5, 0) )
    return 3221225773LL;
  v32 = (_QWORD *)a1[17];
  v36 = (unsigned __int64)&v32[v5];
  CurrentThread = KeGetCurrentThread();
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  if ( EffectivePagePriorityThread > 5 )
    EffectivePagePriorityThread = 5;
  MiPrefetchControlArea((_DWORD)a1, CLFS_LSN_NULL_EXT, 0, EffectivePagePriorityThread, 0, a2);
  v9 = MiMapImageInSystemSpace(a1, 3LL, v39);
  if ( v9 < 0 )
  {
    MiReturnCommit(v4, v5, 0);
    return (unsigned int)v9;
  }
  else
  {
    v10 = v40;
    v31 = v40;
    v11 = v39[0];
    v33 = v39[0];
    v12 = ((v39[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v13 = 0LL;
    v14 = v32;
    while ( (unsigned __int64)v14 < v36 )
    {
      if ( *v14 )
      {
        while ( 1 )
        {
          v15 = MiLockWorkingSetShared(v10);
          v28 = v15;
          valid = MiLockLowestValidPageTableEx(v10, v12, v38, 0);
          v37 = valid;
          if ( valid == ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (*(_QWORD *)v12 & 1) != 0 )
            break;
          MiUnlockPageTableInternal(v10, valid);
          MiUnlockWorkingSetShared(v10, v15);
        }
        ++v13;
        v17 = 48 * ((*(_QWORD *)v12 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        if ( *(__int64 *)(v17 + 40) < 0 )
        {
          v18 = 0LL;
          v29 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v29 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v29);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v17 + 24) < 0 );
          }
          if ( (*(_DWORD *)(v17 + 16) & 0x400LL) == 0 && (*(_BYTE *)(v17 + 34) & 8) == 0 )
            v18 = MiCapturePfnPageFileInfoInline(v17, 1, 0);
          MiSetPfnModified(v17, 1);
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v18 )
            MiReleasePageFileInfo(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL)), v18, 1LL);
          v10 = v31;
        }
        MiUnlockPageTableInternal(v10, v37);
        MiUnlockWorkingSetShared(v10, v28);
        v14 = v32;
        v11 = v33;
      }
      v32 = ++v14;
      v12 += 8LL;
      v11 += 4096LL;
      v33 = v11;
    }
    MiUnmapImageInSystemSpace(v39);
    CommittedPages = MiGetCommittedPages(a1);
    v20 = CommittedPages - v13 + v5;
    if ( v20 )
      MiReturnCommit(v35, v20, 0);
    v21 = v13 - CommittedPages;
    if ( v21 )
    {
      --CurrentThread->SpecialApcDisable;
      v22 = (unsigned __int64 *)(v34 + 40);
      v23 = KeAbPreAcquire(v34 + 40, 0LL);
      v24 = v23;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx(v22, (__int64)v23, (__int64)v22);
      if ( v24 )
        *((_BYTE *)v24 + 10) = 1;
      MiUpdateControlAreaCommitCount((__int64)a1, v21);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v22);
      KeAbPostRelease((ULONG_PTR)v22);
      if ( CurrentThread->SpecialApcDisable++ == -1 )
      {
        v27 = &CurrentThread->152;
        if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v27->ApcState.ApcListHead[0].Flink != v27 )
          KiCheckForKernelApcDelivery((__int64)v27, v25);
      }
    }
    MiDeleteFileExtents(a1);
    return 0LL;
  }
}
