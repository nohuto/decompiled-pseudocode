/*
 * XREFs of MiLockPageTableRange @ 0x14048FA4C
 * Callers:
 *     MmStoreAllocateVirtualMemory @ 0x140A5115C (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiLockPageTablePage @ 0x140284A20 (MiLockPageTablePage.c)
 *     MiUnlockPageTableRange @ 0x1402C7A54 (MiUnlockPageTableRange.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiLockPageTableRange(unsigned __int64 a1, unsigned __int64 a2)
{
  struct _LIST_ENTRY **p_Blink; // rbp
  __int64 v4; // r12
  ULONG_PTR v5; // rsi
  unsigned __int64 v6; // r14
  unsigned __int8 v7; // r15
  int v9; // ebx

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = v4;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = MiLockWorkingSetShared((__int64)p_Blink);
  while ( 1 )
  {
    if ( v5 > v6 )
    {
      MiUnlockWorkingSetShared((__int64)p_Blink, v7);
      return 0LL;
    }
    MiMakeSystemAddressValid(v5, 0, v7, 0);
    v9 = MiLockPageTablePage(
           48 * ((*(_QWORD *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
         - 0x220000000000LL,
           2);
    MiUnlockPageTableInternal((__int64)p_Blink, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( !v9 )
      break;
    v5 = (v5 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  }
  MiUnlockWorkingSetShared((__int64)p_Blink, v7);
  if ( v5 != v4 )
    MiUnlockPageTableRange(a1, (__int64)((v5 - 8) << 25) >> 16);
  return 3221225626LL;
}
