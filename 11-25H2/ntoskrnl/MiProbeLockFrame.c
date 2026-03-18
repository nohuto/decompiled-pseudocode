/*
 * XREFs of MiProbeLockFrame @ 0x1402ACAF0
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x1402AABA0 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockPacket @ 0x1402AC750 (MiProbeAndLockPacket.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14022BAA0 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockNonPagedPoolPte @ 0x1402AAF08 (MiLockNonPagedPoolPte.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockPageTablePage @ 0x1402AC2E0 (MiLockPageTablePage.c)
 *     MiReferenceIoPages @ 0x1402AD138 (MiReferenceIoPages.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1402ADA40 (ExAcquireRundownProtectionCacheAware.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiProbeLockFrame(__int64 a1, int a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 result; // rax
  unsigned int v7; // esi
  ULONG_PTR v8; // rbx
  unsigned int v9; // ebp
  int v10; // r15d
  int v11; // edx
  int v12; // ecx
  __int64 v13; // rax
  char v14; // r14
  ULONG *v15; // rbp
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v18; // ett
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // r9

  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 > qword_140E2D9A0
    || (v5 = 0xFFFFDE0000000028uLL, (*(_QWORD *)(48 * v4 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0) )
  {
    result = MiReferenceIoPages(0, v4, a2, 0, 0LL, 0LL);
    if ( (int)result >= 0 )
      return 0LL;
    ++dword_140E2FED8;
    return result;
  }
  v7 = 0;
  if ( (*(_DWORD *)(a1 + 72) & 0xF) != 4 || (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(a1 + 8)) )
  {
    v8 = 48LL * *(_QWORD *)(a1 + 136) - 0x220000000000LL;
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v5) )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
  }
  else
  {
    v8 = MiLockNonPagedPoolPte(((*(_QWORD *)(a1 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *(_QWORD *)(a1 + 136) = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v8 + 0x220000000000LL) >> 4);
  }
  if ( (*(_BYTE *)(v8 + 34) & 7u) <= 1 || !(unsigned __int16)*(_DWORD *)(v8 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++dword_140E2FECC;
    return 3221225477LL;
  }
  if ( (unsigned __int16)*(_DWORD *)(v8 + 32) >= 0x7FFFu )
  {
LABEL_70:
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++dword_140E2FED0;
    return 3221225633LL;
  }
  v10 = 1;
  if ( (*(_QWORD *)(v8 + 40) & 0x10000000000LL) == 0 && !_bittest64((const signed __int64 *)(v8 + 40), 0x35u) )
  {
    v11 = *(_DWORD *)(v8 + 32);
    v12 = 0;
    v13 = *(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (_WORD)v11 )
    {
      if ( (_WORD)v11 == 1 )
      {
        if ( v13 || (*(_BYTE *)(v8 + 34) & 8) != 0 )
          v12 = 1;
        if ( !v12 )
          goto LABEL_27;
      }
      else if ( (_WORD)v11 != 2 || !v13 || (*(_BYTE *)(v8 + 34) & 8) == 0 )
      {
        goto LABEL_27;
      }
    }
    v14 = 0;
    if ( *(__int64 *)(v8 + 40) < 0 && (*(_DWORD *)(v8 + 16) & 0x400LL) != 0 )
      goto LABEL_66;
    if ( (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
      && (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL )
    {
      if ( (*(_BYTE *)(v8 + 35) & 0x20) != 0 )
      {
LABEL_66:
        v14 = 1;
        v15 = (ULONG *)*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
        if ( !(unsigned int)MiChargeCommit((__int64)v15, 1uLL, 8) )
          goto LABEL_70;
        goto LABEL_23;
      }
      v15 = (ULONG *)*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
    }
    else
    {
      v15 = (ULONG *)*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
    }
LABEL_23:
    if ( v15 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
      {
        v18 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    CachedResidentAvailable - 1,
                                    CachedResidentAvailable);
        if ( v18 == CachedResidentAvailable )
          goto LABEL_27;
      }
    }
    if ( !(unsigned int)MiChargePartitionResidentAvailable((__int64)v15, 1uLL, 0LL) )
    {
      if ( v14 )
        MiReturnCommit(v15, 1LL, 0LL);
      goto LABEL_70;
    }
  }
LABEL_27:
  v19 = *(_DWORD *)(v8 + 32);
  LOWORD(v19) = v19 + 1;
  *(_DWORD *)(v8 + 32) = v19;
  if ( (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 && (*(_DWORD *)(v8 + 16) & 0x404) == 4LL )
    *(_BYTE *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)) + 723LL) = 1;
  if ( (*(_DWORD *)(v8 + 32) & 0x200000) != 0
    && (*(_DWORD *)(v8 + 32) & 0x80000) == 0
    && (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)v8 + 232LL));
  }
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (*(_DWORD *)(a1 + 72) & 0xF) == 1
    && (*(_QWORD *)(v8 + 40) & 0x10000000000LL) == 0
    && ((*(_QWORD *)(v8 + 40) >> 60) & 7) != 1
    && (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL
    && *(_QWORD *)(a1 + 144) != (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL) )
  {
    if ( *(__int64 *)(v8 + 40) < 0 )
    {
      v21 = v8;
    }
    else
    {
      v21 = 48 * (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v10 = 2;
    }
    if ( !(unsigned int)MiLockPageTablePage(v21, v10) )
    {
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v7 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v23) )
          {
            HvlNotifyLongSpinWait(v7);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v8 + 24) < 0 );
      }
      MiRemoveLockedPageChargeAndDecRef(v8, v22, v24, v25);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ++dword_140E2FED4;
      return 3221225633LL;
    }
    if ( (*(_DWORD *)(a1 + 72) & 0x40) == 0 )
      *(_QWORD *)(a1 + 144) = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL;
    *(_WORD *)(*(_QWORD *)(a1 + 64) + 10LL) |= 0x100u;
  }
  if ( *(char *)(*(_QWORD *)(a1 + 64) + 10LL) < 0 && *(__int64 *)(v8 + 40) < 0 )
  {
    v20 = *(_QWORD *)(v8 + 16);
    if ( (v20 & 0x400) != 0 )
    {
      if ( qword_140E2D940 && (v20 & 0x10) == 0 )
        v20 &= ~qword_140E2D940;
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v20 >> 16) + 112LL));
    }
  }
  if ( ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FF) != 0 )
    ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*((_QWORD *)qword_140E2FD48
                                                                          + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL))
                                                                        + 2784LL));
  return 0LL;
}
