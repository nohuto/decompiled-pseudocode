/*
 * XREFs of MiLockTransitionLeafPageEx @ 0x14036A520
 * Callers:
 *     MiAccessCheck @ 0x140213E80 (MiAccessCheck.c)
 *     MiDecommitHandleTransitionPte @ 0x140286C5C (MiDecommitHandleTransitionPte.c)
 *     MiUserFault @ 0x1402FD560 (MiUserFault.c)
 *     MiReplacePageTablePage @ 0x140311CD4 (MiReplacePageTablePage.c)
 *     MiGetPageForWriteCluster @ 0x14036A3A0 (MiGetPageForWriteCluster.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MiTranslatePageForCopy @ 0x1403961F0 (MiTranslatePageForCopy.c)
 *     MiMakeTransitionHeatBatch @ 0x140402D04 (MiMakeTransitionHeatBatch.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140442B00 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiMakeOutswappedPageResident @ 0x1404A8280 (MiMakeOutswappedPageResident.c)
 *     MiCheckCommitReleaseFromVad @ 0x140669880 (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPte @ 0x14066AA20 (MiWalkResetCommitPte.c)
 *     MiQueryVaPhysicalContiguity @ 0x140680DC0 (MiQueryVaPhysicalContiguity.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068BF88 (MiStoreDiscardPoisonedPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068CDFC (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14023C31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockTransitionLeafPageEx(ULONG_PTR BugCheckParameter2, unsigned __int8 *a2, char a3)
{
  ULONG_PTR v6; // rbx
  __int64 v7; // r8
  unsigned __int64 v8; // rax
  ULONG_PTR v9; // rax
  __int64 v10; // rdi
  unsigned int v11; // r14d
  char v13; // dl
  __int64 v14; // rdx
  char v15; // al
  unsigned __int64 v16; // rbx

  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        do
        {
          v6 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
          if ( (unsigned __int64)a2 > 1 && ((v6 & 1) != 0 || (v6 & 0x400) != 0) || (v6 & 0x800) == 0 )
            return 0LL;
        }
        while ( (v6 & 1) != 0 || v6 && qword_140E2DB80 && (qword_140E2DB80 & v6) == 0 );
        v8 = v6;
        if ( qword_140E2DB80 )
        {
          if ( (v6 & 0x10) != 0 )
            v8 = v6 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v8 = v6 & ~qword_140E2DB80;
        }
        v9 = (v8 >> 12) & 0xFFFFFFFFFFLL;
        v10 = 48 * v9 - 0x220000000000LL;
        if ( (unsigned __int64)a2 <= 1 )
          break;
        v15 = MiSafeLockPage(v9, 0xFFFFDE0000000000uLL, v7);
        *a2 = v15;
        if ( v15 != 17 )
          goto LABEL_15;
      }
    }
    while ( v9 > qword_140E2DBE0 || ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 );
    if ( a2 == (unsigned __int8 *)1 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
        return 0LL;
    }
    else
    {
      v11 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v11 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
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
LABEL_15:
    if ( MI_READ_PTE_LOCK_FREE(BugCheckParameter2) == v6 )
      break;
    if ( (unsigned __int64)a2 > 1 )
      MiUnlockPage(v10, *a2);
    else
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
  {
    v13 = (a2 == (unsigned __int8 *)1) | 2;
    if ( (a3 & 1) == 0 )
      v13 = a2 == (unsigned __int8 *)1;
    v10 = MiLockSpecialPurposeMemoryCachedPage(v10, v13);
    if ( !v10 )
    {
      if ( (unsigned __int64)a2 > 1 )
      {
        v16 = *a2;
        if ( KiIrqlFlags )
        {
          LOBYTE(v14) = *a2;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
        }
        __writecr8(v16);
      }
      return 0LL;
    }
  }
  if ( (unsigned __int64)a2 <= 1
    && (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) != BugCheckParameter2
    && (*(_QWORD *)(v10 + 40) & 0x10000000000LL) == 0 )
  {
    KeBugCheckEx(0x1Au, 0x411uLL, BugCheckParameter2, v6, *(_QWORD *)(v10 + 8));
  }
  return v10;
}
