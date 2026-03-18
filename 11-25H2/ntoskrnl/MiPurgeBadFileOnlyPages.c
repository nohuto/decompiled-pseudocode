/*
 * XREFs of MiPurgeBadFileOnlyPages @ 0x1406701CC
 * Callers:
 *     MiDeleteExtentPfns @ 0x14066EFA0 (MiDeleteExtentPfns.c)
 * Callees:
 *     MiPreventControlAreaDeletion @ 0x140218C70 (MiPreventControlAreaDeletion.c)
 *     MiPfnReferenceCountIsZero @ 0x14021ADE0 (MiPfnReferenceCountIsZero.c)
 *     MiAddLockedPageCharge @ 0x14022C890 (MiAddLockedPageCharge.c)
 *     MiReleaseControlAreaWaiters @ 0x14022F630 (MiReleaseControlAreaWaiters.c)
 *     MiRemoveLockedPageCharge @ 0x140235C40 (MiRemoveLockedPageCharge.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiSetPfnTbFlushStamp @ 0x1402C7C70 (MiSetPfnTbFlushStamp.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiDecrementSubsection @ 0x14033F61C (MiDecrementSubsection.c)
 *     MiDecrementModifiedWriteCount @ 0x14035A754 (MiDecrementModifiedWriteCount.c)
 *     MiUnlinkPageFromBadList @ 0x1403BA1C4 (MiUnlinkPageFromBadList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiPurgeFileOnlyPfn @ 0x1406703DC (MiPurgeFileOnlyPfn.c)
 */

__int64 MiPurgeBadFileOnlyPages()
{
  unsigned __int8 CurrentIrql; // bl
  ULONG_PTR v1; // r14
  __int64 v2; // rbp
  __int64 v3; // r15
  __int64 v4; // r8
  unsigned __int64 v5; // r9
  __int64 v6; // r13
  __int64 v7; // rdi
  KIRQL v8; // al
  unsigned __int8 v9; // bl
  __int64 *v10; // r12
  unsigned __int8 v11; // si
  int v12; // ebx
  KIRQL v13; // al
  unsigned __int8 v14; // dl
  __int64 *v16; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp+10h] BYREF

  do
  {
    while ( 1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
      ExAcquireSpinLockExclusiveAtDpcLevel(dword_140E3A560);
      v1 = qword_140E2D320;
      byte_140E2D3C2 = 0;
      if ( qword_140E2D320 == 0x3FFFFFFFFFLL )
      {
        v14 = CurrentIrql;
        return MiReleaseSpinLockExclusive(dword_140E3A560, v14);
      }
      v2 = 48 * qword_140E2D320 - 0x220000000000LL;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
        break;
      MiReleaseSpinLockExclusive(dword_140E3A560, CurrentIrql);
    }
    v3 = qword_140E2D310;
    MiUnlinkPageFromBadList(48 * v1 - 0x220000000000LL, 128);
    ExReleaseSpinLockExclusiveFromDpcLevel(dword_140E3A560);
    MiAddLockedPageCharge(48 * v1 - 0x220000000000LL, 1, v4, v5);
    v16 = 0LL;
    BugCheckParameter2 = 0LL;
    v6 = MiPreventControlAreaDeletion(48 * v1 - 0x220000000000LL, &BugCheckParameter2, &v16);
    MiUnlockPage(48 * v1 - 0x220000000000LL, CurrentIrql);
    LODWORD(v7) = 0;
    if ( v6 )
    {
      if ( v16 )
        MiReleaseControlAreaWaiters(v16);
      MiPurgeFileOnlyPfn(48 * v1 - 0x220000000000LL);
      v7 = (*(_QWORD *)(v2 + 24) >> 62) & 1LL;
      if ( BugCheckParameter2 )
        MiDecrementSubsection((__int64 *)BugCheckParameter2);
      v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72));
      *(_DWORD *)(v6 + 56) &= ~4u;
      v9 = v8;
      v16 = MiDecrementModifiedWriteCount(v6, 1);
      v10 = v16;
      MiReleaseSpinLockExclusive((_DWORD *)(v6 + 72), v9);
      if ( v10 )
        MiReleaseControlAreaWaiters(v10);
    }
    v11 = MiLockPageInline(48 * v1 - 0x220000000000LL);
    if ( (unsigned int)MiRemoveLockedPageCharge(48 * v1 - 0x220000000000LL) )
    {
      MiSetPfnTbFlushStamp(48 * v1 - 0x220000000000LL, 0LL, 1);
      MiPfnReferenceCountIsZero(48 * v1 - 0x220000000000LL, v1);
    }
    v12 = *(_DWORD *)(v2 + 32);
    MiUnlockPage(48 * v1 - 0x220000000000LL, v11);
  }
  while ( !(_WORD)v12 && (_DWORD)v7 || v3 != 1 );
  v13 = ExAcquireSpinLockExclusive(dword_140E3A560);
  if ( qword_140E2D310 )
    byte_140E2D3C2 = 1;
  v14 = v13;
  return MiReleaseSpinLockExclusive(dword_140E3A560, v14);
}
