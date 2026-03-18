/*
 * XREFs of MiTrimPte @ 0x140242BA0
 * Callers:
 *     MiFastTrimWorkingSet @ 0x1403CF450 (MiFastTrimWorkingSet.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x140231E18 (MiAcquirePrcbAgeTrimLists.c)
 *     MiTrimThisWsle @ 0x140242F50 (MiTrimThisWsle.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402EFF38 (MI_WSLE_LOG_ACCESS.c)
 *     MiTrimWorkingSetBuildup @ 0x14037D1A0 (MiTrimWorkingSetBuildup.c)
 *     MiIsPageTableLocked @ 0x1403FAAB4 (MiIsPageTableLocked.c)
 *     MiDemoteCombinedPte @ 0x1403FABBC (MiDemoteCombinedPte.c)
 */

__int64 __fastcall MiTrimPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // r13
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // edi
  __int64 *v14; // rbp
  __int64 v15; // r12
  __int64 v17; // rbx
  __int64 v18; // rax
  unsigned __int64 i; // rcx
  _DWORD *v20; // rcx
  int v22; // [rsp+88h] [rbp+10h] BYREF
  int v23; // [rsp+90h] [rbp+18h]
  unsigned int v24; // [rsp+98h] [rbp+20h]

  v23 = a3;
  v22 = 0;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = a2 << 25;
  v7 = (__int64)(a2 << 25) >> 16;
  v8 = MI_READ_PTE_LOCK_FREE(a2);
  v9 = *(_QWORD *)(a1 + 184);
  v10 = v8;
  ++*(_QWORD *)(v9 + 32);
  v11 = *(_QWORD *)(v9 + 16);
  if ( v11 == *(_QWORD *)(v9 + 8)
    || (*(_DWORD *)v9 & 0x4000) != 0
    && ((*(_DWORD *)v9 & 0x8000) != 0 && v11 >= 0x100
     || *(_QWORD *)(v5 + 144) <= *(_QWORD *)(v9 + 56) - *(_QWORD *)(v9 + 8)) )
  {
    return 4LL;
  }
  if ( v23 )
  {
    v12 = (__int64)(v6 + 0x10000000) >> 16;
    for ( i = v12; ; v12 = i )
    {
      i = (__int64)(i << 25) >> 16;
      if ( i < 0xFFFFF68000000000uLL || i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
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
  v24 = *(_DWORD *)v9 & 0xF;
  v14 = (__int64 *)(48 * ((v10 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  if ( !v23 || (v14[3] & 0x3FFFFFFFFFFFFFFFLL) == 1 && !(unsigned int)MiIsPageTableLocked(v5, a2) )
  {
    if ( (v14[5] & 0x10000000000LL) == 0
      && v14[1] > 0
      && (unsigned int)MiDemoteCombinedPte(v5, a2, v14[1] | 0x8000000000000000uLL) )
    {
      v10 = *(_QWORD *)a2;
    }
    v15 = *(_QWORD *)(a1 + 32);
    if ( !(unsigned int)MiTrimThisWsle(v15, v7, (_DWORD)v14, v9, (v10 & 0x20) != 0, (__int64)&v22) )
      goto LABEL_12;
    v17 = *(_QWORD *)(v9 + 72);
    if ( !v17 )
    {
      MiAcquirePrcbAgeTrimLists(v15, (__int64 *)(v9 + 64));
      v17 = *(_QWORD *)(v9 + 72);
    }
    MiInsertTbFlushEntry(v17, v7, 1LL);
    if ( (*(_DWORD *)v9 & 0x100) != 0 )
      MI_WSLE_LOG_ACCESS(v15, a2);
    if ( (v18 = *(_QWORD *)(v9 + 16) + 1LL, *(_QWORD *)(v9 + 16) = v18, v18 != *(_QWORD *)(v9 + 8))
      && *(_DWORD *)(v17 + 28) != *(_DWORD *)(v17 + 12)
      || (MiTrimWorkingSetBuildup(a1, v9), *(_QWORD *)(v9 + 16) != *(_QWORD *)(v9 + 8)) )
    {
LABEL_12:
      if ( v22 )
      {
        if ( *(_QWORD *)(v9 + 80) == 1LL )
          MiAcquirePrcbAgeTrimLists(v5, (__int64 *)(v9 + 64));
        v20 = *(_DWORD **)(v9 + 80);
        *(_QWORD *)&v20[2 * (*v20)++ + 2] = v7 & 0xFFFFFFFFFFFFF000uLL;
      }
      goto LABEL_13;
    }
    return 4LL;
  }
LABEL_13:
  if ( v13 >= v24 )
    return ++*(_QWORD *)(v9 + 40) >= *(_QWORD *)(v9 + 48) ? 4 : 0;
  else
    return 0LL;
}
