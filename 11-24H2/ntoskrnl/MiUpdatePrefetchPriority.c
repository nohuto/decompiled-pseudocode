/*
 * XREFs of MiUpdatePrefetchPriority @ 0x1403FE3E8
 * Callers:
 *     MiPrefetchJumpVad @ 0x1404CDD58 (MiPrefetchJumpVad.c)
 *     MiValidFault @ 0x1404F2C70 (MiValidFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14023C31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiInvalidPteConforms @ 0x140302590 (MiInvalidPteConforms.c)
 *     MiUpdatePfnPriority @ 0x1403FE790 (MiUpdatePfnPriority.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall MiUpdatePrefetchPriority(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v5; // r13d
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  ULONG_PTR v11; // rdi
  unsigned int v12; // ebx
  struct _LIST_ENTRY *Address; // rax
  __int64 v14; // rax
  ULONG_PTR v15; // rbx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned int v18; // ebp

  v5 = *(_DWORD *)(a1 + 80) & 7;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = MI_READ_PTE_LOCK_FREE(v6);
  if ( (v7 & 1) != 0 )
  {
    v10 = (v7 >> 12) & 0xFFFFFFFFFFLL;
    if ( v10 <= qword_140E2DBE0 && ((*(_QWORD *)(48 * v10 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    {
      v11 = 48 * v10 - 0x220000000000LL;
      if ( (*(_BYTE *)(v11 + 35) & 7) != v5 )
      {
        if ( a3 )
        {
          if ( (*(_DWORD *)(a3 + 48) & 0x70) == 0x10 )
            return;
        }
        else if ( KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[27] )
        {
          MiLockVadTree(1, v8, v9);
          Address = MiLocateAddress(a2);
          if ( !Address || ((__int64)Address[3].Flink & 0x70) == 0x10 )
          {
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
            return;
          }
          MiUnlockVadTree(1, 0x11u);
        }
        v12 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
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
          while ( *(__int64 *)(v11 + 24) < 0 );
        }
LABEL_10:
        if ( (unsigned int)MiGetPfnPriority(v11) != v5 )
          MiUpdatePfnPriority(v11, v5, 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
  else if ( v7 && (v7 & 0xC00) == 0x800 )
  {
    while ( 1 )
    {
      v14 = MI_READ_PTE_LOCK_FREE(v6);
      v15 = v14;
      if ( (v14 & 0x800) == 0 )
        break;
      if ( MiInvalidPteConforms(v14) )
      {
        if ( qword_140E2DB80 )
        {
          if ( (v15 & 0x10) != 0 )
            v16 &= ~0x10uLL;
          else
            v16 = v15 & ~qword_140E2DB80;
        }
        v17 = (v16 >> 12) & 0xFFFFFFFFFFLL;
        v11 = 48 * v17 - 0x220000000000LL;
        if ( v17 <= qword_140E2DBE0 && ((*(_QWORD *)(48 * v17 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
        {
          v18 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v18 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v18);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v11 + 24) < 0 );
          }
          if ( MI_READ_PTE_LOCK_FREE(v6) == v15 )
          {
            if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v11 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0
              || (v11 = MiLockSpecialPurposeMemoryCachedPage(v11, 0)) != 0 )
            {
              if ( (*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL) != v6
                && (*(_QWORD *)(v11 + 40) & 0x10000000000LL) == 0 )
              {
                KeBugCheckEx(0x1Au, 0x411uLL, v6, v15, *(_QWORD *)(v11 + 8));
              }
              if ( v11 )
                goto LABEL_10;
            }
            return;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
    }
  }
}
