/*
 * XREFs of KiTryUnwaitThread @ 0x1402F28C0
 * Callers:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KiRetireDpcList @ 0x1402824C0 (KiRetireDpcList.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140288470 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExReleaseFastResource @ 0x14028C460 (ExReleaseFastResource.c)
 *     ExpReleaseFastResourceShared @ 0x14028CC90 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14028DDD0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     AlpcpSignal @ 0x1402C46F0 (AlpcpSignal.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     FsRtlReleaseHeaderMutex @ 0x1402C6D00 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     AlpcpSignalAndWait @ 0x1402CD9A0 (AlpcpSignalAndWait.c)
 *     KeTerminateThread @ 0x1402D5BB8 (KeTerminateThread.c)
 *     KiResumeThread @ 0x1402DD2DC (KiResumeThread.c)
 *     KeReleaseMutantEx @ 0x1402DEAA0 (KeReleaseMutantEx.c)
 *     KeSetEventBoostPriorityEx @ 0x1402E0738 (KeSetEventBoostPriorityEx.c)
 *     KeWakeWaitChain @ 0x1402F15F0 (KeWakeWaitChain.c)
 *     KeTimeOutQueueWaiters @ 0x1402F1880 (KeTimeOutQueueWaiters.c)
 *     ExpCommitWakeFastResource @ 0x1402F1EF0 (ExpCommitWakeFastResource.c)
 *     KeReleaseSemaphore @ 0x1402F2490 (KeReleaseSemaphore.c)
 *     MiReturnWsToExpansionList @ 0x1402F26D0 (MiReturnWsToExpansionList.c)
 *     KeSignalGate @ 0x140314A48 (KeSignalGate.c)
 *     KiTimerWaitTest @ 0x140317320 (KiTimerWaitTest.c)
 *     MiReleaseControlAreaWaiters @ 0x140338770 (MiReleaseControlAreaWaiters.c)
 *     ExpReleaseResourceForThreadLite @ 0x140357E60 (ExpReleaseResourceForThreadLite.c)
 *     KeReleaseSemaphoreEx @ 0x1403AB4BC (KeReleaseSemaphoreEx.c)
 *     KiExpireTimer2 @ 0x1403AF650 (KiExpireTimer2.c)
 *     KeRundownQueueCommon @ 0x14040F3F8 (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x14040F588 (KeDeleteMutant.c)
 *     KePulseEvent @ 0x14045EF70 (KePulseEvent.c)
 *     KiRundownMutants @ 0x1404793A8 (KiRundownMutants.c)
 *     KeSetProcess @ 0x14049A2E8 (KeSetProcess.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KiTryUnwaitThread(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  unsigned __int8 v5; // si
  unsigned int v7; // edi
  char v11; // cl
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdi
  unsigned int v15; // esi
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  char v18; // al
  __int64 v19; // rcx
  __int64 result; // rax
  __int64 v21; // rax
  int *v22; // rcx
  char v23; // dl
  char v24; // al
  _QWORD *v25; // rdx
  _QWORD *v26; // rcx
  int v27; // [rsp+20h] [rbp-48h]

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v7);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( *(_BYTE *)(v4 + 388) != 5 )
    goto LABEL_31;
  v11 = *(_BYTE *)(v4 + 112);
  v12 = v11 & 7;
  if ( v12 == 1 || v12 == 4 )
  {
    v13 = *(_QWORD *)(v4 + 232);
    if ( v13 )
    {
      if ( (*(_BYTE *)v13 & 0x7F) == 0x15 )
      {
        v21 = (unsigned __int8)*(_DWORD *)(v4 + 540);
        *(_DWORD *)(v4 + 540) = v21;
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 4 * v21 + 536));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 40));
      }
    }
    v14 = *(_QWORD *)(v4 + 712);
    if ( v14 )
    {
      v15 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 33744), 0LL) )
      {
        do
        {
          if ( (++v15 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v15);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v14 + 33744) );
      }
      if ( *(_QWORD *)(v4 + 712) )
      {
        v16 = *(_QWORD *)(v4 + 216);
        v17 = *(_QWORD **)(v4 + 224);
        if ( *(_QWORD *)(v16 + 8) != v4 + 216 || *v17 != v4 + 216 )
          goto LABEL_22;
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        *(_QWORD *)(v4 + 712) = 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 33744), 0LL);
    }
    v18 = *(_BYTE *)(v4 + 388);
    if ( v18 == 1 )
    {
      *(_DWORD *)(v4 + 116) |= 2u;
    }
    else if ( v18 == 5 )
    {
      v19 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v4 + 436));
      if ( *(_BYTE *)(v4 + 391) )
        *(_QWORD *)(v4 + 1000) += v19;
      else
        *(_QWORD *)(v4 + 992) += v19;
    }
    *(_BYTE *)(v4 + 388) = 7;
    *(_QWORD *)(v4 + 216) = *(_QWORD *)(a1 + 11528);
    *(_QWORD *)(a1 + 11528) = v4 + 216;
    *(_QWORD *)(v4 + 200) = a3;
    *(_QWORD *)(v4 + 976) = 0LL;
  }
  else
  {
    if ( (*(_BYTE *)(v4 + 112) & 7) != 0 )
    {
      if ( v12 == 5 )
      {
        *(_BYTE *)(v4 + 112) = v11 & 0xF8 | 6;
      }
      else if ( v12 == 3 )
      {
        *(_BYTE *)(a2 + 17) = 2;
      }
      goto LABEL_31;
    }
    *(_BYTE *)(v4 + 112) = v11 & 0xF8 | 2;
    *(_QWORD *)(v4 + 200) = a3;
    *(_QWORD *)(v4 + 976) = 0LL;
    *(_BYTE *)(a2 + 17) = 0;
  }
  v5 = 1;
  if ( a4 )
  {
    *a4 = v4;
    v22 = *(int **)(a2 + 32);
    if ( (*(_BYTE *)v22 & 0x7F) == 2 )
    {
      if ( *((_BYTE *)v22 + 49) )
        --*(_WORD *)(v4 + 484);
      if ( *(_QWORD *)(a1 + 8) == v4 )
        v23 = *(_BYTE *)(a1 + 14522);
      else
        v23 = 0;
      v27 = *v22;
      BYTE2(v27) = v23;
      *v22 = v27;
      v24 = *((_BYTE *)v22 + 48);
      *((_QWORD *)v22 + 5) = v4;
      if ( (v24 & 1) != 0 )
      {
        *((_BYTE *)v22 + 48) = v24 & 0xFE;
        *(_QWORD *)(v4 + 200) |= 0x80uLL;
      }
      if ( (v22[12] & 2) != 0 )
        *(_QWORD *)(v4 + 976) = v22;
      else
        *(_QWORD *)(v4 + 976) = 0LL;
      v25 = v22 + 6;
      v26 = *(_QWORD **)(v4 + 784);
      if ( *v26 == v4 + 776 )
      {
        *v25 = v4 + 776;
        v25[1] = v26;
        *v26 = v25;
        *(_QWORD *)(v4 + 784) = v25;
        goto LABEL_31;
      }
LABEL_22:
      __fastfail(3u);
    }
  }
LABEL_31:
  *(_QWORD *)(v4 + 64) = 0LL;
  result = v5;
  ++*(_BYTE *)(a2 + 17);
  return result;
}
