/*
 * XREFs of MiCommitPoolMemory @ 0x14034C650
 * Callers:
 *     RtlpHpEnvAllocVA @ 0x14034C090 (RtlpHpEnvAllocVA.c)
 *     MmAllocateSecurePoolMemory @ 0x14067DD58 (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiLinkPoolCommitChain @ 0x1402077F0 (MiLinkPoolCommitChain.c)
 *     MiLockPoolCommitWs @ 0x14020C760 (MiLockPoolCommitWs.c)
 *     MiClearNonPagedPtes @ 0x14020E660 (MiClearNonPagedPtes.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiCreatePoolPageTables @ 0x14026D568 (MiCreatePoolPageTables.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiFreeExcessSegments @ 0x14034B7B0 (MiFreeExcessSegments.c)
 *     MiLockPoolCommitPageTable @ 0x14034BC80 (MiLockPoolCommitPageTable.c)
 *     MiReturnExcessPoolCommit @ 0x14034BE10 (MiReturnExcessPoolCommit.c)
 *     MiUnlockPoolCommitWs @ 0x14034C024 (MiUnlockPoolCommitWs.c)
 *     MiFillPoolCommitPageTable @ 0x14034C910 (MiFillPoolCommitPageTable.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1404C9744 (MiLogPerfMemoryRangeEvent.c)
 */

__int64 __fastcall MiCommitPoolMemory(_QWORD *a1)
{
  __int64 v1; // r14
  unsigned __int64 v3; // rsi
  unsigned int v4; // ebp
  unsigned __int16 v5; // ax
  unsigned int v6; // r8d
  int v7; // edx
  unsigned __int64 v8; // r8
  volatile signed __int64 *v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rcx
  unsigned int *MmInternal; // rax
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  int PoolPageTables; // ebx
  __int64 v20; // rdx
  __int64 v21; // rdx
  int v22; // eax
  int v23; // r9d

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
        v13 = (__int64 *)&unk_140E38880;
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
      MiLinkPoolCommitChain((__int64)a1, v3, v17, v18);
      v3 = (v3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    else
    {
      MiUnlockPoolCommitWs((__int64)a1);
      PoolPageTables = MiCreatePoolPageTables((__int64)a1, v3);
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
  v5 = *((_WORD *)a1 + 50);
  v6 = v5;
  if ( (v5 & 1) != 0 )
  {
    if ( (v5 & 2) == 0 )
    {
      v20 = (*a1 >> 9) & 0x7FFFFFFFF8LL;
      if ( v3 != v20 - 0x98000000000LL )
      {
        v21 = (__int64)(v3 - v20 + 0x98000000000LL) >> 3;
        v22 = (v5 >> 2) & 1;
        v23 = (v6 >> 2) & 1 | 2;
        if ( (v6 & 0x100) == 0 )
          v23 = v22;
        MiClearNonPagedPtes(*a1, v21, 0x4000, v23);
      }
    }
    v4 = -1073741670;
  }
  else
  {
    if ( (v5 & 0x104) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogPerfMemoryRangeEvent(*a1, 0LL, 11LL, a1[1]);
    v7 = *((_DWORD *)a1 + 16);
    if ( v7 == 4 )
    {
      v9 = &qword_140E2CB88;
    }
    else if ( v7 == 5 )
    {
      v9 = &qword_140E37690;
    }
    else
    {
      v9 = (volatile signed __int64 *)&unk_140E2CB90;
      if ( v7 != 14 )
        v9 = 0LL;
    }
    v8 = a1[6];
    v10 = _InterlockedExchangeAdd64(v9, v8) + v8;
    if ( v7 == 4 && (v10 >= *(_QWORD *)&MiState || *(_QWORD *)&MiState - v10 < 0x300) )
      MiFreeExcessSegments(0LL);
  }
  MiReturnExcessPoolCommit((__int64)a1);
  return v4;
}
