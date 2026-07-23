/*
 * XREFs of MiEvictPageTableLock @ 0x14020EE7C
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x14020E950 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteSystemPageTable @ 0x1404811C0 (MiDeleteSystemPageTable.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402023A0 (MiUnlockNestedPageTableWritePte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiCleanupLazyStampedPageTable @ 0x140305F5C (MiCleanupLazyStampedPageTable.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 */

__int64 __fastcall MiEvictPageTableLock(__int64 a1, ULONG_PTR a2, __int64 a3, ULONG_PTR a4)
{
  int v6; // r14d
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  __int64 v12; // rax

  v6 = a3;
  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(a2, a2, a3) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  MiLockNestedPageTable(a1, a2);
  v11 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(a2, v9, v10) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( (*(_DWORD *)(v11 + 36) & 0x4000000) != 0 )
    v12 = HIDWORD(*(_QWORD *)v11);
  else
    v12 = *(_QWORD *)(v11 + 16) >> 16;
  if ( (v12 & 0x3FF) != 0 )
    goto LABEL_10;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 )
    goto LABEL_5;
  if ( v6 == 1 || a1 == MiGetAnyMultiplexedVm(4LL) )
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
    MiUnlockNestedPageTableWritePte(a1, a2, a4, 0);
    return 1LL;
  }
}
