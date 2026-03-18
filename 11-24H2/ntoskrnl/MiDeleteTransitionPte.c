/*
 * XREFs of MiDeleteTransitionPte @ 0x14023D260
 * Callers:
 *     MiTryDeleteTransitionPte @ 0x14023C7DC (MiTryDeleteTransitionPte.c)
 *     MiPurgeSubsection @ 0x14023C9F0 (MiPurgeSubsection.c)
 *     MiDecommitHandleTransitionPte @ 0x140286C5C (MiDecommitHandleTransitionPte.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiDeletePerSessionProtos @ 0x140495AB0 (MiDeletePerSessionProtos.c)
 *     MiPurgeFileOnlyPfn @ 0x14067BB9C (MiPurgeFileOnlyPfn.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068BF88 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInvalidateCollidedIos @ 0x14036FA08 (MiInvalidateCollidedIos.c)
 *     MiRemoveUnusedSubsection @ 0x1403700B0 (MiRemoveUnusedSubsection.c)
 *     MiInsertUnusedSubsection @ 0x140371BB0 (MiInsertUnusedSubsection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteTransitionPte(__int64 *BugCheckParameter2, ULONG_PTR a2, unsigned __int8 a3, char a4)
{
  unsigned __int64 v6; // r13
  ULONG_PTR v7; // rax
  unsigned int v8; // r12d
  unsigned __int64 v9; // rsi
  int v10; // edi
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 inserted; // r13
  __int64 v15; // rbp
  __int64 v16; // r15
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // ebp
  unsigned __int64 v23; // rbx
  unsigned int v24; // edi
  ULONG_PTR v26; // rdx
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
  v8 = 0;
  v9 = 0LL;
  v10 = *(_DWORD *)(a2 + 32);
  v11 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL;
  v30 = 0LL;
  v32 = v11;
  if ( !(_WORD)v10 )
    MiUnlinkPageFromListEx(a2, 0);
  v12 = *(_QWORD *)(a2 + 16);
  if ( (v12 & 0x400) == 0 )
  {
    v21 = 0LL;
    goto LABEL_20;
  }
  if ( qword_140E2DB80 && (v12 & 0x10) == 0 )
    v12 &= ~qword_140E2DB80;
  v13 = v12 >> 16;
  inserted = 0LL;
  v15 = *(_QWORD *)v13;
  if ( (*(_DWORD *)(*(_QWORD *)v13 + 56LL) & 0x20) == 0 && *(_QWORD *)(v15 + 64) )
  {
    v16 = v13;
  }
  else
  {
    v16 = 0LL;
    if ( !*(_QWORD *)(v15 + 64) )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v15 + 72));
      --*(_QWORD *)(v15 + 32);
      goto LABEL_14;
    }
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v15 + 72));
  if ( v16 )
  {
    if ( (*(_DWORD *)(v16 + 104))-- == 1 && !*(_QWORD *)(v16 + 80) && (*(_DWORD *)(v13 + 32) & 0x90000) == 0x80000 )
    {
      MiRemoveUnusedSubsection(v16);
      inserted = MiInsertUnusedSubsection(v16);
    }
  }
  --*(_QWORD *)(v15 + 32);
  if ( inserted )
  {
    v27 = *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(v15 + 60) & 0x3FF));
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 72));
    MiReturnCrossPartitionSectionCharges(v27, 1LL, inserted);
    goto LABEL_15;
  }
LABEL_14:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 72));
LABEL_15:
  v18 = *(_QWORD *)(a2 + 16);
  v28 = v18;
  v19 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28);
  v20 = -9LL;
  if ( (v19 & 0x400) != 0 )
    v20 = -2049LL;
  v21 = v19 & v20;
  v28 = v21;
  if ( (v18 & 0x400) == 0 )
  {
    v21 &= 0xFFFFFFFFFFFFFFF9uLL;
    v28 = v21;
  }
  v11 = v32;
  v6 = BugCheckParameter2a;
LABEL_20:
  BugCheckParameter2a = 0LL;
  if ( (_WORD)v10 )
  {
    v22 = 3;
    *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
    if ( (*(_BYTE *)(a2 + 34) & 0x20) != 0 )
    {
      v26 = *(_QWORD *)a2 - 32LL;
      if ( *(_QWORD *)(v26 + 16) == v26 + 16 )
        v26 = 0LL;
      BugCheckParameter2a = v26;
    }
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
    {
      v9 = *(_QWORD *)(a2 + 16);
      if ( (v9 & 4) == 0 && (v9 & 2) == 0 )
        v9 = 0LL;
      v30 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
    }
    v22 = 4;
  }
  if ( _bittest64((const signed __int64 *)(a2 + 40), 0x35u) && (*(_BYTE *)(a2 + 35) & 0x10) == 0 )
  {
    v33 = *(_DWORD *)(a2 + 32);
    HIBYTE(v33) |= 0x10u;
    *(_DWORD *)(a2 + 32) = v33;
  }
  *BugCheckParameter2 = v21;
  if ( v22 == 4 )
    MiInsertPageInFreeOrZeroedList(v6, ((unsigned __int8)(a4 & 1) << 9) + 2);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v23 = 48 * v11 - 0x220000000000LL;
  v24 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v24 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v21) )
      {
        HvlNotifyLongSpinWait(v24);
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
    MiInvalidateCollidedIos();
  if ( v9 && (a4 & 2) == 0 )
  {
    LOBYTE(v8) = a3 == 17;
    MiReleasePageFileInfo(v30, v9, v8);
  }
  return v22;
}
