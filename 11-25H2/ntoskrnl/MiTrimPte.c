/*
 * XREFs of MiTrimPte @ 0x140387FA0
 * Callers:
 *     MiFastTrimWorkingSet @ 0x1403C4B40 (MiFastTrimWorkingSet.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiIsPageTableLocked @ 0x14037D7B4 (MiIsPageTableLocked.c)
 *     MiDemoteCombinedPte @ 0x14037EFEC (MiDemoteCombinedPte.c)
 *     MiTrimThisWsle @ 0x140388394 (MiTrimThisWsle.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x14038870C (MiAcquirePrcbAgeTrimLists.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140389E74 (MI_WSLE_LOG_ACCESS.c)
 *     MiTrimWorkingSetBuildup @ 0x14038A000 (MiTrimWorkingSetBuildup.c)
 */

__int64 __fastcall MiTrimPte(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned int v13; // edi
  unsigned int v14; // r12d
  __int64 v15; // rcx
  __int64 *v16; // rbp
  __int64 result; // rax
  __int64 v18; // rbp
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned __int64 i; // rdx
  _DWORD *v24; // rcx
  int v25; // [rsp+80h] [rbp+8h] BYREF
  __int64 v26; // [rsp+88h] [rbp+10h]
  int v27; // [rsp+90h] [rbp+18h]
  __int64 v28; // [rsp+98h] [rbp+20h]

  v27 = a3;
  v25 = 0;
  v6 = a2 << 25;
  v26 = *(_QWORD *)(a1 + 32);
  v7 = (__int64)(a2 << 25) >> 16;
  v8 = MI_READ_PTE_LOCK_FREE(a2);
  v9 = *(_QWORD *)(a1 + 184);
  v10 = v8;
  ++*(_QWORD *)(v9 + 32);
  v11 = *(_QWORD *)(v9 + 16);
  if ( v11 == *(_QWORD *)(v9 + 8)
    || (*(_DWORD *)v9 & 0x4000) != 0
    && ((*(_DWORD *)v9 & 0x8000) != 0 && v11 >= 0x100
     || *(_QWORD *)(v26 + 144) <= *(_QWORD *)(v9 + 56) - *(_QWORD *)(v9 + 8)) )
  {
    return 4LL;
  }
  if ( a3 )
  {
    v12 = (__int64)(v6 + 0x10000000) >> 16;
    for ( i = v12 << 25 >> 16; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v12 = i;
    }
  }
  else
  {
    v12 = a2 + 8;
  }
  **(_QWORD **)(*(_QWORD *)(a1 + 32) + 16LL) = v12;
  if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
    v13 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 56) & 0xF;
  else
    v13 = (*(_QWORD *)(48
                     * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                     - 0x220000000000LL) >> 42) & 7;
  v14 = *(_DWORD *)v9 & 0xF;
  v15 = v26;
  v16 = (__int64 *)(48 * ((v10 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  if ( v27 )
  {
    if ( (v16[3] & 0x3FFFFFFFFFFFFFFFLL) != 1 || MiIsPageTableLocked(v26, a2) )
      goto LABEL_13;
    v15 = v26;
  }
  if ( (v16[5] & 0x10000000000LL) == 0
    && v16[1] > 0
    && (unsigned int)MiDemoteCombinedPte(v15, a2, v16[1] | 0x8000000000000000uLL) )
  {
    v10 = *(_QWORD *)a2;
  }
  v28 = *(_QWORD *)(a1 + 32);
  if ( (unsigned int)MiTrimThisWsle(v28, v7, (_DWORD)v16, v9, (v10 & 0x20) != 0, (__int64)&v25) )
  {
    v18 = *(_QWORD *)(v9 + 72);
    v19 = v28;
    if ( !v18 )
    {
      MiAcquirePrcbAgeTrimLists(v28, v9 + 64);
      v18 = *(_QWORD *)(v9 + 72);
    }
    MiInsertTbFlushEntry(v18, v7, 1LL, 0);
    if ( (*(_DWORD *)v9 & 0x100) != 0 )
      MI_WSLE_LOG_ACCESS(v19, a2, v20, v21);
    v22 = *(_QWORD *)(v9 + 16) + 1LL;
    *(_QWORD *)(v9 + 16) = v22;
    if ( v22 == *(_QWORD *)(v9 + 8) || *(_DWORD *)(v18 + 28) == *(_DWORD *)(v18 + 12) )
    {
      MiTrimWorkingSetBuildup(a1, v9);
      if ( *(_QWORD *)(v9 + 16) == *(_QWORD *)(v9 + 8) )
        return 4LL;
    }
  }
  if ( v25 )
  {
    if ( *(_QWORD *)(v9 + 80) == 1LL )
      MiAcquirePrcbAgeTrimLists(v26, v9 + 64);
    v24 = *(_DWORD **)(v9 + 80);
    *(_QWORD *)&v24[2 * (*v24)++ + 2] = v7 & 0xFFFFFFFFFFFFF000uLL;
  }
LABEL_13:
  if ( v13 < v14 )
    return 0LL;
  ++*(_QWORD *)(v9 + 40);
  result = 0LL;
  if ( *(_QWORD *)(v9 + 40) >= *(_QWORD *)(v9 + 48) )
    return 4LL;
  return result;
}
