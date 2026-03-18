/*
 * XREFs of MiUnlockPageTableCharges @ 0x1402C7D50
 * Callers:
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     MiProbeUnlockPage @ 0x14028A3B0 (MiProbeUnlockPage.c)
 *     MiUnlockPageTableRange @ 0x1402C7A54 (MiUnlockPageTableRange.c)
 *     MiUnlockWsle @ 0x1402C7B94 (MiUnlockWsle.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiDemoteCombinedPte @ 0x1403FABBC (MiDemoteCombinedPte.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     MiUnlockPhysicalPageByVa @ 0x14066EBA0 (MiUnlockPhysicalPageByVa.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x1402209B0 (MiPfnShareCountIsZero.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall MiUnlockPageTableCharges(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v2; // rbp
  ULONG_PTR v3; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  int v6; // edx
  _QWORD *v7; // rcx
  int v8; // r12d
  unsigned __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // r14
  unsigned int v12; // esi
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 CachedResidentAvailable; // edx
  bool v15; // zf
  signed __int32 v16; // eax

  v2 = 0LL;
  v3 = BugCheckParameter2;
  if ( a2 != 2 )
  {
    v8 = 1;
    if ( !a2 )
      v8 = 4;
    goto LABEL_10;
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 6
    && (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
  {
    v4 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
    if ( v4 >= 0xFFFFF68000000000uLL && v4 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v5 = (__int64)(v4 << 25) >> 16;
      if ( v5 >= 0xFFFFF68000000000uLL && v5 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v6 = 1;
        BugCheckParameter2 = v3;
        goto LABEL_9;
      }
    }
    BugCheckParameter2 = v3;
  }
  v6 = 0;
LABEL_9:
  v7 = (_QWORD *)(BugCheckParameter2 + 24);
  v8 = 3;
  if ( !v6 )
    goto LABEL_11;
LABEL_10:
  v7 = (_QWORD *)(v3 + 24);
  if ( (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
LABEL_11:
    KeBugCheckEx(0x1Au, 0x41791uLL, v3, *(_QWORD *)(v3 + 8) | 0x8000000000000000uLL, *v7 & 0x3FFFFFFFFFFFFFFFLL);
  v9 = 0LL;
  v10 = 0LL;
  while ( 1 )
  {
    v11 = *(_QWORD *)(v3 + 40) & 0xFFFFFFFFFFLL;
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v12);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
    *(_QWORD *)(v3 + 24) = ((*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 0x10000) ^ (*(_QWORD *)(v3 + 24) ^ ((*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 0x10000)) & 0xC000000000000000uLL;
    if ( (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
      break;
    if ( !v2 )
      v2 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v3 + 40) >> 43) & 0x3FFLL));
    ++v9;
    if ( (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 && (unsigned int)MiPfnShareCountIsZero(v3, 0LL) != 3 )
      ++v10;
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !--v8 )
      goto LABEL_17;
    v3 = 48 * v11 - 0x220000000000LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_17:
  if ( v9 )
  {
    if ( (ULONG *)v2 != &MiSystemPartition )
      goto LABEL_41;
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    if ( CachedResidentAvailable == -1 )
      goto LABEL_41;
    do
    {
      if ( v9 + CachedResidentAvailable > 0x100 || v9 >= 0x80000 )
        break;
      v16 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
              v9 + CachedResidentAvailable,
              CachedResidentAvailable);
      v15 = CachedResidentAvailable == v16;
      CachedResidentAvailable = v16;
      if ( v15 )
        goto LABEL_23;
    }
    while ( v16 != -1 );
    if ( CachedResidentAvailable > 192
      && CachedResidentAvailable == _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                      192,
                                      CachedResidentAvailable) )
    {
      v9 += CachedResidentAvailable - 192;
    }
    if ( v9 )
LABEL_41:
      _InterlockedAdd64((volatile signed __int64 *)(v2 + 18752), v9);
  }
LABEL_23:
  if ( v10 )
    MiReturnCommit(v2, v10, 0);
}
