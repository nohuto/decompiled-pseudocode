/*
 * XREFs of MiAgePte @ 0x1402483B0
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MiComputeAgingAmount @ 0x1402477F0 (MiComputeAgingAmount.c)
 *     MiAgePteWorker @ 0x140248780 (MiAgePteWorker.c)
 *     MiIsPageTableLocked @ 0x14037D7B4 (MiIsPageTableLocked.c)
 *     MiDemoteCombinedPte @ 0x14037EFEC (MiDemoteCombinedPte.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x14038870C (MiAcquirePrcbAgeTrimLists.c)
 */

__int64 __fastcall MiAgePte(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // r13
  int v7; // r15d
  __int64 v8; // r10
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  __int64 *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // ecx
  __int64 result; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r9
  __int64 v24; // rcx
  unsigned __int64 i; // rdx
  _DWORD *v26; // rcx
  __int64 v27; // [rsp+60h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 184);
  v5 = *(_QWORD *)(a1 + 32);
  v7 = a1;
  v8 = *(_QWORD *)(v5 + 16);
  if ( *(_BYTE *)(v3 + 6) )
  {
    *(_BYTE *)(v3 + 6) = 0;
    v27 = *(_QWORD *)(v5 + 16);
    v18 = *(_QWORD *)(v27 + 32);
    v19 = *(_QWORD *)(v5 + 144);
    if ( v19 <= v18 )
      return 4LL;
    v20 = MiComputeAgingAmount(v5, v19 - v18, *(_DWORD *)v3, *(_DWORD *)(v3 + 12));
    *(_QWORD *)(v3 + 48) = v20;
    if ( *(_QWORD *)(v3 + 40) >= v20 )
      return 4LL;
    v8 = v27;
  }
  v9 = a2 << 25 >> 16;
  v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = *(_QWORD *)v10;
  if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v21 = *(_QWORD *)v10;
    if ( (v11 & 1) != 0 && ((v11 & 0x42) == 0 || (v11 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v24 = *(_QWORD *)(KernelWaitTime + 8 * ((v10 >> 3) & 0x1FF));
          if ( (v24 & 0x20) != 0 )
            v21 = v11 | 0x20;
          v11 = v21 | 0x42;
          if ( (v24 & 0x42) == 0 )
            v11 = v21;
        }
      }
    }
  }
  v12 = (__int64 *)(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  if ( a3 )
  {
    v13 = (__int64)((v10 << 25) + 0x10000000) >> 16;
    for ( i = v13 << 25 >> 16; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v13 = i;
    }
  }
  else
  {
    v13 = v10 + 8;
  }
  v14 = 16LL;
  if ( (*(_DWORD *)v3 & 2) == 0 )
    v14 = 8LL;
  *(_QWORD *)(v14 + v8) = v13;
  ++*(_QWORD *)(v3 + 40);
  if ( !a3
    || (v12[3] & 0x3FFFFFFFFFFFFFFFLL) == 1
    && !(unsigned int)MiIsPageTableLocked(v5, ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
  {
    if ( (v12[5] & 0x10000000000LL) == 0
      && v12[1] > 0
      && (unsigned int)MiDemoteCombinedPte(
                         v5,
                         ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                         v12[1] | 0x8000000000000000uLL) )
    {
      v11 = *(_QWORD *)v10;
    }
    if ( (v11 & 0x20) != 0 && *(_QWORD *)(v3 + 72) )
    {
      if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0 )
      {
        if ( (MiGetPagePrivilege(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2, 0LL) & 0x41) != 0 )
          goto LABEL_45;
      }
      else if ( v9 <= 0x7FFFFFFEFFFFLL )
      {
LABEL_45:
        if ( *(_QWORD *)(v3 + 72) == 1LL )
          MiAcquirePrcbAgeTrimLists(v5, v3 + 56);
        v26 = *(_DWORD **)(v3 + 72);
        *(_QWORD *)&v26[2 * (*v26)++ + 2] = v9 & 0xFFFFFFFFFFFFF000uLL;
        goto LABEL_13;
      }
    }
    v15 = (v11 >> 5) & 1;
    v16 = v15 | 2;
    if ( (*(_BYTE *)v3 & 3) == 0 )
      v16 = v15;
    MiAgePteWorker(v7, (v9 >> 9) & 0xFFFFFFF8, v9, (_DWORD)v12, v3, v16);
  }
LABEL_13:
  result = 0LL;
  if ( *(_QWORD *)(v3 + 40) >= *(_QWORD *)(v3 + 48) )
    return 4LL;
  return result;
}
