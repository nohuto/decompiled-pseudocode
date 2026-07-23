/*
 * XREFs of MiEmptyWorkingSetHelper @ 0x140296F20
 * Callers:
 *     MiUpdateOldPteWorker @ 0x1404385C0 (MiUpdateOldPteWorker.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x140215218 (MiCompressTbFlushList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiIsPageTableLocked @ 0x140295EE4 (MiIsPageTableLocked.c)
 *     MiDemoteCombinedPte @ 0x140296374 (MiDemoteCombinedPte.c)
 *     MiLogPageAccess @ 0x140296B90 (MiLogPageAccess.c)
 *     MiGetVaAge @ 0x140296DE0 (MiGetVaAge.c)
 *     MiFreeWsleList @ 0x140297494 (MiFreeWsleList.c)
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 */

__int64 __fastcall MiEmptyWorkingSetHelper(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  __int64 v7; // rbp
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rcx
  ULONG *v13; // rax
  int VaAge; // esi
  unsigned __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rsi
  int i; // r10d
  __int64 v19; // r9
  __int64 v20; // r11
  __int64 v21; // rax
  unsigned __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 *v25; // r11
  __int64 HasShadow; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // r9d
  int v33; // ecx
  unsigned __int64 v34; // rcx

  v4 = a4;
  v7 = a1;
  v8 = *(_QWORD *)a2;
  v9 = (__int64)(a2 << 25) >> 16;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v10 = *(_QWORD *)a2;
    if ( (v8 & 1) != 0 )
    {
      LOBYTE(a1) = (v8 & 0x42) != 0;
      if ( ((unsigned __int8)a1 & ((v8 & 0x20) != 0)) == 0 )
      {
        HasShadow = MiPteHasShadow(a1, v10, v8, a4);
        if ( HasShadow )
        {
          v28 = *(_QWORD *)(HasShadow + 1288);
          if ( v28 )
          {
            v29 = *(_QWORD *)(v28 + 8 * ((a2 >> 3) & 0x1FF));
            if ( (v29 & 0x20) != 0 )
              v27 |= 0x20uLL;
            v8 = v27 | 0x42;
            if ( (v29 & 0x42) == 0 )
              v8 = v27;
          }
        }
      }
    }
  }
  v11 = 48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v12 = v9 >= 0xFFFFF68000000000uLL && v9 <= 0xFFFFF6FFFFFFFFFFuLL;
  if ( (_DWORD)v12 && ((*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || MiIsPageTableLocked(v7, a2)) )
    return 0LL;
  if ( (*(_QWORD *)(v11 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v11 + 8) > 0 )
    MiDemoteCombinedPte(v7, a2, *(_QWORD *)(v11 + 8) | 0x8000000000000000uLL);
  if ( (unsigned __int16)*(_DWORD *)(v11 + 32) > 1u && (*(_DWORD *)(v7 + 184) & 0xF) != 0 )
    return 0LL;
  if ( (*(_DWORD *)(v7 + 184) & 0xF) == 1 )
  {
    v13 = &MiSystemPartition;
  }
  else
  {
    v12 = *(unsigned __int16 *)(v7 + 174);
    v13 = (ULONG *)*((_QWORD *)qword_140E300C8 + v12);
  }
  if ( v13[4363] )
  {
    if ( (VaAge = -1, v9 >= 0xFFFFF68000000000uLL) && v9 <= 0xFFFFF6FFFFFFFFFFuLL
      || (VaAge = (unsigned __int8)MiGetVaAge(v12, v9), VaAge != 7) )
    {
      v15 = MI_READ_PTE_LOCK_FREE(a2);
      if ( (v15 & 0x20) != 0 )
      {
        if ( (*(_DWORD *)(v7 + 184) & 0xF) != 0 )
        {
          if ( !_bittest64(&MiFlags, 0x24u) )
            goto LABEL_19;
          v16 = (*(_DWORD *)(v7 + 184) >> 11) & 1;
        }
        else
        {
          v16 = *(_QWORD *)(v7 + 624) != 0LL;
        }
        if ( v16 )
        {
          if ( (*(_DWORD *)(v7 + 184) & 0xF) != 0 )
          {
            if ( (MiGetPagePrivilege(48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2, 0LL) & 0x41) == 0 )
              goto LABEL_19;
          }
          else if ( v9 > 0x7FFFFFFEFFFFLL )
          {
            goto LABEL_19;
          }
          if ( VaAge )
            goto LABEL_20;
        }
LABEL_19:
        MiLogPageAccess(v7, a2);
      }
    }
  }
LABEL_20:
  v17 = 1LL;
  if ( *(_DWORD *)(a3 + 8) != 1 )
  {
    v33 = *(_DWORD *)(a3 + 16);
    if ( (v33 & 4) == 0 && v9 >= 0xFFFFF68000000000uLL && v9 <= 0xFFFFF6FFFFFFFFFFuLL )
      *(_DWORD *)(a3 + 16) = v33 | 4;
  }
LABEL_21:
  for ( i = 0; ; i = 1 )
  {
    v19 = *(unsigned int *)(a3 + 28);
    if ( (_DWORD)v19 )
    {
      if ( (*(_DWORD *)(a3 + 16) & 2) == 0 )
      {
        v20 = a3 + 8LL * (unsigned int)(v19 - 1);
        v21 = *(_QWORD *)(v20 + 40);
        if ( (v21 & 0xC00) == 0 )
        {
          v22 = *(_QWORD *)(v20 + 40) & 0x3FFLL;
          if ( (v21 & 0xFFFFFFFFFFFFF000uLL) + ((v22 + 1) << 12) == v9 && v22 + v17 > v22 && v22 + v17 <= 0x3FF )
          {
            *(_QWORD *)(a3 + 32) += v17;
            *(_QWORD *)(v20 + 40) = (v21 + v17) ^ ((v21 + v17) ^ v21) & 0xFFFFFFFFFFFFFC00uLL;
            goto LABEL_50;
          }
          v23 = (unsigned int)(v19 - 1) + 5LL;
          v24 = *(_QWORD *)(a3 + 8 * v23);
          v25 = (unsigned __int64 *)(a3 + 8 * v23);
          if ( (v24 & 0xFFFFFFFFFFFFF000uLL) == v9 + (v17 << 12) )
          {
            v34 = v24 & 0x3FF;
            if ( v17 + v34 <= 0x3FF && v17 + v34 > v34 )
            {
              *(_QWORD *)(a3 + 32) += v17;
              *v25 = (v24 - (v17 << 12) + v17) ^ ((v24 - (v17 << 12) + v17) ^ (v24 - (v17 << 12))) & 0xFFFFFFFFFFFFFC00uLL;
              goto LABEL_50;
            }
          }
        }
      }
    }
    if ( (_DWORD)v19 != *(_DWORD *)(a3 + 12) )
      break;
    if ( i )
    {
      if ( !*(_BYTE *)(a3 + 25) )
        *(_BYTE *)(a3 + 25) = 1;
      goto LABEL_50;
    }
    if ( *(_BYTE *)(a3 + 25) )
      goto LABEL_50;
    qsort((void *)(a3 + 40), *(unsigned int *)(a3 + 28), 8uLL, MiTbFlushSort);
    MiCompressTbFlushList(a3);
  }
  while ( v17 )
  {
    v30 = 1024LL;
    if ( (unsigned __int64)(v17 - 1) <= 0x3FF )
      v30 = v17;
    *(_QWORD *)(a3 + 8 * v19 + 40) = v9 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v30 - 1) & 0x3FF;
    v31 = *(_DWORD *)(a3 + 28);
    *(_QWORD *)(a3 + 32) += v30;
    v19 = (unsigned int)(v31 + 1);
    v9 += v30 << 12;
    *(_DWORD *)(a3 + 28) = v19;
    v17 -= v30;
    if ( v17 && (_DWORD)v19 == *(_DWORD *)(a3 + 12) )
      goto LABEL_21;
  }
LABEL_50:
  if ( *(_DWORD *)(a3 + 28) == *(_DWORD *)(a3 + 12) )
    MiFreeWsleList(v7, a3, v4);
  return 1LL;
}
