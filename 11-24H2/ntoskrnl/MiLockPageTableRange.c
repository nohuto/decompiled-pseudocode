/*
 * XREFs of MiLockPageTableRange @ 0x140489C5C
 * Callers:
 *     MmStoreAllocateVirtualMemory @ 0x1409145E8 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiLockPageTablePage @ 0x140205E40 (MiLockPageTablePage.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiUnlockPageTableRange @ 0x1403DB524 (MiUnlockPageTableRange.c)
 */

__int64 __fastcall MiLockPageTableRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  struct _LIST_ENTRY **p_Blink; // rbp
  __int64 v6; // r12
  ULONG_PTR v7; // rsi
  unsigned __int64 v8; // r14
  unsigned __int8 v9; // r15
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = v6;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = MiLockWorkingSetShared((__int64)p_Blink, a2, a3, a4);
  while ( 1 )
  {
    if ( v7 > v8 )
    {
      MiUnlockWorkingSetShared((__int64)p_Blink, v9);
      return 0LL;
    }
    MiMakeSystemAddressValid(v7, 0, v9, 0);
    v11 = MiLockPageTablePage(
            48 * ((*(_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
          - 0x220000000000LL,
            2);
    MiUnlockPageTableInternal((__int64)p_Blink, ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( !v11 )
      break;
    v7 = (v7 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  }
  MiUnlockWorkingSetShared((__int64)p_Blink, v9);
  if ( v7 != v6 )
    MiUnlockPageTableRange(a1, (__int64)((v7 - 8) << 25) >> 16, v12, v13);
  return 3221225626LL;
}
