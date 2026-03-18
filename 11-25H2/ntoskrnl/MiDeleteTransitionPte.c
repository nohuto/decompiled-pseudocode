/*
 * XREFs of MiDeleteTransitionPte @ 0x140340900
 * Callers:
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiTryDeleteTransitionPte @ 0x14033FEC4 (MiTryDeleteTransitionPte.c)
 *     MiPurgeSubsection @ 0x1403400A0 (MiPurgeSubsection.c)
 *     MiDecommitHandleTransitionPte @ 0x140383AF4 (MiDecommitHandleTransitionPte.c)
 *     MiDeletePerSessionProtos @ 0x1404967DC (MiDeletePerSessionProtos.c)
 *     MiPurgeFileOnlyPfn @ 0x1406703DC (MiPurgeFileOnlyPfn.c)
 *     MiStoreDiscardPoisonedPage @ 0x1406806F8 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertUnusedSubsection @ 0x140322E10 (MiInsertUnusedSubsection.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInvalidateCollidedIos @ 0x1404192CC (MiInvalidateCollidedIos.c)
 *     MiRemoveUnusedSubsection @ 0x140419DD4 (MiRemoveUnusedSubsection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B9590 (MiReturnCrossPartitionSectionCharges.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteTransitionPte(__int64 *BugCheckParameter2, ULONG_PTR a2, unsigned __int8 a3, char a4)
{
  unsigned __int64 v6; // r13
  ULONG_PTR v7; // rax
  unsigned __int64 v8; // rsi
  int v9; // edi
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 inserted; // r13
  __int64 v14; // rbp
  __int64 v15; // r15
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // ebp
  ULONG_PTR v22; // rdx
  __int64 v23; // rbx
  int v24; // edi
  __int64 v25; // rdx
  __int64 v27; // rbx
  __int64 v28; // [rsp+30h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter2a; // [rsp+38h] [rbp-70h]
  __int64 v30; // [rsp+40h] [rbp-68h]
  __int64 v32; // [rsp+B8h] [rbp+10h]
  int v33; // [rsp+B8h] [rbp+10h]

  v6 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
  BugCheckParameter2a = v6;
  v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)BugCheckParameter2);
  if ( (__int64 *)(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
    KeBugCheckEx(0x1Au, 0x402uLL, (ULONG_PTR)BugCheckParameter2, v7, *(_QWORD *)(a2 + 8));
  v8 = 0LL;
  v9 = *(_DWORD *)(a2 + 32);
  v10 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL;
  v30 = 0LL;
  v32 = v10;
  if ( !(_WORD)v9 )
    MiUnlinkPageFromListEx(a2, 0);
  v11 = *(_QWORD *)(a2 + 16);
  if ( (v11 & 0x400) == 0 )
  {
    v20 = 0LL;
    goto LABEL_20;
  }
  if ( qword_140E2D940 && (v11 & 0x10) == 0 )
    v11 &= ~qword_140E2D940;
  v12 = v11 >> 16;
  inserted = 0LL;
  v14 = *(_QWORD *)v12;
  if ( (*(_DWORD *)(*(_QWORD *)v12 + 56LL) & 0x20) == 0 && *(_QWORD *)(v14 + 64) )
  {
    v15 = v12;
  }
  else
  {
    v15 = 0LL;
    if ( !*(_QWORD *)(v14 + 64) )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
      --*(_QWORD *)(v14 + 32);
      goto LABEL_14;
    }
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
  if ( v15 )
  {
    if ( (*(_DWORD *)(v15 + 104))-- == 1 && !*(_QWORD *)(v15 + 80) && (*(_DWORD *)(v12 + 32) & 0x90000) == 0x80000 )
    {
      MiRemoveUnusedSubsection(v15);
      inserted = MiInsertUnusedSubsection(v15);
    }
  }
  --*(_QWORD *)(v14 + 32);
  if ( inserted )
  {
    v27 = *((_QWORD *)qword_140E2FD48 + (*(_WORD *)(v14 + 60) & 0x3FF));
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
    MiReturnCrossPartitionSectionCharges(v27, 1LL, inserted);
    goto LABEL_15;
  }
LABEL_14:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
LABEL_15:
  v17 = *(_QWORD *)(a2 + 16);
  v28 = v17;
  v18 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28);
  v19 = -9LL;
  if ( (v18 & 0x400) != 0 )
    v19 = -2049LL;
  v20 = v18 & v19;
  v28 = v20;
  if ( (v17 & 0x400) == 0 )
  {
    v20 &= 0xFFFFFFFFFFFFFFF9uLL;
    v28 = v20;
  }
  v10 = v32;
  v6 = BugCheckParameter2a;
LABEL_20:
  BugCheckParameter2a = 0LL;
  if ( (_WORD)v9 )
  {
    v21 = 3;
    *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
    if ( (*(_BYTE *)(a2 + 34) & 0x20) != 0 )
    {
      v22 = *(_QWORD *)a2 - 32LL;
      if ( *(_QWORD *)(v22 + 16) == v22 + 16 )
        v22 = 0LL;
      BugCheckParameter2a = v22;
    }
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
    {
      v8 = *(_QWORD *)(a2 + 16);
      if ( (v8 & 4) == 0 && (v8 & 2) == 0 )
        v8 = 0LL;
      v30 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
    }
    v21 = 4;
  }
  if ( _bittest64((const signed __int64 *)(a2 + 40), 0x35u) && (*(_BYTE *)(a2 + 35) & 0x10) == 0 )
  {
    v33 = *(_DWORD *)(a2 + 32);
    HIBYTE(v33) |= 0x10u;
    *(_DWORD *)(a2 + 32) = v33;
  }
  *BugCheckParameter2 = v20;
  if ( v21 == 4 )
    MiInsertPageInFreeOrZeroedList(v6);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v23 = 48 * v10 - 0x220000000000LL;
  v24 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v24 & HvlLongSpinCountMask) == 0
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
    while ( *(__int64 *)(v23 + 24) < 0 );
  }
  MiDecrementShareCountEx(v23, 0LL);
  if ( a3 == 17 )
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  else
    MiUnlockPage(v23, a3);
  if ( BugCheckParameter2a )
    MiInvalidateCollidedIos(BugCheckParameter2a, v25);
  if ( v8 && (a4 & 2) == 0 )
    MiReleasePageFileInfo(v30, v8, a3 == 17);
  return v21;
}
