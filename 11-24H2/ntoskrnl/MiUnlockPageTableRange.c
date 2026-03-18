/*
 * XREFs of MiUnlockPageTableRange @ 0x1402C7A54
 * Callers:
 *     MiLockPageTableRange @ 0x14048FA4C (MiLockPageTableRange.c)
 *     MmStoreFreeVirtualMemory @ 0x140A5EAF4 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiUnlockPageTableCharges @ 0x1402C7D50 (MiUnlockPageTableCharges.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiUnlockPageTableRange(unsigned __int64 a1, unsigned __int64 a2)
{
  struct _LIST_ENTRY **p_Blink; // rdi
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  char v6; // bp

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v3 = (_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v4 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v6 = MiLockWorkingSetShared(p_Blink);
  while ( (unsigned __int64)v3 <= v4 )
  {
    MiLockNestedPageTable((__int64)p_Blink, (ULONG_PTR)v3);
    MiUnlockPageTableCharges(48 * ((*v3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    MiUnlockPageTableInternal(p_Blink, v3++);
  }
  LOBYTE(v5) = v6;
  return MiUnlockWorkingSetShared(p_Blink, v5);
}
