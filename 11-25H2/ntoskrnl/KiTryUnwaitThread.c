/*
 * XREFs of KiTryUnwaitThread @ 0x140280490
 * Callers:
 *     KeSignalGate @ 0x140225608 (KeSignalGate.c)
 *     MiReleaseControlAreaWaiters @ 0x14022F630 (MiReleaseControlAreaWaiters.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExpReleaseFastResourceShared @ 0x14027CE20 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14027D4F0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExpCommitWakeFastResource @ 0x14027F2E0 (ExpCommitWakeFastResource.c)
 *     MiReturnWsToExpansionList @ 0x14027FC50 (MiReturnWsToExpansionList.c)
 *     KeReleaseSemaphore @ 0x14027FE40 (KeReleaseSemaphore.c)
 *     KeWakeWaitChain @ 0x140280200 (KeWakeWaitChain.c)
 *     KeReleaseSemaphoreEx @ 0x1402838B8 (KeReleaseSemaphoreEx.c)
 *     AlpcpSignal @ 0x140284330 (AlpcpSignal.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     IopReleaseFileObjectLock @ 0x140285FF0 (IopReleaseFileObjectLock.c)
 *     FsRtlReleaseHeaderMutex @ 0x140286C50 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExReleaseFastResource @ 0x140298850 (ExReleaseFastResource.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402991C0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     KiTimerWaitTest @ 0x1402EEDC0 (KiTimerWaitTest.c)
 *     KeReleaseMutantEx @ 0x1402F09B0 (KeReleaseMutantEx.c)
 *     KiResumeThread @ 0x1402F2268 (KiResumeThread.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402FF6B0 (ExpReleaseResourceForThreadLite.c)
 *     AlpcpSignalAndWait @ 0x140308E00 (AlpcpSignalAndWait.c)
 *     KiRetireDpcList @ 0x1403192F0 (KiRetireDpcList.c)
 *     KiExpireTimer2 @ 0x140370160 (KiExpireTimer2.c)
 *     KeTerminateThread @ 0x1403AB638 (KeTerminateThread.c)
 *     KeSetEventBoostPriorityEx @ 0x1403F9BB8 (KeSetEventBoostPriorityEx.c)
 *     KeRundownQueueCommon @ 0x14041E8C4 (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x14041EA58 (KeDeleteMutant.c)
 *     KeTimeOutQueueWaiters @ 0x14043F744 (KeTimeOutQueueWaiters.c)
 *     KePulseEvent @ 0x14046B330 (KePulseEvent.c)
 *     KiRundownMutants @ 0x14047E8DC (KiRundownMutants.c)
 *     KeSetProcess @ 0x1404A8088 (KeSetProcess.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KiTryUnwaitThread(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  unsigned __int8 v5; // si
  unsigned int v7; // edi
  __int64 v11; // rcx
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
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
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
  v11 = *(unsigned __int8 *)(v4 + 112);
  v12 = *(_BYTE *)(v4 + 112) & 7;
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
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11) )
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
