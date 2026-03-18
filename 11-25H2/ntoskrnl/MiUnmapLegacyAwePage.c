/*
 * XREFs of MiUnmapLegacyAwePage @ 0x1406778CC
 * Callers:
 *     MiBuildPhysicalPageFreeChain @ 0x140675C14 (MiBuildPhysicalPageFreeChain.c)
 * Callees:
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402FB704 (MiLockWorkingSetSharedAtDpc.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiUpdateAwePageTable @ 0x1403FD730 (MiUpdateAwePageTable.c)
 *     MiDecrementAweMapCount @ 0x1406760EC (MiDecrementAweMapCount.c)
 */

__int64 __fastcall MiUnmapLegacyAwePage(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  struct _LIST_ENTRY **p_Blink; // r14
  unsigned __int64 v9; // rdi
  ULONG_PTR v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v9 = *(_QWORD *)(48 * a2 - 0x21FFFFFFFFF8LL);
  v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiLockWorkingSetSharedAtDpc((__int64)p_Blink);
  MiLockNestedPageTable((__int64)p_Blink, v10, v11, v12);
  *(_QWORD *)v9 = CLFS_LSN_NULL_EXT;
  MiUpdateAwePageTable(v10, -1LL, -1);
  MiInsertTbFlushEntry(a3, (__int64)(v9 << 25) >> 16, 1LL, 0);
  MiUnlockPageTable((__int64)p_Blink, v10);
  MiUnlockWorkingSetShared((__int64)p_Blink, 0x11u);
  MiDecrementAweMapCount(a1, a2, 2u, a4);
  return 0LL;
}
