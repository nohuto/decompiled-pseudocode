/*
 * XREFs of MiLockTransitionLeafPageEx @ 0x14040D774
 * Callers:
 *     MiUserFault @ 0x14024A660 (MiUserFault.c)
 *     MiTranslatePageForCopy @ 0x1403783E0 (MiTranslatePageForCopy.c)
 *     MiDecommitHandleTransitionPte @ 0x140383AF4 (MiDecommitHandleTransitionPte.c)
 *     MmProtectPool @ 0x14039FEDC (MmProtectPool.c)
 *     MiAccessCheck @ 0x1403E1820 (MiAccessCheck.c)
 *     MiReplacePageTablePage @ 0x14040B438 (MiReplacePageTablePage.c)
 *     MiGetPageForWriteCluster @ 0x14040D5F4 (MiGetPageForWriteCluster.c)
 *     MiMakeOutswappedPageResident @ 0x14040F088 (MiMakeOutswappedPageResident.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1404C22F8 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiMakeTransitionHeatBatch @ 0x1404F4FB0 (MiMakeTransitionHeatBatch.c)
 *     MiCheckCommitReleaseFromVad @ 0x14065DD60 (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPte @ 0x14065EF40 (MiWalkResetCommitPte.c)
 *     MiQueryVaPhysicalContiguity @ 0x1406755A0 (MiQueryVaPhysicalContiguity.c)
 *     MiStoreDiscardPoisonedPage @ 0x1406806F8 (MiStoreDiscardPoisonedPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068156C (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1402343E0 (MiInvalidPteConforms.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14033F5DC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockTransitionLeafPageEx(ULONG_PTR BugCheckParameter2, unsigned __int8 *a2, char a3)
{
  __int64 v6; // rax
  ULONG_PTR v7; // rbx
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rbp
  int v12; // r14d
  volatile signed __int32 *v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rdx
  __int64 v18; // rdx
  char v19; // al
  unsigned __int64 v20; // rbx

  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        do
        {
          v6 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
          v7 = v6;
          if ( (unsigned __int64)a2 > 1 && ((v6 & 1) != 0 || (v6 & 0x400) != 0) || (v6 & 0x800) == 0 )
            return 0LL;
        }
        while ( !MiInvalidPteConforms(v6) );
        v9 = v7;
        if ( qword_140E2D940 )
        {
          if ( (v7 & 0x10) != 0 )
            v9 = v7 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v9 = v7 & ~qword_140E2D940;
        }
        v10 = (v9 >> 12) & 0xFFFFFFFFFFLL;
        v11 = 48 * v10 - 0x220000000000LL;
        if ( (unsigned __int64)a2 <= 1 )
          break;
        v19 = MiSafeLockPage(v10, 0xFFFFDE0000000000uLL, v8);
        *a2 = v19;
        if ( v19 != 17 )
        {
          v13 = (volatile signed __int32 *)(v11 + 24);
          goto LABEL_13;
        }
      }
    }
    while ( v10 > qword_140E2D9A0 || ((*(_QWORD *)(48 * v10 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 );
    if ( a2 == (unsigned __int8 *)1 )
    {
      v13 = (volatile signed __int32 *)(v11 + 24);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
        return 0LL;
    }
    else
    {
      v12 = 0;
      v13 = (volatile signed __int32 *)(48 * v10 - 0x21FFFFFFFFE8LL);
      while ( _interlockedbittestandset64(v13, 0x3FuLL) )
      {
        do
        {
          if ( (++v12 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait();
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)v13 < 0 );
      }
    }
LABEL_13:
    if ( MI_READ_PTE_LOCK_FREE(BugCheckParameter2) == v7 )
      break;
    if ( (unsigned __int64)a2 > 1 )
      MiUnlockPage(v11, *a2);
    else
      _InterlockedAnd64((volatile signed __int64 *)v13, 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v11 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
  {
    v17 = (a2 == (unsigned __int8 *)1) | 2u;
    if ( (a3 & 1) == 0 )
      v17 = a2 == (unsigned __int8 *)1;
    v11 = MiLockSpecialPurposeMemoryCachedPage(v11, v17, v14, v15);
    if ( !v11 )
    {
      if ( (unsigned __int64)a2 > 1 )
      {
        v20 = *a2;
        if ( KiIrqlFlags )
        {
          LOBYTE(v18) = *a2;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v18);
        }
        __writecr8(v20);
      }
      return 0LL;
    }
  }
  if ( (unsigned __int64)a2 <= 1
    && (*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL) != BugCheckParameter2
    && (*(_QWORD *)(v11 + 40) & 0x10000000000LL) == 0 )
  {
    KeBugCheckEx(0x1Au, 0x411uLL, BugCheckParameter2, v7, *(_QWORD *)(v11 + 8));
  }
  return v11;
}
