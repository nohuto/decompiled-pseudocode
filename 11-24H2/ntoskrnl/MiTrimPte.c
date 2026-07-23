/*
 * XREFs of MiTrimPte @ 0x1402130B0
 * Callers:
 *     MiFastTrimWorkingSet @ 0x140390500 (MiFastTrimWorkingSet.c)
 * Callees:
 *     MiTrimThisWsle @ 0x140213460 (MiTrimThisWsle.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402590F0 (MI_WSLE_LOG_ACCESS.c)
 *     MiIsPageTableLocked @ 0x140295EE4 (MiIsPageTableLocked.c)
 *     MiDemoteCombinedPte @ 0x140296374 (MiDemoteCombinedPte.c)
 *     MiTrimWorkingSetBuildup @ 0x1402EA6B0 (MiTrimWorkingSetBuildup.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x140303A64 (MiAcquirePrcbAgeTrimLists.c)
 */

__int64 __fastcall MiTrimPte(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 *v12; // r8
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  __int64 *v15; // rbp
  __int64 v16; // r12
  __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int64 i; // rcx
  _DWORD *v21; // rcx
  int v23; // [rsp+88h] [rbp+10h] BYREF
  int v24; // [rsp+90h] [rbp+18h]
  unsigned int v25; // [rsp+98h] [rbp+20h]

  v24 = a3;
  v23 = 0;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = (_QWORD)a2 << 25;
  v7 = (__int64)((_QWORD)a2 << 25) >> 16;
  v8 = MI_READ_PTE_LOCK_FREE(a2, a2, a3);
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
  v12 = *(__int64 **)(*(_QWORD *)(a1 + 32) + 16LL);
  if ( v24 )
  {
    v13 = (v6 + 0x10000000) >> 16;
    for ( i = v13; ; v13 = i )
    {
      i = (__int64)(i << 25) >> 16;
      if ( i < 0xFFFFF68000000000uLL || i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
  }
  else
  {
    v13 = (__int64)(a2 + 1);
  }
  *v12 = v13;
  if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
    v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v13, v12) >> 56) & 0xF;
  else
    v14 = (*(_QWORD *)(48
                     * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(
                                             ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                                             v13,
                                             v12) >> 12) & 0xFFFFFFFFFFLL)
                     - 0x220000000000LL) >> 42) & 7LL;
  v25 = *(_DWORD *)v9 & 0xF;
  v15 = (__int64 *)(48 * ((v10 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  if ( !v24 || (v15[3] & 0x3FFFFFFFFFFFFFFFLL) == 1 && !(unsigned int)MiIsPageTableLocked(v5, a2) )
  {
    if ( (v15[5] & 0x10000000000LL) == 0
      && v15[1] > 0
      && (unsigned int)MiDemoteCombinedPte(v5, a2, v15[1] | 0x8000000000000000uLL) )
    {
      v10 = *a2;
    }
    v16 = *(_QWORD *)(a1 + 32);
    if ( !(unsigned int)MiTrimThisWsle(v16, v7, (_DWORD)v15, v9, (v10 & 0x20) != 0, (__int64)&v23) )
      goto LABEL_12;
    v18 = *(_QWORD *)(v9 + 72);
    if ( !v18 )
    {
      MiAcquirePrcbAgeTrimLists(v16, v9 + 64);
      v18 = *(_QWORD *)(v9 + 72);
    }
    MiInsertTbFlushEntry(v18, v7, 1LL);
    if ( (*(_DWORD *)v9 & 0x100) != 0 )
      MI_WSLE_LOG_ACCESS(v16, a2);
    if ( (v19 = *(_QWORD *)(v9 + 16) + 1LL, *(_QWORD *)(v9 + 16) = v19, v19 != *(_QWORD *)(v9 + 8))
      && *(_DWORD *)(v18 + 28) != *(_DWORD *)(v18 + 12)
      || (MiTrimWorkingSetBuildup(a1, v9), *(_QWORD *)(v9 + 16) != *(_QWORD *)(v9 + 8)) )
    {
LABEL_12:
      if ( v23 )
      {
        if ( *(_QWORD *)(v9 + 80) == 1LL )
          MiAcquirePrcbAgeTrimLists(v5, v9 + 64);
        v21 = *(_DWORD **)(v9 + 80);
        *(_QWORD *)&v21[2 * (*v21)++ + 2] = v7 & 0xFFFFFFFFFFFFF000uLL;
      }
      goto LABEL_13;
    }
    return 4LL;
  }
LABEL_13:
  if ( (unsigned int)v14 >= v25 )
    return ++*(_QWORD *)(v9 + 40) >= *(_QWORD *)(v9 + 48) ? 4 : 0;
  else
    return 0LL;
}
