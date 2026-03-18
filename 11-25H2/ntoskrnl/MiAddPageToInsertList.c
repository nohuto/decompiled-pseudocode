/*
 * XREFs of MiAddPageToInsertList @ 0x14023DD30
 * Callers:
 *     MiFinishHardFault @ 0x14023BBC0 (MiFinishHardFault.c)
 *     MiInsertProtectedStandbyPage @ 0x14023C818 (MiInsertProtectedStandbyPage.c)
 *     MmUnmapViewInSystemCache @ 0x14023D300 (MmUnmapViewInSystemCache.c)
 *     MiUnlockMdlWritePages @ 0x14023DBA0 (MiUnlockMdlWritePages.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x14021ADE0 (MiPfnReferenceCountIsZero.c)
 *     MiCanBatchSystemCacheUnmapPages @ 0x14023C510 (MiCanBatchSystemCacheUnmapPages.c)
 *     MiCanBatchHardFaultPages @ 0x14023E1D4 (MiCanBatchHardFaultPages.c)
 *     MiEnqueuePageList @ 0x14023E310 (MiEnqueuePageList.c)
 *     MiHardFaultPageRelease @ 0x14023EBE8 (MiHardFaultPageRelease.c)
 *     MiInsertPagesInList @ 0x14024F050 (MiInsertPagesInList.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSignalCommitSignals @ 0x140329790 (MiSignalCommitSignals.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140388D44 (MiCanPfnOriginalPteBeLost.c)
 *     MiReleaseWriteInProgressCharges @ 0x14040AC14 (MiReleaseWriteInProgressCharges.c)
 *     MiRestockOverCommit @ 0x14040ADD4 (MiRestockOverCommit.c)
 */

__int64 __fastcall MiAddPageToInsertList(__int64 a1, _BYTE *a2, ULONG_PTR a3)
{
  int v3; // esi
  __int64 v4; // r14
  __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  int CanBatchHardFaultPages; // eax
  int v11; // ecx
  __int64 result; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 i; // rdx
  signed __int32 v17; // eax
  __int64 v18; // rdx
  struct _KPRCB *v19; // r9
  signed __int32 CachedResidentAvailable; // r8d
  bool v21; // zf
  signed __int32 v22; // eax
  char v23; // r11
  int v24; // eax
  char v25; // cl
  unsigned int v26; // r12d
  volatile LONG *v27; // rcx
  KIRQL v28; // r15
  int v29; // [rsp+50h] [rbp+8h]
  int v30; // [rsp+50h] [rbp+8h]

  v3 = *(_DWORD *)(a1 + 96);
  v4 = 48 * a3;
  v8 = 48 * a3 - 0x220000000000LL;
  v9 = 1LL;
  if ( v3 == 3 )
  {
LABEL_35:
    v11 = 1;
    goto LABEL_7;
  }
  while ( *(_QWORD *)a1 )
  {
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      goto LABEL_4;
    MiInsertPagesInList(a1, 0LL);
  }
  v26 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v26 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v26);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
