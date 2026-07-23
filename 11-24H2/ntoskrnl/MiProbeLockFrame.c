/*
 * XREFs of MiProbeLockFrame @ 0x140238050
 * Callers:
 *     MiProbeAndLockPacket @ 0x140237CC0 (MiProbeAndLockPacket.c)
 *     MmProbeAndLockSelectedPages @ 0x140390AC0 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiLockPageTablePage @ 0x140205E40 (MiLockPageTablePage.c)
 *     MiReferenceIoPages @ 0x140238698 (MiReferenceIoPages.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x140238FA0 (ExAcquireRundownProtectionCacheAware.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x14033ECD0 (MiChargePartitionResidentAvailable.c)
 *     MiLockNonPagedPoolPte @ 0x1404355DC (MiLockNonPagedPoolPte.c)
 */

__int64 __fastcall MiProbeLockFrame(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 result; // rax
  unsigned int v9; // esi
  __int64 v10; // rbx
  unsigned int v11; // ebp
  int v12; // r15d
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rax
  char v16; // r14
  ULONG *v17; // rbp
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v20; // ett
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9

  v4 = a2;
  v6 = *(_QWORD *)(a1 + 136);
  if ( v6 > qword_140E2DD20
    || (v7 = 0xFFFFDE0000000028uLL, (*(_QWORD *)(48 * v6 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0) )
  {
    result = MiReferenceIoPages(0, v6, v4, 0, 0LL, 0LL);
    if ( (int)result >= 0 )
      return 0LL;
    ++dword_140E30260;
    return result;
  }
  v9 = 0;
  if ( (*(_DWORD *)(a1 + 72) & 0xF) != 4 || (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(a1 + 8)) )
  {
    v10 = 48LL * *(_QWORD *)(a1 + 136) - 0x220000000000LL;
    v11 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v11 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v7, v6, v4, a4) )
        {
          HvlNotifyLongSpinWait(v11);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
  }
  else
  {
    v10 = MiLockNonPagedPoolPte(((*(_QWORD *)(a1 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *(_QWORD *)(a1 + 136) = 0xAAAAAAAAAAAAAAABuLL * ((v10 + 0x220000000000LL) >> 4);
  }
  if ( (*(_BYTE *)(v10 + 34) & 7u) <= 1 || !(unsigned __int16)*(_DWORD *)(v10 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++dword_140E30254;
    return 3221225477LL;
  }
  if ( (unsigned __int16)*(_DWORD *)(v10 + 32) >= 0x7FFFu )
  {
LABEL_70:
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++dword_140E30258;
    return 3221225633LL;
  }
  v12 = 1;
  if ( (*(_QWORD *)(v10 + 40) & 0x10000000000LL) == 0 && !_bittest64((const signed __int64 *)(v10 + 40), 0x35u) )
  {
    v13 = *(_DWORD *)(v10 + 32);
    v14 = 0;
    v15 = *(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (_WORD)v13 )
    {
      if ( (_WORD)v13 == 1 )
      {
        if ( v15 || (*(_BYTE *)(v10 + 34) & 8) != 0 )
          v14 = 1;
        if ( !v14 )
          goto LABEL_27;
      }
      else if ( (_WORD)v13 != 2 || !v15 || (*(_BYTE *)(v10 + 34) & 8) == 0 )
      {
        goto LABEL_27;
      }
    }
    v16 = 0;
    if ( *(__int64 *)(v10 + 40) < 0 && (*(_DWORD *)(v10 + 16) & 0x400LL) != 0 )
      goto LABEL_66;
    if ( (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
      && (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL )
    {
      if ( (*(_BYTE *)(v10 + 35) & 0x20) != 0 )
      {
LABEL_66:
        v16 = 1;
        v17 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL));
        if ( !(unsigned int)MiChargeCommit(v17, 1LL, 8LL, a4) )
          goto LABEL_70;
        goto LABEL_23;
      }
      v17 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL));
    }
    else
    {
      v17 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL));
    }
LABEL_23:
    if ( v17 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
      {
        v20 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    CachedResidentAvailable - 1,
                                    CachedResidentAvailable);
        if ( v20 == CachedResidentAvailable )
          goto LABEL_27;
      }
    }
    if ( !(unsigned int)MiChargePartitionResidentAvailable(v17, 1LL, 0LL, a4) )
    {
      if ( v16 )
        MiReturnCommit(v17, 1LL, 0LL);
      goto LABEL_70;
    }
  }
LABEL_27:
  v21 = *(_DWORD *)(v10 + 32);
  LOWORD(v21) = v21 + 1;
  *(_DWORD *)(v10 + 32) = v21;
  if ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 && (*(_DWORD *)(v10 + 16) & 0x404) == 4LL )
    *(_BYTE *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) + 723LL) = 1;
  if ( (*(_DWORD *)(v10 + 32) & 0x200000) != 0
    && (*(_DWORD *)(v10 + 32) & 0x80000) == 0
    && (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)v10 + 232LL));
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (*(_DWORD *)(a1 + 72) & 0xF) == 1
    && (*(_QWORD *)(v10 + 40) & 0x10000000000LL) == 0
    && ((*(_QWORD *)(v10 + 40) >> 60) & 7) != 1
    && (*(_QWORD *)(v10 + 40) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL
    && *(_QWORD *)(a1 + 144) != (*(_QWORD *)(v10 + 40) & 0xFFFFFFFFFFLL) )
  {
    if ( *(__int64 *)(v10 + 40) < 0 )
    {
      v23 = v10;
    }
    else
    {
      v23 = 48 * (*(_QWORD *)(v10 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v12 = 2;
    }
    if ( !(unsigned int)MiLockPageTablePage(v23, v12) )
    {
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v9 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v25, v24, v26, v27) )
          {
            HvlNotifyLongSpinWait(v9);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      MiRemoveLockedPageChargeAndDecRef(v10);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ++dword_140E3025C;
      return 3221225633LL;
    }
    if ( (*(_DWORD *)(a1 + 72) & 0x40) == 0 )
      *(_QWORD *)(a1 + 144) = *(_QWORD *)(v10 + 40) & 0xFFFFFFFFFFLL;
    *(_WORD *)(*(_QWORD *)(a1 + 64) + 10LL) |= 0x100u;
  }
  if ( *(char *)(*(_QWORD *)(a1 + 64) + 10LL) < 0 && *(__int64 *)(v10 + 40) < 0 )
  {
    v22 = *(_QWORD *)(v10 + 16);
    if ( (v22 & 0x400) != 0 )
    {
      if ( qword_140E2DCC0 && (v22 & 0x10) == 0 )
        v22 &= ~qword_140E2DCC0;
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v22 >> 16) + 112LL));
    }
  }
  if ( ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FF) != 0 )
    ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*((_QWORD *)qword_140E300C8
                                                                          + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL))
                                                                        + 2784LL));
  return 0LL;
}
