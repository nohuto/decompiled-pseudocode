/*
 * XREFs of MiTryDeleteTransitionPte @ 0x140204568
 * Callers:
 *     MiDeleteMergedPte @ 0x140205D9C (MiDeleteMergedPte.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140204044 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiDeleteTransitionPte @ 0x140204FF0 (MiDeleteTransitionPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiTryDeleteTransitionPte(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rax
  __int64 v7; // r9
  ULONG_PTR v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned int v12; // r14d

  if ( (MI_READ_PTE_LOCK_FREE(BugCheckParameter2, a2, a3) & 0x400) == 0 )
  {
    while ( 1 )
    {
      v6 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2, v4, v5);
      v8 = v6;
      if ( (v6 & 0x800) == 0 )
        break;
      if ( (v6 & 1) == 0 && (!v6 || !qword_140E2DCC0 || (qword_140E2DCC0 & v6) != 0) )
      {
        if ( qword_140E2DCC0 )
        {
          if ( (v6 & 0x10) != 0 )
            v6 &= ~0x10uLL;
          else
            v6 &= ~qword_140E2DCC0;
        }
        v9 = (v6 >> 12) & 0xFFFFFFFFFFLL;
        v10 = 6 * v9;
        v4 = 0xFFFFDE0000000000uLL;
        v11 = 48 * v9 - 0x220000000000LL;
        if ( v9 <= qword_140E2DD20 && ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
        {
          v12 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v12 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10, v4, v5, v7) )
              {
                HvlNotifyLongSpinWait(v12);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v11 + 24) < 0 );
          }
          if ( MI_READ_PTE_LOCK_FREE(BugCheckParameter2, v4, v5) == v8 )
          {
            if ( (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v11 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0
              || (v11 = MiLockSpecialPurposeMemoryCachedPage(v11, 0)) != 0 )
            {
              if ( (*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL) != BugCheckParameter2
                && (*(_QWORD *)(v11 + 40) & 0x10000000000LL) == 0 )
              {
                KeBugCheckEx(0x1Au, 0x411uLL, BugCheckParameter2, v8, *(_QWORD *)(v11 + 8));
              }
              if ( v11 )
                return MiDeleteTransitionPte(BugCheckParameter2);
            }
            return 1LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
    }
  }
  return 1LL;
}