LABEL_4:
  if ( v3 == 2 )
  {
    CanBatchHardFaultPages = MiCanBatchHardFaultPages(a2, v8);
    goto LABEL_6;
  }
  if ( !v3 )
  {
    CanBatchHardFaultPages = MiCanBatchSystemCacheUnmapPages(a2, v8);
LABEL_6:
    v11 = CanBatchHardFaultPages;
    if ( CanBatchHardFaultPages )
    {
LABEL_7:
      if ( !*(_QWORD *)a1 )
        *(_DWORD *)(a1 + 12) = (*(_BYTE *)(v8 + 34) & 0x10 | 0x20u) >> 4;
      if ( v11 == 1 )
        return MiEnqueuePageList(a1, a3);
      MiInsertPagesInList(a1, 1LL);
      if ( v3 )
      {
        if ( v3 == 2 )
        {
          MiHardFaultPageRelease(a2, v8);
        }
        else
        {
          MiReleaseWriteInProgressCharges(
            *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)),
            1LL,
            1LL);
          MiPfnReferenceCountIsZero(v8, a3);
        }
      }
      else
      {
        MiDecrementShareCountEx(v8, 0LL);
      }
      goto LABEL_45;
    }
    goto LABEL_11;
  }
  v29 = *(_DWORD *)(v8 + 32);
  BYTE2(v29) &= ~8u;
  *(_DWORD *)(v8 + 32) = v29;
  if ( (*(_QWORD *)a2 & 0x42) != 0 )
  {
    v30 = *(_DWORD *)(v8 + 32);
    v23 = BYTE2(v30);
    if ( (v30 & 0x80000) != 0
      && (unsigned int)MiCanPfnOriginalPteBeLost(v8)
      && (*(_BYTE *)(v8 + 34) & 0x10) == 0
      && (*(_DWORD *)(v8 + 16) & 4) != 0 )
    {
      *(_QWORD *)(v8 + 16) &= ~4uLL;
    }
    BYTE2(v30) = v23 | 0x10;
    *(_DWORD *)(v8 + 32) = v30;
  }
  v24 = *(_DWORD *)(v8 + 32);
  LOWORD(v24) = v24 - 1;
  *(_DWORD *)(v8 + 32) = v24;
  if ( !(_WORD)v24 )
  {
    if ( (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) != 0
      || (*(_DWORD *)(v8 + 32) & 0x40000000) != 0
      || (*(_BYTE *)(v8 + 35) & 0x10) != 0
      || byte_140E3C8A6
      && (v25 = *(_BYTE *)(qword_140E3CF00 + 2 * ((0xAAAAAAAAAAAAAAABuLL * (v4 >> 4)) >> 9))) != 0
      && v25 != 10 )
    {
      v11 = 2;
      goto LABEL_7;
    }
    goto LABEL_35;
  }
LABEL_11:
  if ( v3 != 1 )
    goto LABEL_45;
  v13 = 1LL;
  v14 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
  if ( !*(_QWORD *)(v14 + 16904) )
    goto LABEL_13;
  v27 = (volatile LONG *)(v14 + 16888);
  if ( KeGetCurrentIrql() == 2 )
  {
    v28 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v27);
  }
  else
  {
    v28 = ExAcquireSpinLockExclusive(v27);
  }
  v13 = MiRestockOverCommit(v14, 1LL);
  MiReleaseSpinLockExclusive(v14 + 16888, v28);
  if ( v13 )
  {
LABEL_13:
    if ( (ULONG *)v14 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
      for ( i = CurrentPrcb->CachedCommit; (unsigned __int64)(i + v13) <= 0x100; i = v17 )
      {
        v17 = _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedCommit, i + v13, i);
        if ( v17 == i )
        {
          v18 = 1LL;
          goto LABEL_20;
        }
      }
    }
    _InterlockedAdd64((volatile signed __int64 *)(v14 + 19328), -v13);
    MiSignalCommitSignals(v14, _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 19264), -v13) - v13);
  }
  v18 = 1LL;
  if ( (ULONG *)v14 != &MiSystemPartition )
    goto LABEL_53;
LABEL_20:
  v19 = KeGetCurrentPrcb();
  CachedResidentAvailable = v19->CachedResidentAvailable;
  if ( CachedResidentAvailable != -1 )
  {
    do
    {
      if ( (unsigned __int64)(CachedResidentAvailable + 1LL) > 0x100 )
        break;
      v22 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&v19->CachedResidentAvailable,
              CachedResidentAvailable + 1,
              CachedResidentAvailable);
      v21 = CachedResidentAvailable == v22;
      CachedResidentAvailable = v22;
      if ( v21 )
        goto LABEL_45;
    }
    while ( v22 != -1 );
    if ( CachedResidentAvailable > 192
      && CachedResidentAvailable == _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&v19->CachedResidentAvailable,
                                      192,
                                      CachedResidentAvailable) )
    {
      v18 = CachedResidentAvailable - 192 + 1LL;
    }
    v9 = v18;
    if ( !v18 )
    {
LABEL_45:
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return result;
    }
  }
LABEL_53:
  _InterlockedAdd64((volatile signed __int64 *)(v14 + 18752), v9);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
