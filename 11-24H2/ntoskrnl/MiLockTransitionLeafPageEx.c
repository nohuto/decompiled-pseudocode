/*
 * XREFs of MiLockTransitionLeafPageEx @ 0x1402EC2C0
 * Callers:
 *     MiDecommitHandleTransitionPte @ 0x14029685C (MiDecommitHandleTransitionPte.c)
 *     MiGetPageForWriteCluster @ 0x1402EC140 (MiGetPageForWriteCluster.c)
 *     MiMakeOutswappedPageResident @ 0x1402EF6F4 (MiMakeOutswappedPageResident.c)
 *     MiAccessCheck @ 0x1403071E0 (MiAccessCheck.c)
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 *     MmProtectPool @ 0x14038233C (MmProtectPool.c)
 *     MiReplacePageTablePage @ 0x1403F2DE8 (MiReplacePageTablePage.c)
 *     MiTranslatePageForCopy @ 0x1403F3CE0 (MiTranslatePageForCopy.c)
 *     MiMakeTransitionHeatBatch @ 0x1403FD304 (MiMakeTransitionHeatBatch.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14043BAD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiCheckCommitReleaseFromVad @ 0x14066AA50 (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPte @ 0x14066BBF0 (MiWalkResetCommitPte.c)
 *     MiQueryVaPhysicalContiguity @ 0x140681F6C (MiQueryVaPhysicalContiguity.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068D0B8 (MiStoreDiscardPoisonedPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068DF2C (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140204044 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockTransitionLeafPageEx(ULONG_PTR BugCheckParameter2, unsigned __int8 *a2, char a3)
{
  ULONG_PTR v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  unsigned int v10; // r14d
  char v12; // dl
  __int64 v13; // rdx
  unsigned __int8 v14; // al
  unsigned __int64 v15; // rbx

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
        while ( (v6 & 1) != 0 || v6 && qword_140E2DCC0 && (qword_140E2DCC0 & v6) == 0 );
        v7 = v6;
        if ( qword_140E2DCC0 )
        {
          if ( (v6 & 0x10) != 0 )
            v7 = v6 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v7 = v6 & ~qword_140E2DCC0;
        }
        v8 = (v7 >> 12) & 0xFFFFFFFFFFLL;
        v9 = 48 * v8 - 0x220000000000LL;
        if ( (unsigned __int64)a2 <= 1 )
          break;
        v14 = MiSafeLockPage(v8);
        *a2 = v14;
        if ( v14 != 17 )
          goto LABEL_15;
      }
    }
    while ( v8 > qword_140E2DD20 || ((*(_QWORD *)(48 * v8 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 );
    if ( a2 == (unsigned __int8 *)1 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
        return 0LL;
    }
    else
    {
      v10 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v10 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v10);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
    }
LABEL_15:
    if ( MI_READ_PTE_LOCK_FREE(BugCheckParameter2) == v6 )
      break;
    if ( (unsigned __int64)a2 > 1 )
      MiUnlockPage(v9, *a2);
    else
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
  {
    v12 = (a2 == (unsigned __int8 *)1) | 2;
    if ( (a3 & 1) == 0 )
      v12 = a2 == (unsigned __int8 *)1;
    v9 = MiLockSpecialPurposeMemoryCachedPage(v9, v12);
    if ( !v9 )
    {
      if ( (unsigned __int64)a2 > 1 )
      {
        v15 = *a2;
        if ( KiIrqlFlags )
        {
          LOBYTE(v13) = *a2;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
        }
        __writecr8(v15);
      }
      return 0LL;
    }
  }
  if ( (unsigned __int64)a2 <= 1
    && (*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL) != BugCheckParameter2
    && (*(_QWORD *)(v9 + 40) & 0x10000000000LL) == 0 )
  {
    KeBugCheckEx(0x1Au, 0x411uLL, BugCheckParameter2, v6, *(_QWORD *)(v9 + 8));
  }
  return v9;
}
