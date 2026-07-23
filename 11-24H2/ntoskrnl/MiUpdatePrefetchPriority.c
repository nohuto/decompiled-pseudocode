/*
 * XREFs of MiUpdatePrefetchPriority @ 0x1403DCA60
 * Callers:
 *     MiPrefetchJumpVad @ 0x1404C7128 (MiPrefetchJumpVad.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 * Callees:
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140204044 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiInvalidPteConforms @ 0x1403461F0 (MiInvalidPteConforms.c)
 *     MiUpdatePfnPriority @ 0x1403DCE10 (MiUpdatePfnPriority.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall MiUpdatePrefetchPriority(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v5; // r13d
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  unsigned int v13; // ebx
  struct _LIST_ENTRY *Address; // rax
  __int64 v15; // rax
  ULONG_PTR v16; // rbx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned int v19; // ebp

  v5 = *(_DWORD *)(a1 + 80) & 7;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = MI_READ_PTE_LOCK_FREE(v6);
  if ( (v7 & 1) != 0 )
  {
    v11 = (v7 >> 12) & 0xFFFFFFFFFFLL;
    if ( v11 <= qword_140E2DD20 && ((*(_QWORD *)(48 * v11 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    {
      v12 = 48 * v11 - 0x220000000000LL;
      if ( (*(_BYTE *)(v12 + 35) & 7) != v5 )
      {
        if ( a3 )
        {
          if ( (*(_DWORD *)(a3 + 48) & 0x70) == 0x10 )
            return;
        }
        else if ( KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[27] )
        {
          MiLockVadTree(1, v8, v9, v10);
          Address = MiLocateAddress(a2);
          if ( !Address || ((__int64)Address[3].Flink & 0x70) == 0x10 )
          {
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
            return;
          }
          MiUnlockVadTree(1, 0x11u);
        }
        v13 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v13 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v13);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v12 + 24) < 0 );
        }
LABEL_10:
        if ( (unsigned int)MiGetPfnPriority(v12) != v5 )
          MiUpdatePfnPriority(v12, v5, 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
  else if ( v7 && (v7 & 0xC00) == 0x800 )
  {
    while ( 1 )
    {
      v15 = MI_READ_PTE_LOCK_FREE(v6);
      v16 = v15;
      if ( (v15 & 0x800) == 0 )
        break;
      if ( MiInvalidPteConforms(v15) )
      {
        if ( qword_140E2DCC0 )
        {
          if ( (v16 & 0x10) != 0 )
            v17 &= ~0x10uLL;
          else
            v17 = v16 & ~qword_140E2DCC0;
        }
        v18 = (v17 >> 12) & 0xFFFFFFFFFFLL;
        v12 = 48 * v18 - 0x220000000000LL;
        if ( v18 <= qword_140E2DD20 && ((*(_QWORD *)(48 * v18 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
        {
          v19 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v19 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v19);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v12 + 24) < 0 );
          }
          if ( MI_READ_PTE_LOCK_FREE(v6) == v16 )
          {
            if ( (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0
              || (v12 = MiLockSpecialPurposeMemoryCachedPage(v12, 0)) != 0 )
            {
              if ( (*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL) != v6
                && (*(_QWORD *)(v12 + 40) & 0x10000000000LL) == 0 )
              {
                KeBugCheckEx(0x1Au, 0x411uLL, v6, v16, *(_QWORD *)(v12 + 8));
              }
              if ( v12 )
                goto LABEL_10;
            }
            return;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
    }
  }
}
