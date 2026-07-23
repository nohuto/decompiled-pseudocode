/*
 * XREFs of MiUnlockPageTableCharges @ 0x1403DB820
 * Callers:
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     MiDemoteCombinedPte @ 0x140296374 (MiDemoteCombinedPte.c)
 *     MiProbeUnlockPage @ 0x140299FB0 (MiProbeUnlockPage.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiUnlockPageTableRange @ 0x1403DB524 (MiUnlockPageTableRange.c)
 *     MiUnlockWsle @ 0x1403DB664 (MiUnlockWsle.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 *     MiUnlockPhysicalPageByVa @ 0x14066FD70 (MiUnlockPhysicalPageByVa.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x14024D700 (MiPfnShareCountIsZero.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall MiUnlockPageTableCharges(__int64 BugCheckParameter2, int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  int v8; // edx
  _QWORD *v9; // rcx
  int v10; // r12d
  unsigned __int64 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // r14
  unsigned int v14; // esi
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 CachedResidentAvailable; // edx
  bool v17; // zf
  signed __int32 v18; // eax

  v4 = 0LL;
  v5 = BugCheckParameter2;
  if ( a2 != 2 )
  {
    v10 = 1;
    if ( !a2 )
      v10 = 4;
    goto LABEL_10;
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 6
    && (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
  {
    v6 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
    if ( v6 >= 0xFFFFF68000000000uLL )
    {
      a3 = 0xFFFFF6FFFFFFFFFFuLL;
      if ( v6 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v7 = (__int64)(v6 << 25) >> 16;
        if ( v7 >= 0xFFFFF68000000000uLL && v7 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v8 = 1;
          BugCheckParameter2 = v5;
          goto LABEL_9;
        }
      }
    }
    BugCheckParameter2 = v5;
  }
  v8 = 0;
LABEL_9:
  v9 = (_QWORD *)(BugCheckParameter2 + 24);
  v10 = 3;
  if ( !v8 )
    goto LABEL_11;
LABEL_10:
  v9 = (_QWORD *)(v5 + 24);
  if ( (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
LABEL_11:
    KeBugCheckEx(0x1Au, 0x41791uLL, v5, *(_QWORD *)(v5 + 8) | 0x8000000000000000uLL, *v9 & 0x3FFFFFFFFFFFFFFFLL);
  v11 = 0LL;
  v12 = 0LL;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFLL;
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v14 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v14);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v5 + 24) < 0 );
    }
    *(_QWORD *)(v5 + 24) = ((*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 0x10000) ^ (*(_QWORD *)(v5 + 24) ^ ((*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 0x10000)) & 0xC000000000000000uLL;
    if ( (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
      break;
    if ( !v4 )
      v4 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL));
    ++v11;
    if ( (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 && (unsigned int)MiPfnShareCountIsZero(v5, 0LL, a3, a4) != 3 )
      ++v12;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !--v10 )
      goto LABEL_17;
    v5 = 48 * v13 - 0x220000000000LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_17:
  if ( v11 )
  {
    if ( (ULONG *)v4 != &MiSystemPartition )
      goto LABEL_41;
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    if ( CachedResidentAvailable == -1 )
      goto LABEL_41;
    do
    {
      if ( v11 + CachedResidentAvailable > 0x100 || v11 >= 0x80000 )
        break;
      v18 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
              v11 + CachedResidentAvailable,
              CachedResidentAvailable);
      v17 = CachedResidentAvailable == v18;
      CachedResidentAvailable = v18;
      if ( v17 )
        goto LABEL_23;
    }
    while ( v18 != -1 );
    if ( CachedResidentAvailable > 192
      && CachedResidentAvailable == _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                      192,
                                      CachedResidentAvailable) )
    {
      v11 += CachedResidentAvailable - 192;
    }
    if ( v11 )
LABEL_41:
      _InterlockedAdd64((volatile signed __int64 *)(v4 + 18752), v11);
  }
LABEL_23:
  if ( v12 )
    MiReturnCommit(v4, v12, 0);
}
