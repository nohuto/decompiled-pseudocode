/*
 * XREFs of MiEvictPageTableLock @ 0x140234EEC
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x1402349C0 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteSystemPageTable @ 0x140485BD0 (MiDeleteSystemPageTable.c)
 * Callees:
 *     MiCleanupLazyStampedPageTable @ 0x140212BFC (MiCleanupLazyStampedPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140285DE4 (MiUnlockNestedPageTableWritePte.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 */

__int64 __fastcall MiEvictPageTableLock(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  __int64 v10; // rax

  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(a2) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  MiLockNestedPageTable(a1, a2);
  v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(a2) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( (*(_DWORD *)(v9 + 36) & 0x4000000) != 0 )
    v10 = HIDWORD(*(_QWORD *)v9);
  else
    v10 = *(_QWORD *)(v9 + 16) >> 16;
  if ( (v10 & 0x3FF) != 0 )
    goto LABEL_10;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 )
    goto LABEL_5;
  if ( a3 == 1 || a1 == MiGetAnyMultiplexedVm(4LL) )
    MiCleanupLazyStampedPageTable(a1, a2);
  if ( (unsigned __int16)*(_QWORD *)(v8 + 24) != 1 )
  {
LABEL_10:
    MiUnlockPageTableInternal(a1, a2);
    return 0LL;
  }
  else
  {
LABEL_5:
    MiUnlockNestedPageTableWritePte(a1, a2, a4, 0LL);
    return 1LL;
  }
}
