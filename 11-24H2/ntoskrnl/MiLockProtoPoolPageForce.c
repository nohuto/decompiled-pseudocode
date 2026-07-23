/*
 * XREFs of MiLockProtoPoolPageForce @ 0x140333E20
 * Callers:
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MmCopyToCachedPage @ 0x14034F0D4 (MmCopyToCachedPage.c)
 *     MiInitializeNewImageSectionProtos @ 0x1403F0B48 (MiInitializeNewImageSectionProtos.c)
 *     MiInitializeImageProtos @ 0x1403F26E0 (MiInitializeImageProtos.c)
 *     MiMakeImageReadOnly @ 0x14048C870 (MiMakeImageReadOnly.c)
 *     MiDeletePerSessionProtos @ 0x140490370 (MiDeletePerSessionProtos.c)
 *     MiInitializeDynamicPfns @ 0x14066EA90 (MiInitializeDynamicPfns.c)
 *     MiEliminateStaleExtents @ 0x14067BA38 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14067BC54 (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14067BE48 (MiFillFileOnlyProtoAsBad.c)
 * Callees:
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiLockOwnedProtoPage @ 0x1403354A0 (MiLockOwnedProtoPage.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x14033ECD0 (MiChargePartitionResidentAvailable.c)
 *     MiIsPfnCommitNotCharged @ 0x140345F70 (MiIsPfnCommitNotCharged.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockProtoPoolPageForce(ULONG_PTR BugCheckParameter1, unsigned __int8 *a2)
{
  unsigned __int64 *v4; // r15
  int v5; // r12d
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned __int8 v11; // si
  unsigned __int64 v12; // rax
  __int64 CurrentPrcb; // rdx
  int v14; // ecx
  __int64 v15; // rax
  int v16; // eax
  unsigned int v18; // ebp
  char v19; // bp
  ULONG *v20; // rbx
  signed __int32 v21; // eax
  signed __int32 v22; // ett

  v4 = (unsigned __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = 0;
LABEL_2:
  v6 = 0xFFFFDE0000000000uLL;
  v7 = 0x40000000000000LL;
  if ( a2 )
    *a2 = 17;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        v8 = *v4;
        if ( (*v4 & 1) == 0 || (v8 & 0x200) != 0 )
          goto LABEL_26;
        v9 = (v8 >> 12) & 0xFFFFFFFFFFLL;
      }
      while ( v9 > qword_140E2DD20 || (*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 );
      v10 = 48 * v9 - 0x220000000000LL;
      if ( !a2 )
        break;
      v11 = MiSafeLockPage(v9);
      v6 = 0xFFFFDE0000000000uLL;
      v7 = 0x40000000000000LL;
      if ( v11 != 17 )
        goto LABEL_10;
    }
    v11 = 17;
    v18 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v18 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v18);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
LABEL_10:
    v12 = *v4;
    if ( (*v4 & 1) == 0 || (v12 & 0x200) != 0 )
    {
      if ( v11 == 17 )
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      else
        MiUnlockPage(v10, v11);
LABEL_26:
      MmAccessFault(2uLL, BugCheckParameter1, 0, 0LL);
      goto LABEL_2;
    }
    CurrentPrcb = 0xFFFFFFFFFFLL;
    if ( v9 == ((v12 >> 12) & 0xFFFFFFFFFFLL) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v6 = 0xFFFFDE0000000000uLL;
    v7 = 0x40000000000000LL;
    if ( v11 <= 1u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
      __writecr8(v11);
      v6 = 0xFFFFDE0000000000uLL;
      v7 = 0x40000000000000LL;
    }
  }
  if ( (*(_QWORD *)(v10 + 40) & 0x10000000000LL) != 0 || _bittest64((const signed __int64 *)(v10 + 40), 0x35u) )
    goto LABEL_20;
  v14 = *(_DWORD *)(v10 + 32);
  CurrentPrcb = 0x3FFFFFFFFFFFFFFFLL;
  v15 = *(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (_WORD)v14 )
  {
    if ( (_WORD)v14 == 1 )
    {
      if ( v15 || (*(_BYTE *)(v10 + 34) & 8) != 0 )
        v5 = 1;
      if ( !v5 )
        goto LABEL_20;
    }
    else if ( (_WORD)v14 != 2 || !v15 || (*(_BYTE *)(v10 + 34) & 8) == 0 )
    {
      goto LABEL_20;
    }
  }
  v19 = 0;
  if ( *(__int64 *)(v10 + 40) < 0 && (*(_DWORD *)(v10 + 16) & 0x400LL) != 0
    || (unsigned int)MiIsPfnCommitNotCharged(v10) )
  {
    v19 = 1;
    v20 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL));
    if ( (unsigned int)MiChargeCommit(v20, 1LL, 4LL, v7) )
      goto LABEL_54;
  }
  else
  {
    v20 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL));
LABEL_54:
    if ( v20 == &MiSystemPartition )
    {
      CurrentPrcb = (__int64)KeGetCurrentPrcb();
      v21 = *(_DWORD *)(CurrentPrcb + 35740);
      while ( (unsigned int)(v21 - 1) <= 0xFFFFFFFD )
      {
        v22 = v21;
        v21 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 35740), v21 - 1, v21);
        if ( v22 == v21 )
          goto LABEL_20;
      }
    }
    if ( (unsigned int)MiChargePartitionResidentAvailable(v20, 1LL, 0xFFFFFFFFLL, v7) )
    {
LABEL_20:
      v16 = *(_DWORD *)(v10 + 32);
      LOWORD(v16) = v16 + 1;
      *(_DWORD *)(v10 + 32) = v16;
    }
    else if ( v19 )
    {
      MiReturnCommit((__int64)v20, 1LL, 0);
    }
  }
  if ( v11 != 17 )
    *a2 = v11;
  MiLockOwnedProtoPage(v10, CurrentPrcb, v6, v7);
  return v10;
}
