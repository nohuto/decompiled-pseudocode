/*
 * XREFs of MiAgePte @ 0x140303CD0
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiComputeAgingAmount @ 0x14020F5E0 (MiComputeAgingAmount.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiIsPageTableLocked @ 0x140295EE4 (MiIsPageTableLocked.c)
 *     MiDemoteCombinedPte @ 0x140296374 (MiDemoteCombinedPte.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x140303A64 (MiAcquirePrcbAgeTrimLists.c)
 *     MiAgePteWorker @ 0x1403040A0 (MiAgePteWorker.c)
 */

__int64 __fastcall MiAgePte(__int64 a1, __int64 a2, int a3)
{
  unsigned int *v3; // rdi
  __int64 v5; // r13
  int v7; // r15d
  __int64 v8; // r10
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  __int64 *v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // ecx
  __int64 result; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r9
  __int64 v21; // rcx
  _DWORD *v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 i; // rdx
  __int64 v27; // [rsp+60h] [rbp+8h]

  v3 = *(unsigned int **)(a1 + 184);
  v5 = *(_QWORD *)(a1 + 32);
  v7 = a1;
  v8 = *(_QWORD *)(v5 + 16);
  if ( *((_BYTE *)v3 + 6) )
  {
    *((_BYTE *)v3 + 6) = 0;
    v27 = *(_QWORD *)(v5 + 16);
    v23 = *(_QWORD *)(v27 + 32);
    v24 = *(_QWORD *)(v5 + 144);
    if ( v24 <= v23 )
      return 4LL;
    v25 = MiComputeAgingAmount(v5, v24 - v23, *v3, v3[3]);
    *((_QWORD *)v3 + 6) = v25;
    if ( *((_QWORD *)v3 + 5) >= v25 )
      return 4LL;
    v8 = v27;
  }
  v9 = a2 << 25 >> 16;
  v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = *(_QWORD *)v10;
  if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v12 = *(_QWORD *)v10;
    if ( (v11 & 1) != 0 && ((v11 & 0x42) == 0 || (v11 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v21 = *(_QWORD *)(KernelWaitTime + 8 * ((v10 >> 3) & 0x1FF));
          if ( (v21 & 0x20) != 0 )
            v12 = v11 | 0x20;
          v11 = v12 | 0x42;
          if ( (v21 & 0x42) == 0 )
            v11 = v12;
        }
      }
    }
  }
  v13 = (__int64 *)(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  if ( a3 )
  {
    v14 = (__int64)((v10 << 25) + 0x10000000) >> 16;
    for ( i = v14 << 25 >> 16; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v14 = i;
    }
  }
  else
  {
    v14 = v10 + 8;
  }
  v15 = 16LL;
  if ( (*v3 & 2) == 0 )
    v15 = 8LL;
  *(_QWORD *)(v15 + v8) = v14;
  ++*((_QWORD *)v3 + 5);
  if ( !a3
    || (v13[3] & 0x3FFFFFFFFFFFFFFFLL) == 1 && !MiIsPageTableLocked(v5, ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
  {
    if ( (v13[5] & 0x10000000000LL) == 0
      && v13[1] > 0
      && (unsigned int)MiDemoteCombinedPte(
                         v5,
                         ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                         v13[1] | 0x8000000000000000uLL) )
    {
      v11 = *(_QWORD *)v10;
    }
    if ( (v11 & 0x20) != 0 && *((_QWORD *)v3 + 9) )
    {
      if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0 )
      {
        if ( (MiGetPagePrivilege(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2, 0LL) & 0x41) != 0 )
        {
LABEL_30:
          if ( *((_QWORD *)v3 + 9) == 1LL )
            MiAcquirePrcbAgeTrimLists(v5, (__int64 **)v3 + 7);
          v22 = (_DWORD *)*((_QWORD *)v3 + 9);
          *(_QWORD *)&v22[2 * (*v22)++ + 2] = v9 & 0xFFFFFFFFFFFFF000uLL;
          goto LABEL_16;
        }
      }
      else if ( v9 <= 0x7FFFFFFEFFFFLL )
      {
        goto LABEL_30;
      }
    }
    v16 = (v11 >> 5) & 1;
    v17 = v16 | 2;
    if ( (*(_BYTE *)v3 & 3) == 0 )
      v17 = v16;
    MiAgePteWorker(v7, (v9 >> 9) & 0xFFFFFFF8, v9, (_DWORD)v13, (__int64)v3, v17);
  }
LABEL_16:
  result = 0LL;
  if ( *((_QWORD *)v3 + 5) >= *((_QWORD *)v3 + 6) )
    return 4LL;
  return result;
}
