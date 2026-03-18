/*
 * XREFs of MiUpdatePrefetchPriority @ 0x1403898E0
 * Callers:
 *     MiPrefetchJumpVad @ 0x1404CDF78 (MiPrefetchJumpVad.c)
 *     MiValidFault @ 0x1404EECA0 (MiValidFault.c)
 * Callees:
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1402343E0 (MiInvalidPteConforms.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14033F5DC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiUpdatePfnPriority @ 0x140389C80 (MiUpdatePfnPriority.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall MiUpdatePrefetchPriority(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v5; // r13d
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // ebx
  struct _LIST_ENTRY *Address; // rax
  __int64 v13; // rax
  ULONG_PTR v14; // rbx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  int v17; // ebp
  __int64 v18; // r8
  __int64 v19; // r9

  v5 = *(_DWORD *)(a1 + 80) & 7;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = MI_READ_PTE_LOCK_FREE(v6);
  if ( (v7 & 1) != 0 )
  {
    v9 = (v7 >> 12) & 0xFFFFFFFFFFLL;
    if ( v9 <= qword_140E2D9A0 && ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    {
      v10 = 48 * v9 - 0x220000000000LL;
      if ( (*(_BYTE *)(v10 + 35) & 7) != v5 )
      {
        if ( a3 )
        {
          if ( (*(_DWORD *)(a3 + 48) & 0x70) == 0x10 )
            return;
        }
        else if ( KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[27] )
        {
          MiLockVadTree(1, v8);
          Address = MiLocateAddress(a2);
          if ( !Address || ((__int64)Address[3].Flink & 0x70) == 0x10 )
          {
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
            return;
          }
          MiUnlockVadTree(1, 0x11u);
        }
        v11 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v11 & HvlLongSpinCountMask) == 0
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
          while ( *(__int64 *)(v10 + 24) < 0 );
        }
LABEL_10:
        if ( (unsigned int)MiGetPfnPriority(v10) != v5 )
          MiUpdatePfnPriority(v10, v5, 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
  else if ( v7 && (v7 & 0xC00) == 0x800 )
  {
    while ( 1 )
    {
      v13 = MI_READ_PTE_LOCK_FREE(v6);
      v14 = v13;
      if ( (v13 & 0x800) == 0 )
        break;
      if ( MiInvalidPteConforms(v13) )
      {
        if ( qword_140E2D940 )
        {
          if ( (v14 & 0x10) != 0 )
            v15 &= ~0x10uLL;
          else
            v15 = v14 & ~qword_140E2D940;
        }
        v16 = (v15 >> 12) & 0xFFFFFFFFFFLL;
        v10 = 48 * v16 - 0x220000000000LL;
        if ( v16 <= qword_140E2D9A0 && ((*(_QWORD *)(48 * v16 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
        {
          v17 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v17 & HvlLongSpinCountMask) == 0
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
            while ( *(__int64 *)(v10 + 24) < 0 );
          }
          if ( MI_READ_PTE_LOCK_FREE(v6) == v14 )
          {
            if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0
              || (v10 = MiLockSpecialPurposeMemoryCachedPage(v10, 0LL, v18, v19)) != 0 )
            {
              if ( (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) != v6
                && (*(_QWORD *)(v10 + 40) & 0x10000000000LL) == 0 )
              {
                KeBugCheckEx(0x1Au, 0x411uLL, v6, v14, *(_QWORD *)(v10 + 8));
              }
              if ( v10 )
                goto LABEL_10;
            }
            return;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
    }
  }
}
