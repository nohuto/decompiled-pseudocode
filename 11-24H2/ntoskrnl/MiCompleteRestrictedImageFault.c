/*
 * XREFs of MiCompleteRestrictedImageFault @ 0x140213BC4
 * Callers:
 *     MiSoftFaultMappedView @ 0x1403491DC (MiSoftFaultMappedView.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x1402090F0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14020C4A0 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiStartingOffset @ 0x14020C7B0 (MiStartingOffset.c)
 *     MiReferenceControlAreaFileWithTag @ 0x14020C860 (MiReferenceControlAreaFileWithTag.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     MiQueueCoreWorkingSetEntries @ 0x140243260 (MiQueueCoreWorkingSetEntries.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocateWsle @ 0x14024C6D0 (MiAllocateWsle.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     PfSnLogPageFault @ 0x14034E5A0 (PfSnLogPageFault.c)
 *     MiGetSessionIdForVa @ 0x14034E860 (MiGetSessionIdForVa.c)
 */

__int64 __fastcall MiCompleteRestrictedImageFault(__int64 a1, unsigned __int64 a2, _QWORD *a3, unsigned int a4)
{
  unsigned int v5; // ebp
  _QWORD *v6; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  ULONG_PTR v11; // rax
  ULONG_PTR v12; // r14
  unsigned int i; // edi
  __int64 v14; // r12
  __int64 v15; // rbp
  unsigned __int64 v16; // rbx
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r13
  unsigned int SessionIdForVa; // eax
  __int64 v21; // r9
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  ULONG_PTR BugCheckParameter3; // rbx
  unsigned int v25; // r12d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // r10d
  unsigned int v32; // esi
  unsigned __int64 v33; // rcx
  unsigned __int64 v35; // [rsp+40h] [rbp-58h]
  __int64 v36; // [rsp+50h] [rbp-48h]
  __int64 v37; // [rsp+58h] [rbp-40h]
  int v38; // [rsp+A0h] [rbp+8h]

  v36 = *(_QWORD *)a1;
  v5 = a4;
  v6 = a3;
  v38 = 1;
  v8 = 48LL * *a3 - 0x220000000000LL;
  v9 = *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL;
  v10 = *(_QWORD *)(v8 + 16);
  v35 = v9;
  if ( qword_140E2DCC0 && (v10 & 0x10) == 0 )
    v10 &= ~qword_140E2DCC0;
  v37 = *(_QWORD *)(v10 >> 16);
  if ( PfSnNumActiveTraces )
  {
    v11 = MiReferenceControlAreaFileWithTag(*(_QWORD *)(v10 >> 16), 0x63536D4Du, 1);
    v9 = v35;
    v12 = v11;
    v6 = a3;
  }
  else
  {
    v12 = 0LL;
  }
  for ( i = 0; i < v5; ++i )
  {
    v14 = v6[i];
    v15 = 48 * v14 - 0x220000000000LL;
    v16 = *(_QWORD *)(v15 + 16);
    v17 = v16;
    if ( qword_140E2DCC0 && (v16 & 0x10) == 0 )
      v17 = v16 & ~qword_140E2DCC0;
    v18 = *(_QWORD *)(v15 + 8) | 0x8000000000000000uLL;
    v19 = a2 + 8 * ((__int64)(v18 - v9) >> 3);
    if ( v12 )
    {
      SessionIdForVa = MiGetSessionIdForVa((__int64)(v19 << 25) >> 16, v18, v9, v17);
      v23 = MiStartingOffset((__int64 *)(v21 >> 16), v22, SessionIdForVa);
      PfSnLogPageFault(v12, v23, 1LL);
    }
    MI_READ_PTE_LOCK_FREE(v19, v18, v9);
    BugCheckParameter3 = MiMakeValidPte(v19, v14, (v16 >> 5) & 0x1F) & 0xFFFFFFFFFFFFFFDFuLL;
    MiQueueCoreWorkingSetEntries(a1, v19, v15);
    v5 = a4;
    if ( !(unsigned int)MiAllocateWsle(
                          v36,
                          v19,
                          48 * (int)v14,
                          0,
                          BugCheckParameter3,
                          16 * (*(_BYTE *)(a1 + 13) & 1u) + 12,
                          0LL) )
    {
      --*(_WORD *)(a1 + 10);
      v25 = 0;
      v38 = 0;
      goto LABEL_16;
    }
    v9 = v35;
    v6 = a3;
  }
  v25 = 1;
LABEL_16:
  if ( i )
  {
    if ( *(_WORD *)(a1 + 10) )
      MiEmptyDeferredWorkingSetEntries((__int64 *)a1);
    v28 = 48 * MiGetContainingPageTable(a2) - 0x220000000000LL;
    v32 = v31;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v32 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v27, v26, v29, v30) )
        {
          HvlNotifyLongSpinWait(v32);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v28 + 24) < 0 );
    }
    v33 = (*(_QWORD *)(v28 + 24) + i) ^ (*(_QWORD *)(v28 + 24) ^ (*(_QWORD *)(v28 + 24) + i)) & 0xC000000000000000uLL;
    *(_QWORD *)(v28 + 24) = v33;
    _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiIncreaseUsedPtes(v33, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, i);
    v5 = a4;
  }
  else
  {
    *(_WORD *)(a1 + 10) = 0;
  }
  if ( i != v5 )
  {
    do
      MiLockAndDecrementShareCount(48LL * a3[i++] - 0x220000000000LL);
    while ( i != v5 );
    v25 = v38;
  }
  if ( v12 )
    ObFastDereferenceObjectDeferDelete((__int64 *)(v37 + 64), v12);
  return v25;
}
