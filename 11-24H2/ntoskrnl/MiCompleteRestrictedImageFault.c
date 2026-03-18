/*
 * XREFs of MiCompleteRestrictedImageFault @ 0x140238F64
 * Callers:
 *     MiSoftFaultMappedView @ 0x1402E7B9C (MiSoftFaultMappedView.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocateWsle @ 0x14021F980 (MiAllocateWsle.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140240FA0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiStartingOffset @ 0x140244020 (MiStartingOffset.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402440D0 (MiReferenceControlAreaFileWithTag.c)
 *     MiIncreaseUsedPtes @ 0x14028A180 (MiIncreaseUsedPtes.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiQueueCoreWorkingSetEntries @ 0x1402E1980 (MiQueueCoreWorkingSetEntries.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402E1B00 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     PfSnLogPageFault @ 0x1402ECF60 (PfSnLogPageFault.c)
 *     MiGetSessionIdForVa @ 0x1402ED220 (MiGetSessionIdForVa.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
 */

__int64 __fastcall MiCompleteRestrictedImageFault(__int64 a1, unsigned __int64 a2, _QWORD *a3, unsigned int a4)
{
  __int64 v5; // rdx
  unsigned int v6; // ebp
  _QWORD *v7; // r9
  __int64 v9; // r10
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned int i; // edi
  __int64 v15; // r12
  ULONG_PTR v16; // rbp
  unsigned __int64 v17; // rbx
  __int64 v18; // r9
  unsigned __int64 v19; // r13
  unsigned int SessionIdForVa; // eax
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rax
  ULONG_PTR v24; // rbx
  int Wsle; // eax
  unsigned int v26; // r12d
  __int64 v27; // rcx
  __int64 v28; // rbx
  unsigned int v29; // r10d
  unsigned int v30; // esi
  unsigned __int64 v31; // rcx
  unsigned __int64 v33; // [rsp+40h] [rbp-58h]
  __int64 v34; // [rsp+50h] [rbp-48h]
  __int64 v35; // [rsp+58h] [rbp-40h]
  int v36; // [rsp+A0h] [rbp+8h]

  v34 = *(_QWORD *)a1;
  v5 = 1LL;
  v6 = a4;
  v7 = a3;
  v36 = 1;
  v9 = 48LL * *a3 - 0x220000000000LL;
  v10 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL;
  v11 = *(_QWORD *)(v9 + 16);
  v33 = v10;
  if ( qword_140E2DB80 && (v11 & 0x10) == 0 )
    v11 &= ~qword_140E2DB80;
  v35 = *(_QWORD *)(v11 >> 16);
  if ( PfSnNumActiveTraces )
  {
    v12 = MiReferenceControlAreaFileWithTag(*(_QWORD *)(v11 >> 16), 1666411853LL, 1LL, v7);
    v10 = v33;
    v13 = v12;
    v7 = a3;
  }
  else
  {
    v13 = 0LL;
  }
  for ( i = 0; i < v6; ++i )
  {
    v15 = v7[i];
    v16 = 48 * v15 - 0x220000000000LL;
    v17 = *(_QWORD *)(v16 + 16);
    v18 = v17;
    if ( qword_140E2DB80 && (v17 & 0x10) == 0 )
      v18 = v17 & ~qword_140E2DB80;
    v19 = a2 + 8 * ((__int64)((*(_QWORD *)(v16 + 8) | 0x8000000000000000uLL) - v10) >> 3);
    if ( v13 )
    {
      SessionIdForVa = MiGetSessionIdForVa(
                         (__int64)(v19 << 25) >> 16,
                         *(_QWORD *)(v16 + 8) | 0x8000000000000000uLL,
                         v10,
                         v18);
      v23 = MiStartingOffset(v21 >> 16, v22, SessionIdForVa);
      PfSnLogPageFault(v13, v23, 1LL);
    }
    MI_READ_PTE_LOCK_FREE(v19);
    v24 = MiMakeValidPte(v19, v15, (v17 >> 5) & 0x1F) & 0xFFFFFFFFFFFFFFDFuLL;
    MiQueueCoreWorkingSetEntries(a1, v19, v16);
    Wsle = MiAllocateWsle(v34, v19, v16, 0, v24, 16 * (*(_BYTE *)(a1 + 13) & 1u) + 12, 0LL);
    v6 = a4;
    if ( !Wsle )
    {
      --*(_WORD *)(a1 + 10);
      v26 = 0;
      v36 = 0;
      goto LABEL_16;
    }
    v10 = v33;
    v7 = a3;
  }
  v26 = 1;
LABEL_16:
  if ( i )
  {
    if ( *(_WORD *)(a1 + 10) )
      MiEmptyDeferredWorkingSetEntries(a1, v5, v10);
    v28 = 48 * MiGetContainingPageTable(a2) - 0x220000000000LL;
    v30 = v29;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v30 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v27) )
        {
          HvlNotifyLongSpinWait(v30);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v28 + 24) < 0 );
    }
    v31 = (*(_QWORD *)(v28 + 24) + i) ^ (*(_QWORD *)(v28 + 24) ^ (*(_QWORD *)(v28 + 24) + i)) & 0xC000000000000000uLL;
    *(_QWORD *)(v28 + 24) = v31;
    _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiIncreaseUsedPtes(v31, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, i, 2LL);
    v6 = a4;
  }
  else
  {
    *(_WORD *)(a1 + 10) = 0;
  }
  if ( i != v6 )
  {
    do
      MiLockAndDecrementShareCount(48LL * a3[i++] - 0x220000000000LL);
    while ( i != v6 );
    v26 = v36;
  }
  if ( v13 )
    ObFastDereferenceObjectDeferDelete(v35 + 64, v13, 1666411853LL);
  return v26;
}
