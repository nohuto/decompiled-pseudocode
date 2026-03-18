/*
 * XREFs of MiUnlockPageTableRange @ 0x1402CC7F0
 * Callers:
 *     MiLockPageTableRange @ 0x14049569C (MiLockPageTableRange.c)
 *     MmStoreFreeVirtualMemory @ 0x140A5FD24 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableCharges @ 0x1402CBD20 (MiUnlockPageTableCharges.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 */

char __fastcall MiUnlockPageTableRange(unsigned __int64 a1, unsigned __int64 a2)
{
  struct _LIST_ENTRY **p_Blink; // rdi
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rsi
  unsigned __int8 v5; // bp

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v3 = (_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v4 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v5 = MiLockWorkingSetShared((__int64)p_Blink);
  while ( (unsigned __int64)v3 <= v4 )
  {
    MiLockNestedPageTable(p_Blink, v3);
    MiUnlockPageTableCharges(48 * ((*v3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2);
    MiUnlockPageTable((__int64)p_Blink, (unsigned __int64)v3++);
  }
  return MiUnlockWorkingSetShared((__int64)p_Blink, v5);
}
