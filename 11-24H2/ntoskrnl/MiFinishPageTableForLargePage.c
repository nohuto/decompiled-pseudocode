/*
 * XREFs of MiFinishPageTableForLargePage @ 0x14026B33C
 * Callers:
 *     MiMapWithLargePages @ 0x14026BB00 (MiMapWithLargePages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiFinishPageTableForLargePage(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rax
  bool v4; // zf
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // esi
  __int64 v12; // rdx

  if ( *(_QWORD *)(a1 + 16) )
  {
    v2 = *(unsigned int *)(a1 + 24);
    if ( !(_DWORD)v2
      || (MiIncreaseUsedPtes(a1, *(_QWORD *)(a1 + 8), v2),
          v3 = *(unsigned int *)(a1 + 24),
          v4 = *(_QWORD *)(a1 + 16) == v3,
          *(_QWORD *)(a1 + 16) -= v3,
          *(_DWORD *)(a1 + 24) = 0,
          !v4) )
    {
      v5 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a1 + 8));
      v9 = 0xFFFFFFFFFFLL;
      v10 = 48 * ((v5 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v11 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v11 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9, v6, v7, v8) )
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
      *(_QWORD *)(v10 + 24) = (*(_QWORD *)(v10 + 24) + *(_QWORD *)(a1 + 16)) ^ (*(_QWORD *)(v10 + 24) ^ (*(_QWORD *)(v10 + 24) + *(_QWORD *)(a1 + 16))) & 0xC000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *(_QWORD *)(a1 + 16) = 0LL;
    }
  }
  v12 = *(_QWORD *)(a1 + 8);
  if ( v12 )
    MiUnlockPageTableInternal(*(_QWORD *)a1, v12);
}
