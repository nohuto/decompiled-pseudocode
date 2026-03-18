/*
 * XREFs of MiCommitPoolMemory @ 0x1402C2C90
 * Callers:
 *     RtlpHpEnvAllocVA @ 0x1402C26C0 (RtlpHpEnvAllocVA.c)
 *     MmAllocateSecurePoolMemory @ 0x1406713B8 (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiLinkPoolCommitChain @ 0x140238250 (MiLinkPoolCommitChain.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiFillPoolCommitPageTable @ 0x1402C2F60 (MiFillPoolCommitPageTable.c)
 *     MiUnlockPoolCommitWs @ 0x1402C3BC0 (MiUnlockPoolCommitWs.c)
 *     MiReturnExcessPoolCommit @ 0x1402C3C24 (MiReturnExcessPoolCommit.c)
 *     MiLockPoolCommitPageTable @ 0x1402C3CB8 (MiLockPoolCommitPageTable.c)
 *     MiClearNonPagedPtes @ 0x1402FAC80 (MiClearNonPagedPtes.c)
 *     MiLockPoolCommitWs @ 0x1402FB6B8 (MiLockPoolCommitWs.c)
 *     MiCreatePoolPageTables @ 0x14038F514 (MiCreatePoolPageTables.c)
 *     MiFreeExcessSegments @ 0x1403BE140 (MiFreeExcessSegments.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1404D05B4 (MiLogPerfMemoryRangeEvent.c)
 */

__int64 __fastcall MiCommitPoolMemory(__int64 a1)
{
  __int64 v1; // r14
  ULONG_PTR v3; // rsi
  unsigned int v4; // ebp
  unsigned __int16 v5; // ax
  int v6; // edx
  unsigned __int64 v7; // r8
  volatile signed __int64 *v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 *v11; // rax
  __int64 v12; // rcx
  unsigned int *MmInternal; // rax
  __int64 v14; // rax
  int PoolPageTables; // ebx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r9

  v1 = *(_QWORD *)(a1 + 72);
  v3 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  ((void (*)(void))MiLockPoolCommitWs)();
  v4 = 0;
  while ( v3 <= *(_QWORD *)(a1 + 80) )
  {
    v10 = *(_QWORD *)(a1 + 88);
    if ( v10 )
    {
      MiUnlockPageTable(v1, v10);
      *(_QWORD *)(a1 + 88) = 0LL;
    }
    if ( *(_BYTE *)(a1 + 103) < 2u )
    {
      if ( (*(_DWORD *)(v1 + 184) & 0xFu) <= 5 )
      {
        v11 = (__int64 *)&unk_140E38500;
        if ( (*(_DWORD *)(v1 + 184) & 0xF) != 1 )
          v11 = (__int64 *)(v1 + 192);
        v12 = *v11;
        MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
        v14 = MmInternal ? MmInternal[81] : 0LL;
        if ( (*(_DWORD *)((v14 << 6) + v12) & 0x40000000) != 0 )
          goto LABEL_21;
      }
      if ( KeShouldYieldProcessor() )
      {
LABEL_21:
        MiUnlockPoolCommitWs(a1);
        MiLockPoolCommitWs(a1);
      }
    }
    if ( (unsigned int)MiLockPoolCommitPageTable(a1, v3) )
    {
      MiLinkPoolCommitChain(a1, v3);
      v3 = (v3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    else
    {
      MiUnlockPoolCommitWs(a1);
      PoolPageTables = MiCreatePoolPageTables(a1, v3);
      MiLockPoolCommitWs(a1);
      if ( !PoolPageTables )
      {
        *(_WORD *)(a1 + 100) |= 1u;
        break;
      }
    }
  }
  MiFillPoolCommitPageTable(a1);
  MiUnlockPoolCommitWs(a1);
  v5 = *(_WORD *)(a1 + 100);
  if ( (v5 & 1) != 0 )
  {
    if ( (v5 & 2) == 0 )
    {
      v17 = (*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL;
      if ( v3 != v17 - 0x98000000000LL )
      {
        v18 = (__int64)(v3 - v17 + 0x98000000000LL) >> 3;
        v19 = (v5 >> 2) & 1 | 2u;
        if ( (v5 & 0x100) == 0 )
          v19 = (v5 >> 2) & 1;
        MiClearNonPagedPtes(*(_QWORD *)a1, v18, 0x4000LL, v19);
      }
    }
    v4 = -1073741670;
  }
  else
  {
    if ( (v5 & 0x104) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogPerfMemoryRangeEvent(*(_QWORD *)a1, 0LL, 11LL, *(_QWORD *)(a1 + 8));
    v6 = *(_DWORD *)(a1 + 64);
    if ( v6 == 4 )
    {
      v8 = &qword_140E2C808;
    }
    else if ( v6 == 5 )
    {
      v8 = &qword_140E37310;
    }
    else
    {
      v8 = (volatile signed __int64 *)&unk_140E2C810;
      if ( v6 != 14 )
        v8 = 0LL;
    }
    v7 = *(_QWORD *)(a1 + 48);
    v9 = _InterlockedExchangeAdd64(v8, v7) + v7;
    if ( v6 == 4 && (v9 >= *(_QWORD *)&MiState || *(_QWORD *)&MiState - v9 < 0x300) )
      MiFreeExcessSegments(0LL);
  }
  MiReturnExcessPoolCommit(a1);
  return v4;
}
