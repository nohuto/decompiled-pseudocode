/*
 * XREFs of MiAddPageToInsertList @ 0x140257CC0
 * Callers:
 *     MiFinishHardFault @ 0x140255E80 (MiFinishHardFault.c)
 *     MiInsertProtectedStandbyPage @ 0x1402567C0 (MiInsertProtectedStandbyPage.c)
 *     MmUnmapViewInSystemCache @ 0x1402572A0 (MmUnmapViewInSystemCache.c)
 *     MiUnlockMdlWritePages @ 0x140257B30 (MiUnlockMdlWritePages.c)
 * Callees:
 *     MiInsertPagesInList @ 0x140226A90 (MiInsertPagesInList.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiCanBatchHardFaultPages @ 0x140258170 (MiCanBatchHardFaultPages.c)
 *     MiEnqueuePageList @ 0x1402582B0 (MiEnqueuePageList.c)
 *     MiHardFaultPageRelease @ 0x140258B7C (MiHardFaultPageRelease.c)
 *     MiCanBatchSystemCacheUnmapPages @ 0x140258E20 (MiCanBatchSystemCacheUnmapPages.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiSignalCommitSignals @ 0x14029EE00 (MiSignalCommitSignals.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCanPfnOriginalPteBeLost @ 0x1402EE318 (MiCanPfnOriginalPteBeLost.c)
 *     MiPfnReferenceCountIsZero @ 0x140300260 (MiPfnReferenceCountIsZero.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseWriteInProgressCharges @ 0x14042CD34 (MiReleaseWriteInProgressCharges.c)
 *     MiRestockOverCommit @ 0x14042CEF4 (MiRestockOverCommit.c)
 */

__int64 __fastcall MiAddPageToInsertList(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // r14
  __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  int CanBatchHardFaultPages; // eax
  int v12; // ecx
  __int64 result; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 i; // rdx
  signed __int32 v18; // eax
  __int64 v19; // rdx
  struct _KPRCB *v20; // r9
  signed __int32 CachedResidentAvailable; // r8d
  bool v22; // zf
  signed __int32 v23; // eax
  char v24; // r11
  int v25; // eax
  char v26; // cl
  unsigned int v27; // r12d
  __int64 v28; // r8
  __int64 v29; // r9
  volatile LONG *v30; // rcx
  KIRQL v31; // r15
  int v32; // [rsp+50h] [rbp+8h]
  int v33; // [rsp+50h] [rbp+8h]

  v4 = *(_DWORD *)(a1 + 96);
  v5 = 48 * a3;
  v9 = 48 * a3 - 0x220000000000LL;
  v10 = 1LL;
  if ( v4 == 3 )
  {
LABEL_35:
    v12 = 1;
    goto LABEL_7;
  }
  while ( *(_QWORD *)a1 )
  {
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      goto LABEL_4;
    MiInsertPagesInList((unsigned __int64 *)a1, 0);
  }
  v27 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v27 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, a4) )
      {
        HvlNotifyLongSpinWait(v27);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v9 + 24) < 0 );
  }
LABEL_4:
  if ( v4 == 2 )
  {
    CanBatchHardFaultPages = MiCanBatchHardFaultPages(a2, v9);
    goto LABEL_6;
  }
  if ( !v4 )
  {
    CanBatchHardFaultPages = MiCanBatchSystemCacheUnmapPages(a2, v9);
LABEL_6:
    v12 = CanBatchHardFaultPages;
    if ( CanBatchHardFaultPages )
    {
LABEL_7:
      if ( !*(_QWORD *)a1 )
        *(_DWORD *)(a1 + 12) = (*(_BYTE *)(v9 + 34) & 0x10 | 0x20u) >> 4;
      if ( v12 == 1 )
        return MiEnqueuePageList(a1, a3);
      MiInsertPagesInList((unsigned __int64 *)a1, 1);
      if ( v4 )
      {
        if ( v4 == 2 )
        {
          MiHardFaultPageRelease(a2, v9);
        }
        else
        {
          MiReleaseWriteInProgressCharges(
            *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)),
            1LL,
            1LL);
          MiPfnReferenceCountIsZero(v9, a3);
        }
      }
      else
      {
        MiDecrementShareCountEx(v9, 0LL, v28, v29);
      }
      goto LABEL_45;
    }
    goto LABEL_11;
  }
  v32 = *(_DWORD *)(v9 + 32);
  BYTE2(v32) &= ~8u;
  *(_DWORD *)(v9 + 32) = v32;
  if ( (*a2 & 0x42) != 0 )
  {
    v33 = *(_DWORD *)(v9 + 32);
    v24 = BYTE2(v33);
    if ( (v33 & 0x80000) != 0
      && (unsigned int)MiCanPfnOriginalPteBeLost(v9)
      && (*(_BYTE *)(v9 + 34) & 0x10) == 0
      && (*(_DWORD *)(v9 + 16) & 4) != 0 )
    {
      *(_QWORD *)(v9 + 16) &= ~4uLL;
    }
    BYTE2(v33) = v24 | 0x10;
    *(_DWORD *)(v9 + 32) = v33;
  }
  v25 = *(_DWORD *)(v9 + 32);
  LOWORD(v25) = v25 - 1;
  *(_DWORD *)(v9 + 32) = v25;
  if ( !(_WORD)v25 )
  {
    if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) != 0
      || (*(_DWORD *)(v9 + 32) & 0x40000000) != 0
      || (*(_BYTE *)(v9 + 35) & 0x10) != 0
      || byte_140E3CC26
      && (v26 = *(_BYTE *)(qword_140E3D280 + 2 * ((0xAAAAAAAAAAAAAAABuLL * (v5 >> 4)) >> 9))) != 0
      && v26 != 10 )
    {
      v12 = 2;
      goto LABEL_7;
    }
    goto LABEL_35;
  }
LABEL_11:
  if ( v4 != 1 )
    goto LABEL_45;
  v14 = 1LL;
  v15 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
  if ( !*(_QWORD *)(v15 + 16904) )
    goto LABEL_13;
  v30 = (volatile LONG *)(v15 + 16888);
  if ( KeGetCurrentIrql() == 2 )
  {
    v31 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v30);
  }
  else
  {
    v31 = ExAcquireSpinLockExclusive(v30);
  }
  v14 = MiRestockOverCommit(v15, 1LL);
  MiReleaseSpinLockExclusive(v15 + 16888, v31);
  if ( v14 )
  {
LABEL_13:
    if ( (ULONG *)v15 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
      for ( i = CurrentPrcb->CachedCommit; (unsigned __int64)(i + v14) <= 0x100; i = v18 )
      {
        v18 = _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedCommit, i + v14, i);
        if ( v18 == i )
        {
          v19 = 1LL;
          goto LABEL_20;
        }
      }
    }
    _InterlockedAdd64((volatile signed __int64 *)(v15 + 19328), -v14);
    MiSignalCommitSignals(v15, _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 19264), -v14) - v14);
  }
  v19 = 1LL;
  if ( (ULONG *)v15 != &MiSystemPartition )
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
      v19 = CachedResidentAvailable - 192 + 1LL;
    }
    v10 = v19;
    if ( !v19 )
    {
LABEL_45:
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return result;
    }
  }
LABEL_50:
  _InterlockedAdd64((volatile signed __int64 *)(v15 + 18752), v10);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
