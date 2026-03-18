/*
 * XREFs of MiFinishPageTableForLargePage @ 0x1403A7F88
 * Callers:
 *     MiMapWithLargePages @ 0x1403A7068 (MiMapWithLargePages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIncreaseUsedPtes @ 0x14028A180 (MiIncreaseUsedPtes.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiFinishPageTableForLargePage(__int64 a1)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  bool v4; // zf
  unsigned __int64 v5; // rdi
  unsigned int v6; // esi
  unsigned __int64 v7; // rdx

  if ( *(_QWORD *)(a1 + 16) )
  {
    v2 = *(_DWORD *)(a1 + 24);
    if ( !v2
      || (MiIncreaseUsedPtes(a1, *(_QWORD *)(a1 + 8), v2, 6),
          v3 = *(unsigned int *)(a1 + 24),
          v4 = *(_QWORD *)(a1 + 16) == v3,
          *(_QWORD *)(a1 + 16) -= v3,
          *(_DWORD *)(a1 + 24) = 0,
          !v4) )
    {
      v5 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a1 + 8)) >> 12) & 0xFFFFFFFFFFLL)
         - 0x220000000000LL;
      v6 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v6 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v6);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v5 + 24) < 0 );
      }
      *(_QWORD *)(v5 + 24) = (*(_QWORD *)(v5 + 24) + *(_QWORD *)(a1 + 16)) ^ (*(_QWORD *)(v5 + 24) ^ (*(_QWORD *)(v5 + 24) + *(_QWORD *)(a1 + 16))) & 0xC000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *(_QWORD *)(a1 + 16) = 0LL;
    }
  }
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 )
    MiUnlockPageTableInternal(*(_QWORD *)a1, v7);
}
