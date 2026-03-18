/*
 * XREFs of MiEmptyPte @ 0x140380E70
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteHasShadow @ 0x14024B550 (MiPteHasShadow.c)
 *     MiIsPageTableLocked @ 0x14037D7B4 (MiIsPageTableLocked.c)
 *     MiDemoteCombinedPte @ 0x14037EFEC (MiDemoteCombinedPte.c)
 *     MiLogPageAccess @ 0x1403806A0 (MiLogPageAccess.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x1403815C4 (MiFreeWsleList.c)
 *     MiGetVaAge @ 0x140381820 (MiGetVaAge.c)
 *     MiCompressTbFlushList @ 0x1404C7DF8 (MiCompressTbFlushList.c)
 *     qsort @ 0x1404FC5A0 (qsort.c)
 */

__int64 __fastcall MiEmptyPte(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 ProcessorFlushList; // rax
  BOOL v12; // ecx
  unsigned int v13; // r15d
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rbp
  __int64 v17; // rcx
  ULONG *v18; // rax
  int VaAge; // ebp
  unsigned __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rbp
  int i; // r14d
  __int64 v24; // r9
  __int64 v25; // r10
  __int64 v26; // rax
  unsigned __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 *v30; // r10
  __int64 v31; // rdx
  int v32; // r9d
  int v33; // ecx
  _KPROCESS *v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rcx

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
    ProcessorFlushList = MiGetProcessorFlushList(a1, a2, a3, 0xFFFFDE0000000000uLL);
    v10 = ProcessorFlushList + 4136;
    *(_DWORD *)(ProcessorFlushList + 4152) = 2;
    *(_DWORD *)(ProcessorFlushList + 4156) = 1;
    *(_QWORD *)(ProcessorFlushList + 4136) = v9;
    *(_BYTE *)(ProcessorFlushList + 4160) = (*(_DWORD *)(v9 + 184) & 0x800) != 0;
    if ( (*(_DWORD *)(v9 + 184) & 0xF) != 0
      || (struct _LIST_ENTRY **)v9 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      v12 = (*(_DWORD *)(v9 + 184) & 0xF) == 0;
    }
    else
    {
      *(_DWORD *)(ProcessorFlushList + 4152) |= 9u;
      v12 = 0;
    }
    *(_DWORD *)(ProcessorFlushList + 4152) &= 0xFFFFFFDB;
    v7 = 0xFFFFFFFFFFLL;
    *(_DWORD *)(ProcessorFlushList + 4144) = v12;
    *(_WORD *)(ProcessorFlushList + 4161) = 0;
    *(_DWORD *)(ProcessorFlushList + 4164) = 0;
    *(_QWORD *)(ProcessorFlushList + 4168) = 0LL;
    *(_QWORD *)(ProcessorFlushList + 4176) = 0LL;
    *(_QWORD *)(v3 + 8) = v10;
    v6 = 0xFFFFDE0000000000uLL;
  }
  v13 = *(_DWORD *)v3 & 4;
  v14 = *(_QWORD *)a2;
  v15 = (__int64)(a2 << 25) >> 16;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (v14 & 1) != 0
    && ((v14 & 0x42) == 0 || (v14 & 0x20) == 0) )
  {
    v34 = MiPteHasShadow();
    if ( v34 )
    {
      KernelWaitTime = v34[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v37 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
        if ( (v37 & 0x20) != 0 )
          v35 |= 0x20uLL;
        v14 = v35 | 0x42;
        if ( (v37 & 0x42) == 0 )
          v14 = v35;
      }
    }
  }
  v16 = v6 + 48 * (v7 & (v14 >> 12));
  if ( v15 < 0xFFFFF68000000000uLL || (v17 = 1LL, v15 > 0xFFFFF6FFFFFFFFFFuLL) )
    v17 = 0LL;
  if ( !(_DWORD)v17 || (*(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 && !MiIsPageTableLocked(v9, a2) )
  {
    if ( (*(_QWORD *)(v16 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v16 + 8) > 0 )
      MiDemoteCombinedPte(v9, a2, *(_QWORD *)(v16 + 8) | 0x8000000000000000uLL);
    if ( (unsigned __int16)*(_DWORD *)(v16 + 32) <= 1u || (*(_DWORD *)(v9 + 184) & 0xF) == 0 )
    {
      if ( (*(_DWORD *)(v9 + 184) & 0xF) == 1 )
      {
        v18 = &MiSystemPartition;
      }
      else
      {
        v17 = *(unsigned __int16 *)(v9 + 174);
        v18 = (ULONG *)*((_QWORD *)qword_140E2FD48 + v17);
      }
      if ( !v18[4363]
        || ((VaAge = -1, v15 < 0xFFFFF68000000000uLL) || v15 > 0xFFFFF6FFFFFFFFFFuLL)
        && (VaAge = (unsigned __int8)MiGetVaAge(v17, (__int64)(a2 << 25) >> 16), VaAge == 7)
        || (v20 = MI_READ_PTE_LOCK_FREE(a2), (v20 & 0x20) == 0) )
      {
LABEL_30:
        v22 = 1LL;
        if ( *(_DWORD *)(v10 + 8) != 1 )
        {
          v33 = *(_DWORD *)(v10 + 16);
          if ( (v33 & 4) == 0 && v15 >= 0xFFFFF68000000000uLL && v15 <= 0xFFFFF6FFFFFFFFFFuLL )
            *(_DWORD *)(v10 + 16) = v33 | 4;
        }
LABEL_31:
        for ( i = 0; ; i = 1 )
        {
          v24 = *(unsigned int *)(v10 + 28);
          if ( (_DWORD)v24 )
          {
            if ( (*(_DWORD *)(v10 + 16) & 2) == 0 )
            {
              v25 = v10 + 8LL * (unsigned int)(v24 - 1);
              v26 = *(_QWORD *)(v25 + 40);
              if ( (v26 & 0xC00) == 0 )
              {
                v27 = *(_QWORD *)(v25 + 40) & 0x3FFLL;
                if ( (v26 & 0xFFFFFFFFFFFFF000uLL) + ((v27 + 1) << 12) == v15 && v27 + v22 > v27 && v27 + v22 <= 0x3FF )
                {
                  *(_QWORD *)(v10 + 32) += v22;
                  *(_QWORD *)(v25 + 40) = (v26 + v22) ^ ((v26 + v22) ^ v26) & 0xFFFFFFFFFFFFFC00uLL;
                  goto LABEL_5;
                }
                v28 = (unsigned int)(v24 - 1) + 5LL;
                v29 = *(_QWORD *)(v10 + 8 * v28);
                v30 = (unsigned __int64 *)(v10 + 8 * v28);
                if ( (v29 & 0xFFFFFFFFFFFFF000uLL) == v15 + (v22 << 12) )
                {
                  v38 = v29 & 0x3FF;
                  if ( v38 + v22 <= 0x3FF && v38 + v22 > v38 )
                  {
                    *(_QWORD *)(v10 + 32) += v22;
                    *v30 = (v29 - (v22 << 12) + v22) ^ ((v29 - (v22 << 12) + v22) ^ (v29 - (v22 << 12))) & 0xFFFFFFFFFFFFFC00uLL;
                    goto LABEL_5;
                  }
                }
              }
            }
          }
          if ( (_DWORD)v24 != *(_DWORD *)(v10 + 12) )
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
        while ( v22 )
        {
          v31 = 1024LL;
          if ( (unsigned __int64)(v22 - 1) <= 0x3FF )
            v31 = v22;
          *(_QWORD *)(v10 + 8 * v24 + 40) = v15 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v31 - 1) & 0x3FF;
          v32 = *(_DWORD *)(v10 + 28);
          *(_QWORD *)(v10 + 32) += v31;
          v24 = (unsigned int)(v32 + 1);
          v15 += v31 << 12;
          *(_DWORD *)(v10 + 28) = v24;
          v22 -= v31;
          if ( v22 && (_DWORD)v24 == *(_DWORD *)(v10 + 12) )
            goto LABEL_31;
        }
LABEL_5:
        if ( *(_DWORD *)(v10 + 28) == *(_DWORD *)(v10 + 12) )
          MiFreeWsleList(v9, v10, v13);
        return 0LL;
      }
      if ( (*(_DWORD *)(v9 + 184) & 0xF) != 0 )
      {
        if ( !_bittest64(&MiFlags, 0x24u) )
          goto LABEL_29;
        v21 = (*(_DWORD *)(v9 + 184) >> 11) & 1;
      }
      else
      {
        v21 = *(_QWORD *)(v9 + 624) != 0LL;
      }
      if ( v21 )
      {
        if ( (*(_DWORD *)(v9 + 184) & 0xF) != 0 )
        {
          if ( (MiGetPagePrivilege(48 * ((v20 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2, 0LL) & 0x41) == 0 )
            goto LABEL_29;
        }
        else if ( v15 > 0x7FFFFFFEFFFFLL )
        {
          goto LABEL_29;
        }
        if ( VaAge )
          goto LABEL_30;
      }
LABEL_29:
      MiLogPageAccess(v9, a2);
      goto LABEL_30;
    }
  }
  return 0LL;
}
