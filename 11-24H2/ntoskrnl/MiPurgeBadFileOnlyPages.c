/*
 * XREFs of MiPurgeBadFileOnlyPages @ 0x14067B98C
 * Callers:
 *     MiDeleteExtentPfns @ 0x14067A760 (MiDeleteExtentPfns.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14020F410 (MiReleaseControlAreaWaiters.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPfnReferenceCountIsZero @ 0x14022C950 (MiPfnReferenceCountIsZero.c)
 *     MiPreventControlAreaDeletion @ 0x14022F600 (MiPreventControlAreaDeletion.c)
 *     MiRemoveLockedPageCharge @ 0x14028D4B0 (MiRemoveLockedPageCharge.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiAddLockedPageCharge @ 0x1402F6F40 (MiAddLockedPageCharge.c)
 *     MiSetPfnTbFlushStamp @ 0x1402FBDB0 (MiSetPfnTbFlushStamp.c)
 *     MiDecrementModifiedWriteCount @ 0x140370FD4 (MiDecrementModifiedWriteCount.c)
 *     MiDecrementSubsection @ 0x140371D7C (MiDecrementSubsection.c)
 *     MiUnlinkPageFromBadList @ 0x14039398C (MiUnlinkPageFromBadList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiPurgeFileOnlyPfn @ 0x14067BB9C (MiPurgeFileOnlyPfn.c)
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
  __int64 v7; // rdi
  KIRQL v8; // al
  unsigned __int8 v9; // bl
  __int64 *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int8 v13; // si
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // ebx
  KIRQL v17; // al
  unsigned __int8 v18; // dl
  __int64 *v20; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp+10h] BYREF

  do
  {
    while ( 1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
      ExAcquireSpinLockExclusiveAtDpcLevel(dword_140E3A7A0);
      v1 = qword_140E2D560;
      byte_140E2D602 = 0;
      if ( qword_140E2D560 == 0x3FFFFFFFFFLL )
      {
        v18 = CurrentIrql;
        return MiReleaseSpinLockExclusive(dword_140E3A7A0, v18);
      }
      v2 = 48 * qword_140E2D560 - 0x220000000000LL;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
        break;
      MiReleaseSpinLockExclusive(dword_140E3A7A0, CurrentIrql);
    }
    v3 = qword_140E2D550;
    MiUnlinkPageFromBadList(48 * v1 - 0x220000000000LL, 128);
    ExReleaseSpinLockExclusiveFromDpcLevel(dword_140E3A7A0);
    MiAddLockedPageCharge(48 * v1 - 0x220000000000LL, 1);
    v20 = 0LL;
    BugCheckParameter2 = 0LL;
    v4 = MiPreventControlAreaDeletion(48 * v1 - 0x220000000000LL, (__int64 *)&BugCheckParameter2, &v20);
    MiUnlockPage(48 * v1 - 0x220000000000LL, CurrentIrql);
    LODWORD(v7) = 0;
    if ( v4 )
    {
      if ( v20 )
        MiReleaseControlAreaWaiters(v20, v5, v6);
      MiPurgeFileOnlyPfn(48 * v1 - 0x220000000000LL);
      v7 = (*(_QWORD *)(v2 + 24) >> 62) & 1LL;
      if ( BugCheckParameter2 )
        MiDecrementSubsection((__int64 *)BugCheckParameter2);
      v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
      *(_DWORD *)(v4 + 56) &= ~4u;
      v9 = v8;
      v20 = MiDecrementModifiedWriteCount(v4, 1);
      v10 = v20;
      MiReleaseSpinLockExclusive((_DWORD *)(v4 + 72), v9);
      if ( v10 )
        MiReleaseControlAreaWaiters(v10, v11, v12);
    }
    v13 = MiLockPageInline(48 * v1 - 0x220000000000LL);
    if ( (unsigned int)MiRemoveLockedPageCharge(48 * v1 - 0x220000000000LL, v14, v15) )
    {
      MiSetPfnTbFlushStamp(48 * v1 - 0x220000000000LL, 0LL, 1);
      MiPfnReferenceCountIsZero(48 * v1 - 0x220000000000LL, v1);
    }
    v16 = *(_DWORD *)(v2 + 32);
    MiUnlockPage(48 * v1 - 0x220000000000LL, v13);
  }
  while ( !(_WORD)v16 && (_DWORD)v7 || v3 != 1 );
  v17 = ExAcquireSpinLockExclusive(dword_140E3A7A0);
  if ( qword_140E2D550 )
    byte_140E2D602 = 1;
  v18 = v17;
  return MiReleaseSpinLockExclusive(dword_140E3A7A0, v18);
}
