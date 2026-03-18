/*
 * XREFs of MiAddPageToInsertList @ 0x1402F2180
 * Callers:
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 *     MiInsertProtectedStandbyPage @ 0x1402F09B0 (MiInsertProtectedStandbyPage.c)
 *     MmUnmapViewInSystemCache @ 0x1402F1760 (MmUnmapViewInSystemCache.c)
 *     MiUnlockMdlWritePages @ 0x1402F1FF0 (MiUnlockMdlWritePages.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiPfnReferenceCountIsZero @ 0x14022C950 (MiPfnReferenceCountIsZero.c)
 *     MiInsertPagesInList @ 0x140271500 (MiInsertPagesInList.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     MiSignalCommitSignals @ 0x14028F200 (MiSignalCommitSignals.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCanBatchSystemCacheUnmapPages @ 0x1402F0AE0 (MiCanBatchSystemCacheUnmapPages.c)
 *     MiCanBatchHardFaultPages @ 0x1402F2630 (MiCanBatchHardFaultPages.c)
 *     MiEnqueuePageList @ 0x1402F2770 (MiEnqueuePageList.c)
 *     MiHardFaultPageRelease @ 0x1402F303C (MiHardFaultPageRelease.c)
 *     MiCanPfnOriginalPteBeLost @ 0x14039E1D0 (MiCanPfnOriginalPteBeLost.c)
 *     MiReleaseWriteInProgressCharges @ 0x14043A500 (MiReleaseWriteInProgressCharges.c)
 *     MiRestockOverCommit @ 0x14043A6C0 (MiRestockOverCommit.c)
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
  unsigned __int64 v19; // r8
  struct _KPRCB *v20; // r9
  signed __int32 CachedResidentAvailable; // r8d
  bool v22; // zf
  signed __int32 v23; // eax
  char v24; // r11
  int v25; // eax
  char v26; // cl
  unsigned int v27; // r12d
  volatile LONG *v28; // rcx
  KIRQL v29; // r15
  int v30; // [rsp+50h] [rbp+8h]
  int v31; // [rsp+50h] [rbp+8h]

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
    MiInsertPagesInList((unsigned __int64 *)a1, 0);
  }
  v27 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v27 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v27);
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
      MiInsertPagesInList((unsigned __int64 *)a1, 1);
      if ( v3 )
      {
        if ( v3 == 2 )
        {
          MiHardFaultPageRelease(a2, v8);
        }
        else
        {
          MiReleaseWriteInProgressCharges(
            *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)),
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
  v30 = *(_DWORD *)(v8 + 32);
  BYTE2(v30) &= ~8u;
  *(_DWORD *)(v8 + 32) = v30;
  if ( (*(_QWORD *)a2 & 0x42) != 0 )
  {
    v31 = *(_DWORD *)(v8 + 32);
    v24 = BYTE2(v31);
    if ( (v31 & 0x80000) != 0
      && (unsigned int)MiCanPfnOriginalPteBeLost(v8)
      && (*(_BYTE *)(v8 + 34) & 0x10) == 0
      && (*(_DWORD *)(v8 + 16) & 4) != 0 )
    {
      *(_QWORD *)(v8 + 16) &= ~4uLL;
    }
    BYTE2(v31) = v24 | 0x10;
    *(_DWORD *)(v8 + 32) = v31;
  }
  v25 = *(_DWORD *)(v8 + 32);
  LOWORD(v25) = v25 - 1;
  *(_DWORD *)(v8 + 32) = v25;
  if ( !(_WORD)v25 )
  {
    if ( (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) != 0
      || (*(_DWORD *)(v8 + 32) & 0x40000000) != 0
      || (*(_BYTE *)(v8 + 35) & 0x10) != 0
      || byte_140E3CAE6
      && (v26 = *(_BYTE *)(qword_140E3D140 + 2 * ((0xAAAAAAAAAAAAAAABuLL * (v4 >> 4)) >> 9))) != 0
      && v26 != 10 )
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
  v14 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
  if ( !*(_QWORD *)(v14 + 16904) )
    goto LABEL_13;
  v28 = (volatile LONG *)(v14 + 16888);
  if ( KeGetCurrentIrql() == 2 )
  {
    v29 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v28);
  }
  else
  {
    v29 = ExAcquireSpinLockExclusive(v28);
  }
  v13 = MiRestockOverCommit(v14, 1LL);
  MiReleaseSpinLockExclusive((_DWORD *)(v14 + 16888), v29);
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
    v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 19264), -v13);
    MiSignalCommitSignals(v14, v19 - v13, v19);
  }
  v18 = 1LL;
  if ( (ULONG *)v14 != &MiSystemPartition )
    goto LABEL_50;
LABEL_20:
  v20 = KeGetCurrentPrcb();
  CachedResidentAvailable = v20->CachedResidentAvailable;
  if ( CachedResidentAvailable != -1 )
  {
    do
    {
      if ( (unsigned __int64)(CachedResidentAvailable + 1LL) > 0x100 )
        break;
      v23 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&v20->CachedResidentAvailable,
              CachedResidentAvailable + 1,
              CachedResidentAvailable);
      v22 = CachedResidentAvailable == v23;
      CachedResidentAvailable = v23;
      if ( v22 )
        goto LABEL_45;
    }
    while ( v23 != -1 );
    if ( CachedResidentAvailable > 192
      && CachedResidentAvailable == _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&v20->CachedResidentAvailable,
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
LABEL_50:
  _InterlockedAdd64((volatile signed __int64 *)(v14 + 18752), v9);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
