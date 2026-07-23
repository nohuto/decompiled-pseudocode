/*
 * XREFs of MiLogPageAccess @ 0x140296B90
 * Callers:
 *     MI_WSLE_LOG_ACCESS @ 0x1402590F0 (MI_WSLE_LOG_ACCESS.c)
 *     MiResetAccessBitPteWorker @ 0x1402941D8 (MiResetAccessBitPteWorker.c)
 *     MiEmptyWorkingSetHelper @ 0x140296F20 (MiEmptyWorkingSetHelper.c)
 *     MiEmptyPte @ 0x1402976F0 (MiEmptyPte.c)
 *     MiClearPteAccessed @ 0x140304BA0 (MiClearPteAccessed.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiIssueHardFault @ 0x140350280 (MiIssueHardFault.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x1402090F0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiStartingOffset @ 0x14020C7B0 (MiStartingOffset.c)
 *     MiReferenceControlAreaFileWithTag @ 0x14020C860 (MiReferenceControlAreaFileWithTag.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockWorkingSetCoreExclusive @ 0x140296038 (MiLockWorkingSetCoreExclusive.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x140296808 (MiUnlockWorkingSetCoreExclusive.c)
 *     MiAllocateAccessLog @ 0x1404814C0 (MiAllocateAccessLog.c)
 */

char __fastcall MiLogPageAccess(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rdi
  unsigned __int64 v4; // rsi
  unsigned int v5; // r15d
  _QWORD *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 AccessLog; // rdi
  unsigned __int64 v11; // rcx
  __int64 *i; // rdx
  __int64 v14; // rbx
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r14
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r13
  ULONG_PTR v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // [rsp+50h] [rbp+8h]

  v24 = 0x300000000LL;
  v2 = (__int64 *)&unk_140E388A8;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v2 = (__int64 *)(a1 + 232);
  v4 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  v5 = a2 & 1;
  if ( (a2 & 1) == 0 )
    v4 = a2;
  v6 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v4) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  MiLockWorkingSetCoreExclusive(a1, v7, v8, v9);
  AccessLog = *v2;
  if ( AccessLog && (unsigned __int64)(*(_QWORD *)(AccessLog + 32) + 8LL) <= *(_QWORD *)(AccessLog + 40)
    || (AccessLog = MiAllocateAccessLog(a1)) != 0 )
  {
    if ( (__int64)v6[5] >= 0 || (v14 = v6[2], (v14 & 0x400) == 0) )
    {
      v11 = (v4 << 16) | ((unsigned __int64)v5 << 9);
LABEL_15:
      **(_QWORD **)(AccessLog + 32) = v11;
      *(_QWORD *)(AccessLog + 32) += 8LL;
      return MiUnlockWorkingSetCoreExclusive(a1);
    }
    if ( qword_140E2DCC0 )
    {
      if ( (v14 & 0x10) != 0 )
        v14 &= ~0x10uLL;
      else
        v14 &= ~qword_140E2DCC0;
    }
    v15 = *(_QWORD *)(AccessLog + 48);
    v16 = v6[1] | 0x8000000000000000uLL;
    v17 = v14 >> 16;
    v18 = v16 << 16;
    if ( *(_QWORD *)(AccessLog + 56) > 1uLL )
    {
      v19 = v17;
      goto LABEL_23;
    }
    v21 = *(_QWORD *)v17;
    if ( (*(_DWORD *)(v17 + 32) & 0x20000) == 0 || (*(_DWORD *)(v21 + 56) & 0x8000000) == 0 )
    {
      v22 = MiReferenceControlAreaFileWithTag(*(_QWORD *)v17, 0x63536D4Du, 1);
      v19 = *(_QWORD *)(v22 + 24);
      ObFastDereferenceObjectDeferDelete((__int64 *)(v21 + 64), v22);
      v23 = MiStartingOffset((__int64 *)v17, v16, 0xFFFFFFFF) << *((_DWORD *)&v24 + ((*(_DWORD *)(v21 + 56) >> 5) & 1));
      v24 = __PAIR64__(HIDWORD(v23), v23 & 0xFFFFFBFF | (32 * (*(_DWORD *)(v21 + 56) & 0x20)));
      v15 -= 8LL;
      v18 = v24;
LABEL_23:
      v20 = *(_QWORD *)(AccessLog + 40);
      for ( i = (__int64 *)(v20 + 8); (unsigned __int64)i <= v15; ++i )
      {
        if ( *i == v19 )
          goto LABEL_14;
      }
      i = *(__int64 **)(AccessLog + 40);
      *(_QWORD *)(AccessLog + 40) = v20 - 8;
      *i = v19;
LABEL_14:
      v11 = v18 & 0xFFFFFFFFFFFFFC00uLL | ((unsigned __int64)v5 << 9) | ((__int64)(*(_QWORD *)(AccessLog + 48)
                                                                                 - (_QWORD)i) >> 3) & 0x1FF;
      goto LABEL_15;
    }
  }
  return MiUnlockWorkingSetCoreExclusive(a1);
}
