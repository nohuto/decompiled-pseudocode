/*
 * XREFs of MiUnlockPageTableRange @ 0x1403DB524
 * Callers:
 *     MiLockPageTableRange @ 0x140489C5C (MiLockPageTableRange.c)
 *     MmStoreFreeVirtualMemory @ 0x140A56CE4 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiUnlockPageTableCharges @ 0x1403DB820 (MiUnlockPageTableCharges.c)
 */

char __fastcall MiUnlockPageTableRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  struct _LIST_ENTRY **p_Blink; // rdi
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int8 v7; // bp

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v5 = (_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v6 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v7 = MiLockWorkingSetShared((__int64)p_Blink, 1073741816LL, a3, a4);
  while ( (unsigned __int64)v5 <= v6 )
  {
    MiLockNestedPageTable((__int64)p_Blink, (ULONG_PTR)v5);
    MiUnlockPageTableCharges(48 * ((*v5 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    MiUnlockPageTableInternal((__int64)p_Blink, (unsigned __int64)v5++);
  }
  return MiUnlockWorkingSetShared((__int64)p_Blink, v7);
}
