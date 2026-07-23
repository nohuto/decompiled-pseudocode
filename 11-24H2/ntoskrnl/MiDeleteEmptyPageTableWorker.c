/*
 * XREFs of MiDeleteEmptyPageTableWorker @ 0x1402005C8
 * Callers:
 *     MiDeleteEmptyPageTable @ 0x1402005B0 (MiDeleteEmptyPageTable.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDecommitHandleValidPte @ 0x140297D80 (MiDecommitHandleValidPte.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiDeleteEmptyPageTableWorker(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 *v3; // r15
  int v4; // r12d
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  __int64 v13; // rdi
  int v14; // edi

  v3 = *(__int64 **)(a1 + 184);
  v4 = a3;
  v7 = *v3;
  *(_QWORD *)(v7 + 72) = a2;
  *(_QWORD *)(v7 + 88) = a2 + 8;
  *(_QWORD *)(v7 + 56) = (__int64)(a2 << 25) >> 16;
  v8 = MI_READ_PTE_LOCK_FREE(a2, a2, a3);
  v11 = v8;
  if ( (v8 & 1) == 0 || (v8 & 0x80u) != 0LL )
    return 0LL;
  if ( (*(_DWORD *)a1 & 4) != 0 )
    MiLockNestedPageTable(*(_QWORD *)(a1 + 32), a2);
  v12 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(a2, v9, v10) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( (*(_DWORD *)(v12 + 36) & 0x4000000) != 0 )
    v13 = HIDWORD(*(_QWORD *)v12);
  else
    v13 = *(_QWORD *)(v12 + 16) >> 16;
  v14 = v13 & 0x3FF;
  if ( (*(_DWORD *)a1 & 4) != 0 )
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 32), a2);
  if ( v14 )
    return 0LL;
  *(_DWORD *)(v7 + 96) = v4;
  MiDecommitHandleValidPte(v7, v11);
  _bittestandset64(v3 + 2, (a2 >> 3) & 0x1FF);
  if ( !v3[11] )
    v3[11] = a2;
  return 1LL;
}
