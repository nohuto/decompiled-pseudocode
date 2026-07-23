/*
 * XREFs of MiSetPagesModified @ 0x1403DA5EC
 * Callers:
 *     MiCreateNewSection @ 0x14098D630 (MiCreateNewSection.c)
 * Callees:
 *     MiGetCommittedPages @ 0x140204018 (MiGetCommittedPages.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402090F0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiReferenceControlAreaFileWithTag @ 0x14020C860 (MiReferenceControlAreaFileWithTag.c)
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiCapturePfnPageFileInfoInline @ 0x140269E70 (MiCapturePfnPageFileInfoInline.c)
 *     MiUpdateControlAreaCommitCount @ 0x14026B17C (MiUpdateControlAreaCommitCount.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiGetEffectivePagePriorityThread @ 0x1403DC8F0 (MiGetEffectivePagePriorityThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiPrefetchControlArea @ 0x14093AC84 (MiPrefetchControlArea.c)
 *     MiMapImageInSystemSpace @ 0x14093E220 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14093E4B4 (MiUnmapImageInSystemSpace.c)
 *     MiDeleteFileExtents @ 0x140A155B8 (MiDeleteFileExtents.c)
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
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned __int64 v14; // rdi
  __int64 v15; // r15
  _QWORD *v16; // rcx
  unsigned __int8 v17; // si
  unsigned __int64 valid; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  __int64 v21; // r9
  __int64 CommittedPages; // rbx
  __int64 v23; // r12
  unsigned __int64 v24; // r15
  unsigned __int64 *v25; // rbx
  char *v26; // rax
  char *v27; // rdi
  bool v28; // zf
  unsigned __int8 v29; // [rsp+30h] [rbp-128h]
  unsigned int v30; // [rsp+34h] [rbp-124h]
  __int64 v32; // [rsp+48h] [rbp-110h]
  _QWORD *v33; // [rsp+58h] [rbp-100h]
  __int64 v34; // [rsp+60h] [rbp-F8h]
  __int64 v35; // [rsp+68h] [rbp-F0h]
  __int64 v36; // [rsp+A8h] [rbp-B0h]
  unsigned __int64 v37; // [rsp+B0h] [rbp-A8h]
  unsigned __int64 v38; // [rsp+B8h] [rbp-A0h]
  ULONG_PTR v39[2]; // [rsp+C0h] [rbp-98h] BYREF
  _QWORD v40[3]; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v41; // [rsp+E8h] [rbp-70h]

  memset_0(v40, 0, 0x50uLL);
  v4 = *((_QWORD *)qword_140E300C8 + (*((_WORD *)a1 + 30) & 0x3FF));
  v36 = v4;
  v35 = *a1;
  v5 = *(unsigned int *)(*a1 + 8LL);
  if ( !(unsigned int)MiChargeCommit(v4, (unsigned int)v5, 0) )
    return 3221225773LL;
  v33 = (_QWORD *)a1[17];
  v37 = (unsigned __int64)&v33[v5];
  CurrentThread = KeGetCurrentThread();
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread);
  if ( EffectivePagePriorityThread > 5 )
    EffectivePagePriorityThread = 5;
  MiPrefetchControlArea((_DWORD)a1, CLFS_LSN_NULL_EXT, 0, EffectivePagePriorityThread, 0, a2);
  v9 = MiMapImageInSystemSpace(a1, 3LL, v40);
  if ( v9 < 0 )
  {
    MiReturnCommit(v4, v5, 0);
    return (unsigned int)v9;
  }
  else
  {
    v10 = v41;
    v32 = v41;
    v11 = v40[0];
    v34 = v40[0];
    v12 = 0x7FFFFFFFF8LL;
    v13 = 0xFFFFF68000000000uLL;
    v14 = ((v40[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = 0LL;
    v16 = v33;
    while ( (unsigned __int64)v16 < v37 )
    {
      if ( *v16 )
      {
        while ( 1 )
        {
          v17 = MiLockWorkingSetShared(v10, v11, v13, v12);
          v29 = v17;
          valid = MiLockLowestValidPageTableEx(v10, v14, v39, 0);
          v38 = valid;
          if ( valid == ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (*(_QWORD *)v14 & 1) != 0 )
            break;
          MiUnlockPageTableInternal(v10, valid);
          MiUnlockWorkingSetShared(v10, v17);
          v11 = v34;
        }
        ++v15;
        v19 = 48 * ((*(_QWORD *)v14 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        if ( *(__int64 *)(v19 + 40) < 0 )
        {
          v20 = 0LL;
          v30 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v30 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v30);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v19 + 24) < 0 );
          }
          if ( (*(_DWORD *)(v19 + 16) & 0x400LL) == 0 && (*(_BYTE *)(v19 + 34) & 8) == 0 )
            v20 = MiCapturePfnPageFileInfoInline(v19, 1, 0);
          MiSetPfnModified(v19, 1);
          _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v20 )
            MiReleasePageFileInfo(
              *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v19 + 40) >> 43) & 0x3FFLL)),
              v20,
              1LL,
              v21);
          v10 = v32;
        }
        MiUnlockPageTableInternal(v10, v38);
        MiUnlockWorkingSetShared(v10, v29);
        v16 = v33;
        v11 = v34;
      }
      v33 = ++v16;
      v14 += 8LL;
      v11 += 4096LL;
      v34 = v11;
    }
    MiUnmapImageInSystemSpace(v40);
    CommittedPages = MiGetCommittedPages(a1);
    v23 = CommittedPages - v15 + v5;
    if ( v23 )
      MiReturnCommit(v36, v23, 0);
    v24 = v15 - CommittedPages;
    if ( v24 )
    {
      --CurrentThread->SpecialApcDisable;
      v25 = (unsigned __int64 *)(v35 + 40);
      v26 = (char *)KeAbPreAcquire(v35 + 40, 0LL);
      v27 = v26;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx(v25, v26, (__int64)v25);
      if ( v27 )
        v27[10] = 1;
      MiUpdateControlAreaCommitCount((__int64)a1, v24);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v25);
      KeAbPostRelease((ULONG_PTR)v25);
      v28 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v28
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    MiDeleteFileExtents(a1);
    return 0LL;
  }
}
