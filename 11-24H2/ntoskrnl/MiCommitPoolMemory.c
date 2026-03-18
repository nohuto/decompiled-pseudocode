/*
 * XREFs of MiCommitPoolMemory @ 0x1402EB010
 * Callers:
 *     RtlpHpEnvAllocVA @ 0x1402EAA50 (RtlpHpEnvAllocVA.c)
 *     MmAllocateSecurePoolMemory @ 0x14067CB78 (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiClearNonPagedPtes @ 0x1402346CC (MiClearNonPagedPtes.c)
 *     MiLinkPoolCommitChain @ 0x14023F6A0 (MiLinkPoolCommitChain.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiLockPoolCommitWs @ 0x1402E3A94 (MiLockPoolCommitWs.c)
 *     MiFreeExcessSegments @ 0x1402EA170 (MiFreeExcessSegments.c)
 *     MiLockPoolCommitPageTable @ 0x1402EA640 (MiLockPoolCommitPageTable.c)
 *     MiReturnExcessPoolCommit @ 0x1402EA7D0 (MiReturnExcessPoolCommit.c)
 *     MiUnlockPoolCommitWs @ 0x1402EA9E4 (MiUnlockPoolCommitWs.c)
 *     MiFillPoolCommitPageTable @ 0x1402EB2D0 (MiFillPoolCommitPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiCreatePoolPageTables @ 0x1403A6278 (MiCreatePoolPageTables.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1404D0550 (MiLogPerfMemoryRangeEvent.c)
 */

__int64 __fastcall MiCommitPoolMemory(_QWORD *a1)
{
  __int64 v1; // r14
  ULONG_PTR v3; // rsi
  unsigned int v4; // ebp
  __int64 v5; // rdx
  unsigned __int16 v6; // ax
  unsigned int v7; // r8d
  unsigned __int64 v8; // r8
  volatile signed __int64 *v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rcx
  unsigned int *MmInternal; // rax
  __int64 v16; // rax
  int PoolPageTables; // ebx
  __int64 v18; // rdx
  int v19; // eax
  int v20; // r9d

  v1 = a1[9];
  v3 = ((*a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiLockPoolCommitWs((__int64)a1);
  v4 = 0;
  while ( v3 <= a1[10] )
  {
    v12 = a1[11];
    if ( v12 )
    {
      MiUnlockPageTableInternal(v1, v12);
      a1[11] = 0LL;
    }
    if ( *((_BYTE *)a1 + 103) < 2u )
    {
      if ( (*(_DWORD *)(v1 + 184) & 0xFu) <= 5 )
      {
        v13 = (__int64 *)&unk_140E38740;
        if ( (*(_DWORD *)(v1 + 184) & 0xF) != 1 )
          v13 = (__int64 *)(v1 + 192);
        v14 = *v13;
        MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
        v16 = MmInternal ? MmInternal[81] : 0LL;
        if ( (*(_DWORD *)((v16 << 6) + v14) & 0x40000000) != 0 )
          goto LABEL_22;
      }
      if ( KeShouldYieldProcessor() )
      {
LABEL_22:
        MiUnlockPoolCommitWs((__int64)a1);
        MiLockPoolCommitWs((__int64)a1);
      }
    }
    if ( (unsigned int)MiLockPoolCommitPageTable((__int64)a1, v3) )
    {
      MiLinkPoolCommitChain((__int64)a1, v3);
      v3 = (v3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    else
    {
      MiUnlockPoolCommitWs((__int64)a1);
      PoolPageTables = MiCreatePoolPageTables(a1, v3);
      MiLockPoolCommitWs((__int64)a1);
      if ( !PoolPageTables )
      {
        *((_WORD *)a1 + 50) |= 1u;
        break;
      }
    }
  }
  MiFillPoolCommitPageTable(a1);
  MiUnlockPoolCommitWs((__int64)a1);
  v6 = *((_WORD *)a1 + 50);
  v7 = v6;
  if ( (v6 & 1) != 0 )
  {
    if ( (v6 & 2) == 0 )
    {
      v5 = (*a1 >> 9) & 0x7FFFFFFFF8LL;
      if ( v3 != v5 - 0x98000000000LL )
      {
        v18 = (__int64)(v3 - v5 + 0x98000000000LL) >> 3;
        v19 = (v6 >> 2) & 1;
        v20 = (v7 >> 2) & 1 | 2;
        if ( (v7 & 0x100) == 0 )
          v20 = v19;
        MiClearNonPagedPtes(*a1, v18, 0x4000, v20);
      }
    }
    v4 = -1073741670;
  }
  else
  {
    if ( (v6 & 0x104) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogPerfMemoryRangeEvent(*a1, 0LL, 11LL, a1[1]);
    v5 = *((unsigned int *)a1 + 16);
    if ( (_DWORD)v5 == 4 )
    {
      v9 = &qword_140E2CA48;
    }
    else if ( (_DWORD)v5 == 5 )
    {
      v9 = &qword_140E37550;
    }
    else
    {
      v9 = (volatile signed __int64 *)&unk_140E2CA50;
      if ( (_DWORD)v5 != 14 )
        v9 = 0LL;
    }
    v8 = a1[6];
    v10 = _InterlockedExchangeAdd64(v9, v8) + v8;
    if ( (_DWORD)v5 == 4 && (v10 >= *(_QWORD *)&MiState || *(_QWORD *)&MiState - v10 < 0x300) )
      MiFreeExcessSegments(0LL);
  }
  MiReturnExcessPoolCommit((__int64)a1, v5);
  return v4;
}
