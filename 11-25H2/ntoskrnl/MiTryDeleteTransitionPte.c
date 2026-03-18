/*
 * XREFs of MiTryDeleteTransitionPte @ 0x14033FEC4
 * Callers:
 *     MiDeleteMergedPte @ 0x14033FD38 (MiDeleteMergedPte.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1402343E0 (MiInvalidPteConforms.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14033F5DC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiDeleteTransitionPte @ 0x140340900 (MiDeleteTransitionPte.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiTryDeleteTransitionPte(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rax
  ULONG_PTR v3; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // ebp
  __int64 v9; // r8
  __int64 v10; // r9

  if ( (MI_READ_PTE_LOCK_FREE(BugCheckParameter2) & 0x400) == 0 )
  {
    while ( 1 )
    {
      v2 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
      v3 = v2;
      if ( (v2 & 0x800) == 0 )
        break;
      if ( MiInvalidPteConforms(v2) )
      {
        v5 = v4;
        if ( qword_140E2D940 )
        {
          if ( (v3 & 0x10) != 0 )
            v5 = v4 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v5 = v3 & ~qword_140E2D940;
        }
        v6 = (v5 >> 12) & 0xFFFFFFFFFFLL;
        v7 = 48 * v6 - 0x220000000000LL;
        if ( v6 <= qword_140E2D9A0 && ((*(_QWORD *)(48 * v6 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
        {
          v8 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v8 & HvlLongSpinCountMask) == 0
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
            while ( *(__int64 *)(v7 + 24) < 0 );
          }
          if ( MI_READ_PTE_LOCK_FREE(BugCheckParameter2) == v3 )
          {
            if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0
              || (v7 = MiLockSpecialPurposeMemoryCachedPage(v7, 0LL, v9, v10)) != 0 )
            {
              if ( (*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL) != BugCheckParameter2
                && (*(_QWORD *)(v7 + 40) & 0x10000000000LL) == 0 )
              {
                KeBugCheckEx(0x1Au, 0x411uLL, BugCheckParameter2, v3, *(_QWORD *)(v7 + 8));
              }
              if ( v7 )
                return MiDeleteTransitionPte(BugCheckParameter2, v7);
            }
            return 1LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
    }
  }
  return 1LL;
}
