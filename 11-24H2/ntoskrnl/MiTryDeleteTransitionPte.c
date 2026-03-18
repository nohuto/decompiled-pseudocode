/*
 * XREFs of MiTryDeleteTransitionPte @ 0x14023C7DC
 * Callers:
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiDeleteMergedPte @ 0x14023E00C (MiDeleteMergedPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14023C31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiDeleteTransitionPte @ 0x14023D260 (MiDeleteTransitionPte.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiTryDeleteTransitionPte(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v2; // rax
  ULONG_PTR v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned int v7; // r14d

  if ( (MI_READ_PTE_LOCK_FREE(BugCheckParameter2) & 0x400) == 0 )
  {
    while ( 1 )
    {
      v2 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
      v3 = v2;
      if ( (v2 & 0x800) == 0 )
        break;
      if ( (v2 & 1) == 0 && (!v2 || !qword_140E2DB80 || (qword_140E2DB80 & v2) != 0) )
      {
        if ( qword_140E2DB80 )
        {
          if ( (v2 & 0x10) != 0 )
            v2 &= ~0x10uLL;
          else
            v2 &= ~qword_140E2DB80;
        }
        v4 = (v2 >> 12) & 0xFFFFFFFFFFLL;
        v5 = 6 * v4;
        v6 = 48 * v4 - 0x220000000000LL;
        if ( v4 <= qword_140E2DBE0 && ((*(_QWORD *)(48 * v4 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
        {
          v7 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v7 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v5) )
              {
                HvlNotifyLongSpinWait(v7);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v6 + 24) < 0 );
          }
          if ( MI_READ_PTE_LOCK_FREE(BugCheckParameter2) == v3 )
          {
            if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0
              || (v6 = MiLockSpecialPurposeMemoryCachedPage(v6, 0)) != 0 )
            {
              if ( (*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL) != BugCheckParameter2
                && (*(_QWORD *)(v6 + 40) & 0x10000000000LL) == 0 )
              {
                KeBugCheckEx(0x1Au, 0x411uLL, BugCheckParameter2, v3, *(_QWORD *)(v6 + 8));
              }
              if ( v6 )
                return MiDeleteTransitionPte(BugCheckParameter2, v6);
            }
            return 1LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
    }
  }
  return 1LL;
}
