/*
 * XREFs of MiEvictPageTableLock @ 0x1402FB4A4
 * Callers:
 *     MiTerminateWsle @ 0x140231080 (MiTerminateWsle.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402FAF80 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteSystemPageTable @ 0x14038A330 (MiDeleteSystemPageTable.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402FBBD4 (MiUnlockNestedPageTableWritePte.c)
 *     MiCleanupLazyStampedPageTable @ 0x140432F28 (MiCleanupLazyStampedPageTable.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
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
    MiUnlockPageTable(a1, a2);
    return 0LL;
  }
  else
  {
LABEL_5:
    MiUnlockNestedPageTableWritePte(a1, a2, a4, 0LL);
    return 1LL;
  }
}
