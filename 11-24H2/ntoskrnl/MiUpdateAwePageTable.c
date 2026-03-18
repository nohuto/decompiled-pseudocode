/*
 * XREFs of MiUpdateAwePageTable @ 0x140474584
 * Callers:
 *     MiDeleteEnclavePage @ 0x1403D1B2C (MiDeleteEnclavePage.c)
 *     MiFinishPteChangesInPageTable @ 0x1404738AC (MiFinishPteChangesInPageTable.c)
 *     MiWriteEnclavePte @ 0x1404743C4 (MiWriteEnclavePte.c)
 *     MiUnmapLegacyAwePage @ 0x1406830EC (MiUnmapLegacyAwePage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIncreaseUsedPtes @ 0x14028A180 (MiIncreaseUsedPtes.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDecreaseUsedPtes @ 0x1403A4830 (MiDecreaseUsedPtes.c)
 */

__int64 __fastcall MiUpdateAwePageTable(unsigned __int64 a1, __int64 a2, signed int a3)
{
  unsigned int v6; // ebx
  unsigned __int64 v7; // rsi
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rbp
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax

  v6 = 0;
  v7 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(a1) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v8 = 1;
  if ( a2 )
  {
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    v10 = 0xC000000000000000uLL;
    v11 = a2 + (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    *(_QWORD *)(v7 + 24) = v11 ^ (v11 ^ *(_QWORD *)(v7 + 24)) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v10 = 0x3FFFFFFFFFFFFFFFLL;
    v11 = *(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  }
  if ( a1 == 0xFFFFF6FB7DBEDF68uLL )
    return 0LL;
  if ( a3 )
  {
    if ( a3 <= 0 )
      v15 = MiDecreaseUsedPtes(v10, a1, -a3);
    else
      v15 = MiIncreaseUsedPtes(v10, a1, a3, 2);
  }
  else
  {
    v13 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(a1) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( (*(_DWORD *)(v13 + 36) & 0x4000000) != 0 )
      v14 = HIDWORD(*(_QWORD *)v13);
    else
      v14 = *(_QWORD *)(v13 + 16) >> 16;
    v15 = v14 & 0x3FF;
  }
  if ( v15 )
  {
    if ( v11 == 1 )
      return 2;
    return v6;
  }
  return v8;
}
