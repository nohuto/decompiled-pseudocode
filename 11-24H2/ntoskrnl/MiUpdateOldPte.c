/*
 * XREFs of MiUpdateOldPte @ 0x140438350
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiDemoteCombinedPte @ 0x140296374 (MiDemoteCombinedPte.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x140303A64 (MiAcquirePrcbAgeTrimLists.c)
 *     MiUpdateOldPteWorker @ 0x1404385C0 (MiUpdateOldPteWorker.c)
 */

__int64 __fastcall MiUpdateOldPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // r15
  unsigned __int64 v6; // rbx
  __int64 *v7; // rbp
  unsigned __int64 v8; // rsi
  char v9; // al
  __int64 v10; // rdi
  _DWORD *v12; // rcx

  if ( a3 < 1 )
  {
    v5 = *(_QWORD *)(a1 + 32);
    v6 = MI_READ_PTE_LOCK_FREE(a2);
    v7 = (__int64 *)(48 * ((v6 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    if ( (v7[5] & 0x10000000000LL) == 0
      && v7[1] > 0
      && (unsigned int)MiDemoteCombinedPte(v5, a2, v7[1] | 0x8000000000000000uLL) )
    {
      v6 = *(_QWORD *)a2;
    }
    v8 = (__int64)(a2 << 25) >> 16;
    if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
      v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 56) & 0xF;
    else
      v9 = (*(_QWORD *)(48
                      * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                      - 0x220000000000LL) >> 42) & 7;
    if ( v9 == 6 )
    {
      v10 = *(_QWORD *)(a1 + 184);
      if ( (v7[3] & 0x3FFFFFFFFFFFFFFFLL) != 1 || (*(_DWORD *)v10 & 1) != 0 && v7[5] < 0 )
        return ++*(_QWORD *)(v10 + 16) >= *(_QWORD *)(v10 + 8) ? 4 : 0;
      if ( (v6 & 0x20) != 0 )
      {
        if ( *(_QWORD *)(v10 + 40) )
        {
          if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0 )
          {
            if ( (MiGetPagePrivilege(48 * ((v6 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2, 0LL) & 0x41) == 0 )
              return ++*(_QWORD *)(v10 + 16) >= *(_QWORD *)(v10 + 8) ? 4 : 0;
          }
          else if ( v8 > 0x7FFFFFFEFFFFLL )
          {
            return ++*(_QWORD *)(v10 + 16) >= *(_QWORD *)(v10 + 8) ? 4 : 0;
          }
          if ( *(_QWORD *)(v10 + 40) == 1LL )
            MiAcquirePrcbAgeTrimLists(v5, (__int64 **)(v10 + 24));
          v12 = *(_DWORD **)(v10 + 40);
          *(_QWORD *)&v12[2 * (*v12)++ + 2] = v8 & 0xFFFFFFFFFFFFF000uLL;
        }
      }
      else
      {
        MiUpdateOldPteWorker(v5, a2, v7, v10);
      }
      return ++*(_QWORD *)(v10 + 16) >= *(_QWORD *)(v10 + 8) ? 4 : 0;
    }
  }
  return 0LL;
}
