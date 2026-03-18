/*
 * XREFs of MiUnlockPageTableCharges @ 0x1402CBD20
 * Callers:
 *     MiProbeUnlockPage @ 0x1402CB9A0 (MiProbeUnlockPage.c)
 *     MiUnlockWsle @ 0x1402CC3B4 (MiUnlockWsle.c)
 *     MiUnlockPageTableRange @ 0x1402CC7F0 (MiUnlockPageTableRange.c)
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     MiDemoteCombinedPte @ 0x14037EFEC (MiDemoteCombinedPte.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MiUnlockPhysicalPageByVa @ 0x140663060 (MiUnlockPhysicalPageByVa.c)
 * Callees:
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiPfnShareCountIsZero @ 0x140342440 (MiPfnShareCountIsZero.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiUnlockPageTableCharges(ULONG_PTR BugCheckParameter2, int a2)
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
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 CachedResidentAvailable; // edx
  bool v16; // zf

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
    goto LABEL_24;
LABEL_10:
  v7 = (_QWORD *)(v3 + 24);
  if ( (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
LABEL_24:
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
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v7) )
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
    v7 = (_QWORD *)(((*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 0x10000) ^ (*(_QWORD *)(v3 + 24) ^ ((*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 0x10000)) & 0xC000000000000000uLL);
    *(_QWORD *)(v3 + 24) = v7;
    result = *(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( result >= 0x10000 )
      break;
    if ( !v2 )
    {
      v7 = qword_140E2FD48;
      v2 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v3 + 40) >> 43) & 0x3FFLL));
    }
    ++v9;
    if ( (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 && (unsigned int)MiPfnShareCountIsZero(v3, 0LL) != 3 )
      ++v10;
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !--v8 )
      goto LABEL_16;
    v3 = 48 * v11 - 0x220000000000LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_16:
  if ( v9 )
  {
    result = (unsigned __int64)&MiSystemPartition;
    if ( (ULONG *)v2 != &MiSystemPartition )
      goto LABEL_40;
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    if ( CachedResidentAvailable == -1 )
      goto LABEL_40;
    do
    {
      if ( v9 + CachedResidentAvailable > 0x100 || v9 >= 0x80000 )
        break;
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                               v9 + CachedResidentAvailable,
                               CachedResidentAvailable);
      v16 = CachedResidentAvailable == (_DWORD)result;
      CachedResidentAvailable = result;
      if ( v16 )
        goto LABEL_22;
    }
    while ( (_DWORD)result != -1 );
    if ( CachedResidentAvailable > 192 )
    {
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                               192,
                               CachedResidentAvailable);
      if ( CachedResidentAvailable == (_DWORD)result )
      {
        result = (unsigned int)(CachedResidentAvailable - 192);
        v9 += (int)result;
      }
    }
    if ( v9 )
LABEL_40:
      _InterlockedAdd64((volatile signed __int64 *)(v2 + 18752), v9);
  }
LABEL_22:
  if ( v10 )
    return MiReturnCommit(v2, v10, 0LL);
  return result;
}
