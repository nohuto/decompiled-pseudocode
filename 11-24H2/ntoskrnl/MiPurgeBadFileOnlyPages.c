/*
 * XREFs of MiPurgeBadFileOnlyPages @ 0x14067CB6C
 * Callers:
 *     MiDeleteExtentPfns @ 0x14067B940 (MiDeleteExtentPfns.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x140253C90 (MiSetPfnTbFlushStamp.c)
 *     MiDecrementModifiedWriteCount @ 0x140259314 (MiDecrementModifiedWriteCount.c)
 *     MiDecrementSubsection @ 0x14025A644 (MiDecrementSubsection.c)
 *     MiRemoveLockedPageCharge @ 0x14029D0B0 (MiRemoveLockedPageCharge.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiPfnReferenceCountIsZero @ 0x140300260 (MiPfnReferenceCountIsZero.c)
 *     MiPreventControlAreaDeletion @ 0x140302F10 (MiPreventControlAreaDeletion.c)
 *     MiReleaseControlAreaWaiters @ 0x140338770 (MiReleaseControlAreaWaiters.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAddLockedPageCharge @ 0x14033F050 (MiAddLockedPageCharge.c)
 *     MiUnlinkPageFromBadList @ 0x1403F6AAC (MiUnlinkPageFromBadList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiPurgeFileOnlyPfn @ 0x14067CD7C (MiPurgeFileOnlyPfn.c)
 */

__int64 MiPurgeBadFileOnlyPages()
{
  unsigned __int8 CurrentIrql; // bl
  ULONG_PTR v1; // r14
  __int64 v2; // rbp
  __int64 v3; // r15
  __int64 v4; // r13
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  KIRQL v9; // al
  unsigned __int8 v10; // bl
  __int64 *v11; // r12
  unsigned __int8 v12; // si
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // ebx
  KIRQL v16; // al
  unsigned __int8 v17; // dl
  __int64 *v19; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp+10h] BYREF

  do
  {
    while ( 1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
      ExAcquireSpinLockExclusiveAtDpcLevel(dword_140E3A8E0);
      v1 = qword_140E2D6A0;
      byte_140E2D742 = 0;
      if ( qword_140E2D6A0 == 0x3FFFFFFFFFLL )
      {
        v17 = CurrentIrql;
        return MiReleaseSpinLockExclusive(dword_140E3A8E0, v17);
      }
      v2 = 48 * qword_140E2D6A0 - 0x220000000000LL;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
        break;
      MiReleaseSpinLockExclusive(dword_140E3A8E0, CurrentIrql);
    }
    v3 = qword_140E2D690;
    MiUnlinkPageFromBadList(48 * v1 - 0x220000000000LL, 128);
    ExReleaseSpinLockExclusiveFromDpcLevel(dword_140E3A8E0);
    MiAddLockedPageCharge(48 * v1 - 0x220000000000LL, 1);
    v19 = 0LL;
    BugCheckParameter2 = 0LL;
    v4 = MiPreventControlAreaDeletion(48 * v1 - 0x220000000000LL, &BugCheckParameter2, &v19);
    MiUnlockPage(48 * v1 - 0x220000000000LL, CurrentIrql);
    LODWORD(v8) = 0;
    if ( v4 )
    {
      if ( v19 )
        MiReleaseControlAreaWaiters(v19);
      MiPurgeFileOnlyPfn(48 * v1 - 0x220000000000LL);
      v8 = (*(_QWORD *)(v2 + 24) >> 62) & 1LL;
      if ( BugCheckParameter2 )
        MiDecrementSubsection((__int64 *)BugCheckParameter2);
      v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
      *(_DWORD *)(v4 + 56) &= ~4u;
      v10 = v9;
      v19 = MiDecrementModifiedWriteCount(v4, 1);
      v11 = v19;
      MiReleaseSpinLockExclusive((_DWORD *)(v4 + 72), v10);
      if ( v11 )
        MiReleaseControlAreaWaiters(v11);
    }
    v12 = MiLockPageInline(48 * v1 - 0x220000000000LL, v5, v6, v7);
    if ( (unsigned int)MiRemoveLockedPageCharge(48 * v1 - 0x220000000000LL, v13, v14) )
    {
      MiSetPfnTbFlushStamp(48 * v1 - 0x220000000000LL, 0LL, 1);
      MiPfnReferenceCountIsZero(48 * v1 - 0x220000000000LL, v1);
    }
    v15 = *(_DWORD *)(v2 + 32);
    MiUnlockPage(48 * v1 - 0x220000000000LL, v12);
  }
  while ( !(_WORD)v15 && (_DWORD)v8 || v3 != 1 );
  v16 = ExAcquireSpinLockExclusive(dword_140E3A8E0);
  if ( qword_140E2D690 )
    byte_140E2D742 = 1;
  v17 = v16;
  return MiReleaseSpinLockExclusive(dword_140E3A8E0, v17);
}
