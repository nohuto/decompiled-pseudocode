/*
 * XREFs of MiEmptyPte @ 0x1402976F0
 * Callers:
 *     <none>
 * Callees:
 *     MiCompressTbFlushList @ 0x140215218 (MiCompressTbFlushList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiIsPageTableLocked @ 0x140295EE4 (MiIsPageTableLocked.c)
 *     MiDemoteCombinedPte @ 0x140296374 (MiDemoteCombinedPte.c)
 *     MiLogPageAccess @ 0x140296B90 (MiLogPageAccess.c)
 *     MiGetVaAge @ 0x140296DE0 (MiGetVaAge.c)
 *     MiFreeWsleList @ 0x140297494 (MiFreeWsleList.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 */

__int64 __fastcall MiEmptyPte(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  __int64 v9; // rdi
  ULONG_PTR v10; // rbx
  __int64 ProcessorFlushList; // rax
  unsigned int v12; // r15d
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rbp
  __int64 v16; // rcx
  ULONG *v17; // rax
  int VaAge; // ebp
  unsigned __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rbp
  int i; // r14d
  __int64 v23; // r9
  ULONG_PTR v24; // r10
  __int64 v25; // rax
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 *v29; // r10
  __int64 HasShadow; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // r9d
  int v36; // ecx
  unsigned __int64 v37; // rcx

  v3 = *(_QWORD *)(a1 + 184);
  v5 = a1;
  v6 = 0xFFFFDE0000000000uLL;
  v7 = 0xFFFFFFFFFFLL;
  if ( (*(_DWORD *)v3 & 2) != 0 )
  {
    if ( (_DWORD)a3 )
      return 0LL;
    a1 = 6 * ((*(_QWORD *)a2 >> 12) & 0xFFFFFFFFFFLL);
    if ( *(__int64 *)(48 * ((*(_QWORD *)a2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 40) < 0 )
      return 0LL;
  }
  else if ( (*(_DWORD *)v3 & 1) != 0 && (_DWORD)a3 )
  {
    return 0LL;
  }
  v9 = *(_QWORD *)(v5 + 32);
  v10 = *(_QWORD *)(v3 + 8);
  if ( !v10 )
  {
    ProcessorFlushList = MiGetProcessorFlushList(a1, a2, a3);
    v10 = ProcessorFlushList + 4136;
    *(_DWORD *)(ProcessorFlushList + 4152) = 2;
    *(_DWORD *)(ProcessorFlushList + 4156) = 1;
    *(_QWORD *)(ProcessorFlushList + 4136) = v9;
    *(_BYTE *)(ProcessorFlushList + 4160) = (*(_DWORD *)(v9 + 184) & 0x800) != 0;
    if ( (*(_DWORD *)(v9 + 184) & 0xF) != 0
      || (struct _LIST_ENTRY **)v9 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      a1 = (*(_DWORD *)(v9 + 184) & 0xF) == 0;
    }
    else
    {
      *(_DWORD *)(ProcessorFlushList + 4152) |= 9u;
      a1 = 0LL;
    }
    *(_DWORD *)(ProcessorFlushList + 4152) &= 0xFFFFFFDB;
    v7 = 0xFFFFFFFFFFLL;
    *(_DWORD *)(ProcessorFlushList + 4144) = a1;
    *(_WORD *)(ProcessorFlushList + 4161) = 0;
    *(_DWORD *)(ProcessorFlushList + 4164) = 0;
    *(_QWORD *)(ProcessorFlushList + 4168) = 0LL;
    *(_QWORD *)(ProcessorFlushList + 4176) = 0LL;
    *(_QWORD *)(v3 + 8) = v10;
    v6 = 0xFFFFDE0000000000uLL;
  }
  v12 = *(_DWORD *)v3 & 4;
  v13 = *(_QWORD *)a2;
  v14 = (__int64)(a2 << 25) >> 16;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL && (v13 & 1) != 0 )
  {
    LOBYTE(a1) = (v13 & 0x42) != 0;
    if ( ((unsigned __int8)a1 & ((v13 & 0x20) != 0)) == 0 )
    {
      HasShadow = MiPteHasShadow(a1, *(_QWORD *)a2, v13, 0xFFFFDE0000000000uLL);
      if ( HasShadow )
      {
        v32 = *(_QWORD *)(HasShadow + 1288);
        if ( v32 )
        {
          v33 = *(_QWORD *)(v32 + 8 * ((a2 >> 3) & 0x1FF));
          if ( (v33 & 0x20) != 0 )
            v31 |= 0x20uLL;
          v13 = v31 | 0x42;
          if ( (v33 & 0x42) == 0 )
            v13 = v31;
        }
      }
    }
  }
  v15 = v6 + 48 * (v7 & (v13 >> 12));
  if ( v14 < 0xFFFFF68000000000uLL || (v16 = 1LL, v14 > 0xFFFFF6FFFFFFFFFFuLL) )
    v16 = 0LL;
  if ( !(_DWORD)v16 || (*(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 && !MiIsPageTableLocked(v9, a2) )
  {
    if ( (*(_QWORD *)(v15 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v15 + 8) > 0 )
      MiDemoteCombinedPte(v9, a2, *(_QWORD *)(v15 + 8) | 0x8000000000000000uLL);
    if ( (unsigned __int16)*(_DWORD *)(v15 + 32) <= 1u || (*(_DWORD *)(v9 + 184) & 0xF) == 0 )
    {
      if ( (*(_DWORD *)(v9 + 184) & 0xF) == 1 )
      {
        v17 = &MiSystemPartition;
      }
      else
      {
        v16 = *(unsigned __int16 *)(v9 + 174);
        v17 = (ULONG *)*((_QWORD *)qword_140E300C8 + v16);
      }
      if ( !v17[4363]
        || ((VaAge = -1, v14 < 0xFFFFF68000000000uLL) || v14 > 0xFFFFF6FFFFFFFFFFuLL)
        && (VaAge = (unsigned __int8)MiGetVaAge(v16, (__int64)(a2 << 25) >> 16), VaAge == 7)
        || (v19 = MI_READ_PTE_LOCK_FREE(a2), (v19 & 0x20) == 0) )
      {
LABEL_33:
        v21 = 1LL;
        if ( *(_DWORD *)(v10 + 8) != 1 )
        {
          v36 = *(_DWORD *)(v10 + 16);
          if ( (v36 & 4) == 0 && v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
            *(_DWORD *)(v10 + 16) = v36 | 4;
        }
LABEL_34:
        for ( i = 0; ; i = 1 )
        {
          v23 = *(unsigned int *)(v10 + 28);
          if ( (_DWORD)v23 )
          {
            if ( (*(_DWORD *)(v10 + 16) & 2) == 0 )
            {
              v24 = v10 + 8LL * (unsigned int)(v23 - 1);
              v25 = *(_QWORD *)(v24 + 40);
              if ( (v25 & 0xC00) == 0 )
              {
                v26 = *(_QWORD *)(v24 + 40) & 0x3FFLL;
                if ( (v25 & 0xFFFFFFFFFFFFF000uLL) + ((v26 + 1) << 12) == v14 && v26 + v21 > v26 && v26 + v21 <= 0x3FF )
                {
                  *(_QWORD *)(v10 + 32) += v21;
                  *(_QWORD *)(v24 + 40) = (v25 + v21) ^ ((v25 + v21) ^ v25) & 0xFFFFFFFFFFFFFC00uLL;
                  goto LABEL_5;
                }
                v27 = (unsigned int)(v23 - 1) + 5LL;
                v28 = *(_QWORD *)(v10 + 8 * v27);
                v29 = (unsigned __int64 *)(v10 + 8 * v27);
                if ( (v28 & 0xFFFFFFFFFFFFF000uLL) == v14 + (v21 << 12) )
                {
                  v37 = v28 & 0x3FF;
                  if ( v37 + v21 <= 0x3FF && v37 + v21 > v37 )
                  {
                    *(_QWORD *)(v10 + 32) += v21;
                    *v29 = (v28 - (v21 << 12) + v21) ^ ((v28 - (v21 << 12) + v21) ^ (v28 - (v21 << 12))) & 0xFFFFFFFFFFFFFC00uLL;
                    goto LABEL_5;
                  }
                }
              }
            }
          }
          if ( (_DWORD)v23 != *(_DWORD *)(v10 + 12) )
            break;
          if ( i )
          {
            if ( !*(_BYTE *)(v10 + 25) )
              *(_BYTE *)(v10 + 25) = 1;
            goto LABEL_5;
          }
          if ( *(_BYTE *)(v10 + 25) )
            goto LABEL_5;
          qsort((void *)(v10 + 40), *(unsigned int *)(v10 + 28), 8uLL, MiTbFlushSort);
          MiCompressTbFlushList(v10);
        }
        while ( v21 )
        {
          v34 = 1024LL;
          if ( (unsigned __int64)(v21 - 1) <= 0x3FF )
            v34 = v21;
          *(_QWORD *)(v10 + 8 * v23 + 40) = v14 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v34 - 1) & 0x3FF;
          v35 = *(_DWORD *)(v10 + 28);
          *(_QWORD *)(v10 + 32) += v34;
          v23 = (unsigned int)(v35 + 1);
          v14 += v34 << 12;
          *(_DWORD *)(v10 + 28) = v23;
          v21 -= v34;
          if ( v21 && (_DWORD)v23 == *(_DWORD *)(v10 + 12) )
            goto LABEL_34;
        }
LABEL_5:
        if ( *(_DWORD *)(v10 + 28) == *(_DWORD *)(v10 + 12) )
          MiFreeWsleList(v9, v10, v12);
        return 0LL;
      }
      if ( (*(_DWORD *)(v9 + 184) & 0xF) != 0 )
      {
        if ( !_bittest64(&MiFlags, 0x24u) )
          goto LABEL_32;
        v20 = (*(_DWORD *)(v9 + 184) >> 11) & 1;
      }
      else
      {
        v20 = *(_QWORD *)(v9 + 624) != 0LL;
      }
      if ( v20 )
      {
        if ( (*(_DWORD *)(v9 + 184) & 0xF) != 0 )
        {
          if ( (MiGetPagePrivilege(48 * ((v19 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2, 0LL) & 0x41) == 0 )
            goto LABEL_32;
        }
        else if ( v14 > 0x7FFFFFFEFFFFLL )
        {
          goto LABEL_32;
        }
        if ( VaAge )
          goto LABEL_33;
      }
LABEL_32:
      MiLogPageAccess(v9, a2);
      goto LABEL_33;
    }
  }
  return 0LL;
}
