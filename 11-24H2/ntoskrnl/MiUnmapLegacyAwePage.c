/*
 * XREFs of MiUnmapLegacyAwePage @ 0x1406830EC
 * Callers:
 *     MiBuildPhysicalPageFreeChain @ 0x140681434 (MiBuildPhysicalPageFreeChain.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402E3A1C (MiLockWorkingSetSharedAtDpc.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiUpdateAwePageTable @ 0x140474584 (MiUpdateAwePageTable.c)
 *     MiDecrementAweMapCount @ 0x14068190C (MiDecrementAweMapCount.c)
 */

__int64 __fastcall MiUnmapLegacyAwePage(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  struct _LIST_ENTRY **p_Blink; // r14
  unsigned __int64 v9; // rdi
  ULONG_PTR v10; // rbx

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v9 = *(_QWORD *)(48 * a2 - 0x21FFFFFFFFF8LL);
  v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiLockWorkingSetSharedAtDpc((__int64)p_Blink);
  MiLockNestedPageTable((__int64)p_Blink, v10);
  *(_QWORD *)v9 = CLFS_LSN_NULL_EXT;
  MiUpdateAwePageTable(v10, -1LL, -1);
  MiInsertTbFlushEntry(a3, (__int64)(v9 << 25) >> 16, 1LL, 0);
  MiUnlockPageTableInternal((__int64)p_Blink, v10);
  MiUnlockWorkingSetShared((__int64)p_Blink, 0x11u);
  MiDecrementAweMapCount(a1, a2, 2u, a4);
  return 0LL;
}
