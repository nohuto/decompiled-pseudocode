/*
 * XREFs of MiSetPagesModified @ 0x140493EB0
 * Callers:
 *     MiCreateNewSection @ 0x14093EAC0 (MiCreateNewSection.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiGetCommittedPages @ 0x140215A04 (MiGetCommittedPages.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402A6504 (MiUpdateControlAreaCommitCount.c)
 *     MiLockLowestValidPageTableEx @ 0x1402B7890 (MiLockLowestValidPageTableEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402C2260 (ObFastDereferenceObjectDeferDelete.c)
 *     MiCapturePfnPageFileInfoInline @ 0x1402CB93C (MiCapturePfnPageFileInfoInline.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140323330 (MiReferenceControlAreaFileWithTag.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 *     MiGetEffectivePagePriorityThread @ 0x140387440 (MiGetEffectivePagePriorityThread.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiMapImageInSystemSpace @ 0x140943ED0 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x140944164 (MiUnmapImageInSystemSpace.c)
 *     MiPrefetchControlArea @ 0x1409CABB4 (MiPrefetchControlArea.c)
 *     MiDeleteFileExtents @ 0x140A15960 (MiDeleteFileExtents.c)
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
  __int64 *v23; // rax
  __int64 *v24; // rdi
  bool v25; // zf
  unsigned __int8 v26; // [rsp+30h] [rbp-128h]
  int v27; // [rsp+34h] [rbp-124h]
  __int64 v29; // [rsp+48h] [rbp-110h]
  _QWORD *v30; // [rsp+58h] [rbp-100h]
  __int64 v31; // [rsp+60h] [rbp-F8h]
  __int64 v32; // [rsp+68h] [rbp-F0h]
  __int64 v33; // [rsp+A8h] [rbp-B0h]
  unsigned __int64 v34; // [rsp+B0h] [rbp-A8h]
  unsigned __int64 v35; // [rsp+B8h] [rbp-A0h]
  ULONG_PTR v36[2]; // [rsp+C0h] [rbp-98h] BYREF
  _QWORD v37[3]; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v38; // [rsp+E8h] [rbp-70h]

  memset_0(v37, 0, 0x50uLL);
  v4 = *((_QWORD *)qword_140E2FD48 + (*((_WORD *)a1 + 30) & 0x3FF));
  v33 = v4;
  v32 = *a1;
  v5 = *(unsigned int *)(*a1 + 8LL);
  if ( !(unsigned int)MiChargeCommit(v4, (unsigned int)v5, 0) )
    return 3221225773LL;
  v30 = (_QWORD *)a1[17];
  v34 = (unsigned __int64)&v30[v5];
  CurrentThread = KeGetCurrentThread();
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  if ( EffectivePagePriorityThread > 5 )
    EffectivePagePriorityThread = 5;
  MiPrefetchControlArea((_DWORD)a1, CLFS_LSN_NULL_EXT, 0, EffectivePagePriorityThread, 0, a2);
  v9 = MiMapImageInSystemSpace(a1, 3LL, v37);
  if ( v9 < 0 )
  {
    MiReturnCommit(v4, v5, 0);
    return (unsigned int)v9;
  }
  else
  {
    v10 = v38;
    v29 = v38;
    v11 = v37[0];
    v31 = v37[0];
    v12 = ((v37[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v13 = 0LL;
    v14 = v30;
    while ( (unsigned __int64)v14 < v34 )
    {
      if ( *v14 )
      {
        while ( 1 )
        {
          v15 = MiLockWorkingSetShared(v10);
          v26 = v15;
          valid = MiLockLowestValidPageTableEx(v10, v12, v36, 0);
          v35 = valid;
          if ( valid == ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (*(_QWORD *)v12 & 1) != 0 )
            break;
          MiUnlockPageTable(v10, valid);
          MiUnlockWorkingSetShared(v10, v15);
        }
        ++v13;
        v17 = 48 * ((*(_QWORD *)v12 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        if ( *(__int64 *)(v17 + 40) < 0 )
        {
          v18 = 0LL;
          v27 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v27 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait();
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
            MiReleasePageFileInfo(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL)), v18, 1);
          v10 = v29;
        }
        MiUnlockPageTable(v10, v35);
        MiUnlockWorkingSetShared(v10, v26);
        v14 = v30;
        v11 = v31;
      }
      v30 = ++v14;
      v12 += 8LL;
      v11 += 4096LL;
      v31 = v11;
    }
    MiUnmapImageInSystemSpace(v37);
    CommittedPages = MiGetCommittedPages(a1);
    v20 = CommittedPages - v13 + v5;
    if ( v20 )
      MiReturnCommit(v33, v20, 0);
    v21 = v13 - CommittedPages;
    if ( v21 )
    {
      --CurrentThread->SpecialApcDisable;
      v22 = (unsigned __int64 *)(v32 + 40);
      v23 = KeAbPreAcquire(v32 + 40, 0LL);
      v24 = v23;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx(v22, v23, (__int64)v22);
      if ( v24 )
        *((_BYTE *)v24 + 10) = 1;
      MiUpdateControlAreaCommitCount((__int64)a1, v21);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v22);
      KeAbPostRelease((ULONG_PTR)v22);
      v25 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v25
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    MiDeleteFileExtents(a1);
    return 0LL;
  }
}
