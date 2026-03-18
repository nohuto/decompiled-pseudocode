/*
 * XREFs of MiDeleteEmptyPageTableWorker @ 0x140475828
 * Callers:
 *     MiDeleteEmptyPageTable @ 0x140475810 (MiDeleteEmptyPageTable.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiDecommitHandleValidPte @ 0x140381970 (MiDecommitHandleValidPte.c)
 */

__int64 __fastcall MiDeleteEmptyPageTableWorker(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 *v3; // r15
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rbx
  unsigned __int64 v12; // rdi
  __int64 v13; // rdi
  int v14; // edi

  v3 = *(__int64 **)(a1 + 184);
  v7 = *v3;
  *(_QWORD *)(v7 + 72) = a2;
  *(_QWORD *)(v7 + 88) = a2 + 8;
  *(_QWORD *)(v7 + 56) = (__int64)(a2 << 25) >> 16;
  v8 = MI_READ_PTE_LOCK_FREE(a2);
  v11 = (__int64 *)v8;
  if ( (v8 & 1) == 0 || (v8 & 0x80u) != 0LL )
    return 0LL;
  if ( (*(_DWORD *)a1 & 4) != 0 )
    MiLockNestedPageTable(*(_QWORD *)(a1 + 32), a2, v9, v10);
  v12 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(a2) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( (*(_DWORD *)(v12 + 36) & 0x4000000) != 0 )
    v13 = HIDWORD(*(_QWORD *)v12);
  else
    v13 = *(_QWORD *)(v12 + 16) >> 16;
  v14 = v13 & 0x3FF;
  if ( (*(_DWORD *)a1 & 4) != 0 )
    MiUnlockPageTable(*(_QWORD *)(a1 + 32), a2);
  if ( v14 )
    return 0LL;
  *(_DWORD *)(v7 + 96) = a3;
  MiDecommitHandleValidPte(v7, v11);
  _bittestandset64(v3 + 2, (a2 >> 3) & 0x1FF);
  if ( !v3[11] )
    v3[11] = a2;
  return 1LL;
}
