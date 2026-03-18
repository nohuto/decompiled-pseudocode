/*
 * XREFs of MiCompleteRestrictedImageFault @ 0x140464CC4
 * Callers:
 *     MiSoftFaultMappedView @ 0x140339FC4 (MiSoftFaultMappedView.c)
 * Callees:
 *     MiGetSessionIdForVa @ 0x140208E10 (MiGetSessionIdForVa.c)
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocateWsle @ 0x14024B590 (MiAllocateWsle.c)
 *     MiQueueCoreWorkingSetEntries @ 0x1402B9360 (MiQueueCoreWorkingSetEntries.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402BB160 (MiEmptyDeferredWorkingSetEntries.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402C2260 (ObFastDereferenceObjectDeferDelete.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     PfSnLogPageFault @ 0x1403041E0 (PfSnLogPageFault.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140323330 (MiReferenceControlAreaFileWithTag.c)
 *     MiStartingOffset @ 0x1403236B0 (MiStartingOffset.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiIncreaseUsedPtes @ 0x1403837D0 (MiIncreaseUsedPtes.c)
 */

__int64 __fastcall MiCompleteRestrictedImageFault(__int64 a1, unsigned __int64 a2, _QWORD *a3, unsigned int a4)
{
  unsigned int v5; // ebp
  _QWORD *v6; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  void *v11; // rax
  ULONG_PTR v12; // r14
  unsigned int i; // edi
  __int64 v14; // r12
  __int64 v15; // rbp
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r13
  ULONG_PTR v18; // rbx
  int Wsle; // eax
  unsigned int SessionIdForVa; // eax
  __int64 v21; // r9
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned int v24; // r12d
  __int64 v25; // rbx
  int v26; // r10d
  int v27; // esi
  unsigned __int64 v28; // rcx
  unsigned __int64 v30; // [rsp+40h] [rbp-58h]
  __int64 v31; // [rsp+50h] [rbp-48h]
  __int64 v32; // [rsp+58h] [rbp-40h]
  int v33; // [rsp+A0h] [rbp+8h]

  v31 = *(_QWORD *)a1;
  v5 = a4;
  v6 = a3;
  v33 = 1;
  v8 = 48LL * *a3 - 0x220000000000LL;
  v9 = *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL;
  v10 = *(_QWORD *)(v8 + 16);
  v30 = v9;
  if ( qword_140E2D940 && (v10 & 0x10) == 0 )
    v10 &= ~qword_140E2D940;
  v32 = *(_QWORD *)(v10 >> 16);
  if ( PfSnNumActiveTraces )
  {
    v11 = MiReferenceControlAreaFileWithTag(*(_QWORD *)(v10 >> 16), 0x63536D4Du, 1);
    v9 = v30;
    v12 = (ULONG_PTR)v11;
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
    v17 = a2 + 8 * ((__int64)((*(_QWORD *)(v15 + 8) | 0x8000000000000000uLL) - v9) >> 3);
    if ( v12 )
    {
      SessionIdForVa = MiGetSessionIdForVa((__int64)(v17 << 25) >> 16);
      v23 = MiStartingOffset(v21 >> 16, v22, SessionIdForVa);
      PfSnLogPageFault(v12, v23, 1);
    }
    MI_READ_PTE_LOCK_FREE(v17);
    v18 = MiMakeValidPte(v17, v14, (v16 >> 5) & 0x1F) & 0xFFFFFFFFFFFFFFDFuLL;
    MiQueueCoreWorkingSetEntries((_QWORD *)a1, v17, v15);
    Wsle = MiAllocateWsle(v31, v17, v15, 0, v18, 16 * (*(_BYTE *)(a1 + 13) & 1u) + 12, 0LL);
    v5 = a4;
    if ( !Wsle )
    {
      --*(_WORD *)(a1 + 10);
      v24 = 0;
      v33 = 0;
      goto LABEL_13;
    }
    v9 = v30;
    v6 = a3;
  }
  v24 = 1;
LABEL_13:
  if ( i )
  {
    if ( *(_WORD *)(a1 + 10) )
      MiEmptyDeferredWorkingSetEntries(a1);
    v25 = 48 * MiGetContainingPageTable(a2) - 0x220000000000LL;
    v27 = v26;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v27 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v25 + 24) < 0 );
    }
    v28 = (*(_QWORD *)(v25 + 24) + i) ^ (*(_QWORD *)(v25 + 24) ^ (*(_QWORD *)(v25 + 24) + i)) & 0xC000000000000000uLL;
    *(_QWORD *)(v25 + 24) = v28;
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiIncreaseUsedPtes(v28, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, i, 2);
    v5 = a4;
  }
  else
  {
    *(_WORD *)(a1 + 10) = 0;
  }
  if ( i != v5 )
  {
    do
      MiLockAndDecrementShareCount(48LL * a3[i++] - 0x220000000000LL, 2);
    while ( i != v5 );
    v24 = v33;
  }
  if ( v12 )
    ObFastDereferenceObjectDeferDelete((__int64 *)(v32 + 64), v12, 1666411853LL);
  return v24;
}
