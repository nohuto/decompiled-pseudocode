/*
 * XREFs of MiDeleteEmptyPageTableWorker @ 0x140473768
 * Callers:
 *     MiDeleteEmptyPageTable @ 0x140473750 (MiDeleteEmptyPageTable.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiDecommitHandleValidPte @ 0x140288180 (MiDecommitHandleValidPte.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiDeleteEmptyPageTableWorker(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 *v3; // r15
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  __int64 v11; // rdi
  int v12; // edi

  v3 = *(__int64 **)(a1 + 184);
  v7 = *v3;
  *(_QWORD *)(v7 + 72) = a2;
  *(_QWORD *)(v7 + 88) = a2 + 8;
  *(_QWORD *)(v7 + 56) = (__int64)(a2 << 25) >> 16;
  v8 = MI_READ_PTE_LOCK_FREE(a2);
  v9 = v8;
  if ( (v8 & 1) == 0 || (v8 & 0x80u) != 0LL )
    return 0LL;
  if ( (*(_DWORD *)a1 & 4) != 0 )
    MiLockNestedPageTable(*(_QWORD *)(a1 + 32), a2);
  v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(a2) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( (*(_DWORD *)(v10 + 36) & 0x4000000) != 0 )
    v11 = HIDWORD(*(_QWORD *)v10);
  else
    v11 = *(_QWORD *)(v10 + 16) >> 16;
  v12 = v11 & 0x3FF;
  if ( (*(_DWORD *)a1 & 4) != 0 )
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 32), a2);
  if ( v12 )
    return 0LL;
  *(_DWORD *)(v7 + 96) = a3;
  MiDecommitHandleValidPte(v7, v9);
  _bittestandset64(v3 + 2, (a2 >> 3) & 0x1FF);
  if ( !v3[11] )
    v3[11] = a2;
  return 1LL;
}
