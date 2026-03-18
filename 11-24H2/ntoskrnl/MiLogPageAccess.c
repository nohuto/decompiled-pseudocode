/*
 * XREFs of MiLogPageAccess @ 0x140286F90
 * Callers:
 *     MiClearPteAccessed @ 0x1402307A0 (MiClearPteAccessed.c)
 *     MiEmptyWorkingSetHelper @ 0x140287320 (MiEmptyWorkingSetHelper.c)
 *     MiEmptyPte @ 0x140287AF0 (MiEmptyPte.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402EFF38 (MI_WSLE_LOG_ACCESS.c)
 *     MiIssueHardFault @ 0x140397B2C (MiIssueHardFault.c)
 *     MiResetAccessBitPteWorker @ 0x1403FB050 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140240FA0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiStartingOffset @ 0x140244020 (MiStartingOffset.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402440D0 (MiReferenceControlAreaFileWithTag.c)
 *     MiLockWorkingSetCoreExclusive @ 0x140379CE4 (MiLockWorkingSetCoreExclusive.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x140379DAC (MiUnlockWorkingSetCoreExclusive.c)
 *     MiAllocateAccessLog @ 0x140485ED0 (MiAllocateAccessLog.c)
 */

__int64 __fastcall MiLogPageAccess(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rdi
  unsigned __int64 v4; // rsi
  unsigned int v5; // r15d
  _QWORD *v6; // r14
  __int64 v7; // rdx
  __int64 AccessLog; // rdi
  unsigned __int64 v9; // rcx
  __int64 *i; // rdx
  __int64 v12; // rbx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r14
  __int64 v15; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // r13
  ULONG_PTR v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // [rsp+50h] [rbp+8h]

  v22 = 0x300000000LL;
  v2 = (__int64 *)&unk_140E38768;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v2 = (__int64 *)(a1 + 232);
  v4 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  v5 = a2 & 1;
  if ( (a2 & 1) == 0 )
    v4 = a2;
  v6 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v4) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  MiLockWorkingSetCoreExclusive(a1, v7);
  AccessLog = *v2;
  if ( AccessLog && (unsigned __int64)(*(_QWORD *)(AccessLog + 32) + 8LL) <= *(_QWORD *)(AccessLog + 40)
    || (AccessLog = MiAllocateAccessLog(a1)) != 0 )
  {
    if ( (__int64)v6[5] >= 0 || (v12 = v6[2], (v12 & 0x400) == 0) )
    {
      v9 = (v4 << 16) | ((unsigned __int64)v5 << 9);
LABEL_15:
      **(_QWORD **)(AccessLog + 32) = v9;
      *(_QWORD *)(AccessLog + 32) += 8LL;
      return MiUnlockWorkingSetCoreExclusive(a1);
    }
    if ( qword_140E2DB80 )
    {
      if ( (v12 & 0x10) != 0 )
        v12 &= ~0x10uLL;
      else
        v12 &= ~qword_140E2DB80;
    }
    v13 = *(_QWORD *)(AccessLog + 48);
    v14 = v6[1] | 0x8000000000000000uLL;
    v15 = v12 >> 16;
    v16 = v14 << 16;
    if ( *(_QWORD *)(AccessLog + 56) > 1uLL )
    {
      v17 = v15;
      goto LABEL_23;
    }
    v19 = *(_QWORD *)v15;
    if ( (*(_DWORD *)(v15 + 32) & 0x20000) == 0 || (*(_DWORD *)(v19 + 56) & 0x8000000) == 0 )
    {
      v20 = MiReferenceControlAreaFileWithTag(*(_QWORD *)v15, 0x63536D4Du, 1);
      v17 = *(_QWORD *)(v20 + 24);
      ObFastDereferenceObjectDeferDelete((__int64 *)(v19 + 64), v20);
      v21 = MiStartingOffset((__int64 *)v15, v14, 0xFFFFFFFF) << *((_DWORD *)&v22 + ((*(_DWORD *)(v19 + 56) >> 5) & 1));
      v22 = __PAIR64__(HIDWORD(v21), v21 & 0xFFFFFBFF | (32 * (*(_DWORD *)(v19 + 56) & 0x20)));
      v13 -= 8LL;
      v16 = v22;
LABEL_23:
      v18 = *(_QWORD *)(AccessLog + 40);
      for ( i = (__int64 *)(v18 + 8); (unsigned __int64)i <= v13; ++i )
      {
        if ( *i == v17 )
          goto LABEL_14;
      }
      i = *(__int64 **)(AccessLog + 40);
      *(_QWORD *)(AccessLog + 40) = v18 - 8;
      *i = v17;
LABEL_14:
      v9 = v16 & 0xFFFFFFFFFFFFFC00uLL | ((unsigned __int64)v5 << 9) | ((__int64)(*(_QWORD *)(AccessLog + 48) - (_QWORD)i) >> 3) & 0x1FF;
      goto LABEL_15;
    }
  }
  return MiUnlockWorkingSetCoreExclusive(a1);
}
