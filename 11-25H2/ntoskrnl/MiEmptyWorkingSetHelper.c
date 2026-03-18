/*
 * XREFs of MiEmptyWorkingSetHelper @ 0x1403808F0
 * Callers:
 *     MiUpdateOldPteWorker @ 0x140441E30 (MiUpdateOldPteWorker.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteHasShadow @ 0x14024B550 (MiPteHasShadow.c)
 *     MiIsPageTableLocked @ 0x14037D7B4 (MiIsPageTableLocked.c)
 *     MiDemoteCombinedPte @ 0x14037EFEC (MiDemoteCombinedPte.c)
 *     MiLogPageAccess @ 0x1403806A0 (MiLogPageAccess.c)
 *     MiFreeWsleList @ 0x1403815C4 (MiFreeWsleList.c)
 *     MiGetVaAge @ 0x140381820 (MiGetVaAge.c)
 *     MiCompressTbFlushList @ 0x1404C7DF8 (MiCompressTbFlushList.c)
 *     qsort @ 0x1404FC5A0 (qsort.c)
 */

__int64 __fastcall MiEmptyWorkingSetHelper(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx
  ULONG *v12; // rax
  int VaAge; // esi
  unsigned __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rsi
  int i; // r11d
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // rax
  unsigned __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 *v24; // r10
  __int64 v25; // rdx
  int v26; // r9d
  int v28; // ecx
  _KPROCESS *v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // rcx

  v8 = *(_QWORD *)a2;
  v9 = (__int64)(a2 << 25) >> 16;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (v8 & 1) != 0
    && ((v8 & 0x42) == 0 || (v8 & 0x20) == 0) )
  {
    v29 = MiPteHasShadow();
    if ( v29 )
    {
      KernelWaitTime = v29[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v32 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
        if ( (v32 & 0x20) != 0 )
          v30 |= 0x20uLL;
        v8 = v30 | 0x42;
        if ( (v32 & 0x42) == 0 )
          v8 = v30;
      }
    }
  }
  v10 = 48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v11 = v9 >= 0xFFFFF68000000000uLL && v9 <= 0xFFFFF6FFFFFFFFFFuLL;
  if ( (_DWORD)v11 && ((*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || MiIsPageTableLocked(a1, a2)) )
    return 0LL;
  if ( (*(_QWORD *)(v10 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v10 + 8) > 0 )
    MiDemoteCombinedPte(a1, a2, *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL);
  if ( (unsigned __int16)*(_DWORD *)(v10 + 32) > 1u && (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
  {
    v12 = &MiSystemPartition;
  }
  else
  {
    v11 = *(unsigned __int16 *)(a1 + 174);
    v12 = (ULONG *)*((_QWORD *)qword_140E2FD48 + v11);
  }
  if ( v12[4363] )
  {
    if ( (VaAge = -1, v9 >= 0xFFFFF68000000000uLL) && v9 <= 0xFFFFF6FFFFFFFFFFuLL
      || (VaAge = (unsigned __int8)MiGetVaAge(v11, v9), VaAge != 7) )
    {
      v14 = MI_READ_PTE_LOCK_FREE(a2);
      if ( (v14 & 0x20) != 0 )
      {
        if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
        {
          if ( !_bittest64(&MiFlags, 0x24u) )
            goto LABEL_16;
          v15 = (*(_DWORD *)(a1 + 184) >> 11) & 1;
        }
        else
        {
          v15 = *(_QWORD *)(a1 + 624) != 0LL;
        }
        if ( v15 )
        {
          if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
          {
            if ( (MiGetPagePrivilege(48 * ((v14 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2, 0LL) & 0x41) == 0 )
              goto LABEL_16;
          }
          else if ( v9 > 0x7FFFFFFEFFFFLL )
          {
            goto LABEL_16;
          }
          if ( VaAge )
            goto LABEL_17;
        }
LABEL_16:
        MiLogPageAccess(a1, a2);
      }
    }
  }
LABEL_17:
  v16 = 1LL;
  if ( *(_DWORD *)(a3 + 8) != 1 )
  {
    v28 = *(_DWORD *)(a3 + 16);
    if ( (v28 & 4) == 0 && v9 >= 0xFFFFF68000000000uLL && v9 <= 0xFFFFF6FFFFFFFFFFuLL )
      *(_DWORD *)(a3 + 16) = v28 | 4;
  }
LABEL_18:
  for ( i = 0; ; i = 1 )
  {
    v18 = *(unsigned int *)(a3 + 28);
    if ( (_DWORD)v18 )
    {
      if ( (*(_DWORD *)(a3 + 16) & 2) == 0 )
      {
        v19 = a3 + 8LL * (unsigned int)(v18 - 1);
        v20 = *(_QWORD *)(v19 + 40);
        if ( (v20 & 0xC00) == 0 )
        {
          v21 = *(_QWORD *)(v19 + 40) & 0x3FFLL;
          if ( (v20 & 0xFFFFFFFFFFFFF000uLL) + ((v21 + 1) << 12) == v9 && v21 + v16 > v21 && v21 + v16 <= 0x3FF )
          {
            *(_QWORD *)(a3 + 32) += v16;
            *(_QWORD *)(v19 + 40) = (v20 + v16) ^ ((v20 + v16) ^ v20) & 0xFFFFFFFFFFFFFC00uLL;
            goto LABEL_35;
          }
          v22 = (unsigned int)(v18 - 1) + 5LL;
          v23 = *(_QWORD *)(a3 + 8 * v22);
          v24 = (unsigned __int64 *)(a3 + 8 * v22);
          if ( (v23 & 0xFFFFFFFFFFFFF000uLL) == v9 + (v16 << 12) )
          {
            v33 = v23 & 0x3FF;
            if ( v16 + v33 <= 0x3FF && v16 + v33 > v33 )
            {
              *(_QWORD *)(a3 + 32) += v16;
              *v24 = (v23 - (v16 << 12) + v16) ^ ((v23 - (v16 << 12) + v16) ^ (v23 - (v16 << 12))) & 0xFFFFFFFFFFFFFC00uLL;
              goto LABEL_35;
            }
          }
        }
      }
    }
    if ( (_DWORD)v18 != *(_DWORD *)(a3 + 12) )
      break;
    if ( i )
    {
      if ( !*(_BYTE *)(a3 + 25) )
        *(_BYTE *)(a3 + 25) = 1;
      goto LABEL_35;
    }
    if ( *(_BYTE *)(a3 + 25) )
      goto LABEL_35;
    qsort((void *)(a3 + 40), *(unsigned int *)(a3 + 28), 8uLL, MiTbFlushSort);
    MiCompressTbFlushList(a3);
  }
  while ( v16 )
  {
    v25 = 1024LL;
    if ( (unsigned __int64)(v16 - 1) <= 0x3FF )
      v25 = v16;
    *(_QWORD *)(a3 + 8 * v18 + 40) = v9 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v25 - 1) & 0x3FF;
    v26 = *(_DWORD *)(a3 + 28);
    *(_QWORD *)(a3 + 32) += v25;
    v18 = (unsigned int)(v26 + 1);
    v9 += v25 << 12;
    *(_DWORD *)(a3 + 28) = v18;
    v16 -= v25;
    if ( v16 && (_DWORD)v18 == *(_DWORD *)(a3 + 12) )
      goto LABEL_18;
  }
LABEL_35:
  if ( *(_DWORD *)(a3 + 28) == *(_DWORD *)(a3 + 12) )
    MiFreeWsleList(a1, a3, a4);
  return 1LL;
}
