/*
 * XREFs of MiLogPageAccess @ 0x1403806A0
 * Callers:
 *     MiIssueHardFault @ 0x1402085EC (MiIssueHardFault.c)
 *     MiClearPteAccessed @ 0x1402493D0 (MiClearPteAccessed.c)
 *     MiResetAccessBitPteWorker @ 0x14037CC0C (MiResetAccessBitPteWorker.c)
 *     MiEmptyWorkingSetHelper @ 0x1403808F0 (MiEmptyWorkingSetHelper.c)
 *     MiEmptyPte @ 0x140380E70 (MiEmptyPte.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140389E74 (MI_WSLE_LOG_ACCESS.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402C2260 (ObFastDereferenceObjectDeferDelete.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140323330 (MiReferenceControlAreaFileWithTag.c)
 *     MiStartingOffset @ 0x1403236B0 (MiStartingOffset.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x14037F48C (MiUnlockWorkingSetCoreExclusive.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1403C3B04 (MiLockWorkingSetCoreExclusive.c)
 *     MiAllocateAccessLog @ 0x1404853C8 (MiAllocateAccessLog.c)
 */

char __fastcall MiLogPageAccess(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rdi
  unsigned __int64 v4; // rsi
  unsigned int v5; // r15d
  _QWORD *v6; // r14
  __int64 AccessLog; // rdi
  unsigned __int64 v8; // rcx
  __int64 *i; // rdx
  __int64 v11; // rbx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r14
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r13
  _QWORD *v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // [rsp+50h] [rbp+8h]

  v21 = 0x300000000LL;
  v2 = (__int64 *)&unk_140E38528;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v2 = (__int64 *)(a1 + 232);
  v4 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  v5 = a2 & 1;
  if ( (a2 & 1) == 0 )
    v4 = a2;
  v6 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v4) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  MiLockWorkingSetCoreExclusive(a1);
  AccessLog = *v2;
  if ( AccessLog && (unsigned __int64)(*(_QWORD *)(AccessLog + 32) + 8LL) <= *(_QWORD *)(AccessLog + 40)
    || (AccessLog = MiAllocateAccessLog(a1)) != 0 )
  {
    if ( (__int64)v6[5] >= 0 || (v11 = v6[2], (v11 & 0x400) == 0) )
    {
      v8 = (v4 << 16) | ((unsigned __int64)v5 << 9);
LABEL_15:
      **(_QWORD **)(AccessLog + 32) = v8;
      *(_QWORD *)(AccessLog + 32) += 8LL;
      return MiUnlockWorkingSetCoreExclusive(a1);
    }
    if ( qword_140E2D940 )
    {
      if ( (v11 & 0x10) != 0 )
        v11 &= ~0x10uLL;
      else
        v11 &= ~qword_140E2D940;
    }
    v12 = *(_QWORD *)(AccessLog + 48);
    v13 = v6[1] | 0x8000000000000000uLL;
    v14 = v11 >> 16;
    v15 = v13 << 16;
    if ( *(_QWORD *)(AccessLog + 56) > 1uLL )
    {
      v16 = v14;
      goto LABEL_23;
    }
    v18 = *(_QWORD *)v14;
    if ( (*(_DWORD *)(v14 + 32) & 0x20000) == 0 || (*(_DWORD *)(v18 + 56) & 0x8000000) == 0 )
    {
      v19 = MiReferenceControlAreaFileWithTag(*(_QWORD *)v14, 0x63536D4Du, 1);
      v16 = v19[3];
      ObFastDereferenceObjectDeferDelete((__int64 *)(v18 + 64), (ULONG_PTR)v19, 1666411853LL);
      v20 = MiStartingOffset(v14, v13, 0xFFFFFFFF) << *((_DWORD *)&v21 + ((*(_DWORD *)(v18 + 56) >> 5) & 1));
      v21 = __PAIR64__(HIDWORD(v20), v20 & 0xFFFFFBFF | (32 * (*(_DWORD *)(v18 + 56) & 0x20)));
      v12 -= 8LL;
      v15 = v21;
LABEL_23:
      v17 = *(_QWORD *)(AccessLog + 40);
      for ( i = (__int64 *)(v17 + 8); (unsigned __int64)i <= v12; ++i )
      {
        if ( *i == v16 )
          goto LABEL_14;
      }
      i = *(__int64 **)(AccessLog + 40);
      *(_QWORD *)(AccessLog + 40) = v17 - 8;
      *i = v16;
LABEL_14:
      v8 = v15 & 0xFFFFFFFFFFFFFC00uLL | ((unsigned __int64)v5 << 9) | ((__int64)(*(_QWORD *)(AccessLog + 48) - (_QWORD)i) >> 3) & 0x1FF;
      goto LABEL_15;
    }
  }
  return MiUnlockWorkingSetCoreExclusive(a1);
}
