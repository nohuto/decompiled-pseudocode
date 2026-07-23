/*
 * XREFs of MiDeleteTransitionPte @ 0x140204FF0
 * Callers:
 *     MiTryDeleteTransitionPte @ 0x140204568 (MiTryDeleteTransitionPte.c)
 *     MiPurgeSubsection @ 0x140204780 (MiPurgeSubsection.c)
 *     MiDecommitHandleTransitionPte @ 0x14029685C (MiDecommitHandleTransitionPte.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiDeletePerSessionProtos @ 0x140490370 (MiDeletePerSessionProtos.c)
 *     MiPurgeFileOnlyPfn @ 0x14067CD7C (MiPurgeFileOnlyPfn.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068D0B8 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertUnusedSubsection @ 0x140259F70 (MiInsertUnusedSubsection.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiRemoveUnusedSubsection @ 0x140441E80 (MiRemoveUnusedSubsection.c)
 *     MiInvalidateCollidedIos @ 0x14049B72C (MiInvalidateCollidedIos.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteTransitionPte(__int64 *BugCheckParameter2, ULONG_PTR a2, __int64 a3, char a4)
{
  unsigned __int64 v6; // r13
  ULONG_PTR v7; // rax
  unsigned int v8; // r12d
  __int64 v9; // rsi
  int v10; // edi
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 inserted; // r13
  __int64 v16; // rbp
  __int64 v17; // r15
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  ULONG_PTR v25; // rdx
  ULONG_PTR v26; // r8
  unsigned int v27; // ebp
  __int64 v28; // rbx
  unsigned int v29; // edi
  __int64 v31; // rbx
  __int64 v32; // [rsp+30h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter2a; // [rsp+38h] [rbp-70h]
  __int64 v34; // [rsp+40h] [rbp-68h]
  __int64 v36; // [rsp+B8h] [rbp+10h]
  int v37; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v38; // [rsp+C0h] [rbp+18h]

  v38 = a3;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
  BugCheckParameter2a = v6;
  v7 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2, a2, a3);
  if ( (__int64 *)(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
    KeBugCheckEx(0x1Au, 0x402uLL, (ULONG_PTR)BugCheckParameter2, v7, *(_QWORD *)(a2 + 8));
  v8 = 0;
  v9 = 0LL;
  v10 = *(_DWORD *)(a2 + 32);
  v11 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL;
  v34 = 0LL;
  v36 = v11;
  if ( !(_WORD)v10 )
    MiUnlinkPageFromListEx(a2);
  v12 = *(_QWORD *)(a2 + 16);
  v13 = 1023LL;
  if ( (v12 & 0x400) == 0 )
  {
    v24 = 0LL;
    goto LABEL_20;
  }
  if ( qword_140E2DCC0 && (v12 & 0x10) == 0 )
    v12 &= ~qword_140E2DCC0;
  v14 = v12 >> 16;
  inserted = 0LL;
  v16 = *(_QWORD *)v14;
  if ( (*(_DWORD *)(*(_QWORD *)v14 + 56LL) & 0x20) == 0 && *(_QWORD *)(v16 + 64) )
  {
    v17 = v14;
  }
  else
  {
    v17 = 0LL;
    if ( !*(_QWORD *)(v16 + 64) )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v16 + 72));
      --*(_QWORD *)(v16 + 32);
      goto LABEL_14;
    }
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v16 + 72));
  if ( v17 )
  {
    if ( (*(_DWORD *)(v17 + 104))-- == 1 && !*(_QWORD *)(v17 + 80) && (*(_DWORD *)(v14 + 32) & 0x90000) == 0x80000 )
    {
      MiRemoveUnusedSubsection(v17);
      inserted = MiInsertUnusedSubsection(v17);
    }
  }
  --*(_QWORD *)(v16 + 32);
  if ( inserted )
  {
    v31 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(v16 + 60) & 0x3FF));
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v16 + 72));
    MiReturnCrossPartitionSectionCharges(v31, 1LL, inserted);
    goto LABEL_15;
  }
LABEL_14:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v16 + 72));
LABEL_15:
  v21 = *(_QWORD *)(a2 + 16);
  v32 = v21;
  v22 = MI_READ_PTE_LOCK_FREE(&v32, v19, v20);
  v23 = -9LL;
  if ( (v22 & 0x400) != 0 )
    v23 = -2049LL;
  v24 = v22 & v23;
  v32 = v24;
  if ( (v21 & 0x400) == 0 )
  {
    v24 &= 0xFFFFFFFFFFFFFFF9uLL;
    v32 = v24;
  }
  v11 = v36;
  v13 = 1023LL;
  v6 = BugCheckParameter2a;
LABEL_20:
  BugCheckParameter2a = 0LL;
  v25 = 16LL;
  v26 = a2;
  if ( (_WORD)v10 )
  {
    v25 = 0x4000000000000000LL;
    v27 = 3;
    *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
    if ( (*(_BYTE *)(a2 + 34) & 0x20) != 0 )
    {
      v25 = *(_QWORD *)a2 - 32LL;
      if ( *(_QWORD *)(v25 + 16) == v25 + 16 )
        v25 = 0LL;
      BugCheckParameter2a = v25;
    }
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
    {
      v9 = *(_QWORD *)(a2 + 16);
      if ( (v9 & 4) == 0 && (v9 & 2) == 0 )
        v9 = 0LL;
      v25 = (ULONG_PTR)qword_140E300C8;
      v34 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
    }
    v27 = 4;
  }
  if ( _bittest64((const signed __int64 *)(a2 + 40), 0x35u) && (*(_BYTE *)(a2 + 35) & 0x10) == 0 )
  {
    v37 = *(_DWORD *)(a2 + 32);
    HIBYTE(v37) |= 0x10u;
    *(_DWORD *)(a2 + 32) = v37;
  }
  *BugCheckParameter2 = v24;
  if ( v27 == 4 )
    MiInsertPageInFreeOrZeroedList(v6);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v28 = 48 * v11 - 0x220000000000LL;
  v29 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v29 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v24, v25, v26, v13) )
      {
        HvlNotifyLongSpinWait(v29);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v28 + 24) < 0 );
  }
  MiDecrementShareCountEx(v28, 0LL);
  if ( v38 == 17 )
    _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  else
    MiUnlockPage(v28, v38);
  if ( BugCheckParameter2a )
    MiInvalidateCollidedIos();
  if ( v9 && (a4 & 2) == 0 )
  {
    LOBYTE(v8) = v38 == 17;
    MiReleasePageFileInfo(v34, v9, v8);
  }
  return v27;
}
