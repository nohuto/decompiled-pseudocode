/*
 * XREFs of MiLockProtoPoolPageForce @ 0x140215A80
 * Callers:
 *     MmCheckCachedPageStates @ 0x140280E90 (MmCheckCachedPageStates.c)
 *     MiPfPutPagesInTransition @ 0x1402E692C (MiPfPutPagesInTransition.c)
 *     MmCopyToCachedPage @ 0x1402EDA94 (MmCopyToCachedPage.c)
 *     MiInitializeNewImageSectionProtos @ 0x140312D98 (MiInitializeNewImageSectionProtos.c)
 *     MiInitializeImageProtos @ 0x140313060 (MiInitializeImageProtos.c)
 *     MiMakeImageReadOnly @ 0x140491960 (MiMakeImageReadOnly.c)
 *     MiDeletePerSessionProtos @ 0x140495AB0 (MiDeletePerSessionProtos.c)
 *     MiInitializeDynamicPfns @ 0x14066D8BC (MiInitializeDynamicPfns.c)
 *     MiEliminateStaleExtents @ 0x14067A858 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14067AA74 (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14067AC68 (MiFillFileOnlyProtoAsBad.c)
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiLockOwnedProtoPage @ 0x1402158F0 (MiLockOwnedProtoPage.c)
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiIsPfnCommitNotCharged @ 0x14023C210 (MiIsPfnCommitNotCharged.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiChargePartitionResidentAvailable @ 0x1402F6BC0 (MiChargePartitionResidentAvailable.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockProtoPoolPageForce(ULONG_PTR BugCheckParameter1, unsigned __int8 *a2)
{
  unsigned __int64 *v4; // r15
  int v5; // r12d
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned __int8 v11; // si
  unsigned __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rax
  int v15; // eax
  unsigned int v17; // ebp
  char v18; // bp
  ULONG *v19; // rbx
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v22; // ett

  v4 = (unsigned __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = 0;
LABEL_2:
  v6 = 0xFFFFDE0000000000uLL;
  if ( a2 )
    *a2 = 17;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = *v4;
        if ( (*v4 & 1) == 0 || (v7 & 0x200) != 0 )
          goto LABEL_26;
        v8 = (v7 >> 12) & 0xFFFFFFFFFFLL;
        if ( v8 <= qword_140E2DBE0 )
        {
          v9 = 6 * v8;
          if ( (*(_QWORD *)(48 * v8 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
            break;
        }
      }
      v10 = 48 * v8 - 0x220000000000LL;
      if ( !a2 )
        break;
      v11 = MiSafeLockPage(v8, 0xFFFFFFFFFFLL, 0xFFFFDE0000000000uLL, 0x40000000000000LL);
      v6 = 0xFFFFDE0000000000uLL;
      if ( v11 != 17 )
        goto LABEL_10;
    }
    v11 = 17;
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v17 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9) )
        {
          HvlNotifyLongSpinWait(v17);
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
      MmAccessFault(2uLL, BugCheckParameter1);
      goto LABEL_2;
    }
    if ( v8 == ((v12 >> 12) & 0xFFFFFFFFFFLL) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v6 = 0xFFFFDE0000000000uLL;
    if ( v11 <= 1u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
      __writecr8(v11);
      v6 = 0xFFFFDE0000000000uLL;
    }
  }
  if ( (*(_QWORD *)(v10 + 40) & 0x10000000000LL) != 0 || _bittest64((const signed __int64 *)(v10 + 40), 0x35u) )
    goto LABEL_20;
  v13 = *(_DWORD *)(v10 + 32);
  v14 = *(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (_WORD)v13 )
  {
    if ( (_WORD)v13 == 1 )
    {
      if ( v14 || (*(_BYTE *)(v10 + 34) & 8) != 0 )
        v5 = 1;
      if ( !v5 )
        goto LABEL_20;
    }
    else if ( (_WORD)v13 != 2 || !v14 || (*(_BYTE *)(v10 + 34) & 8) == 0 )
    {
      goto LABEL_20;
    }
  }
  v18 = 0;
  if ( *(__int64 *)(v10 + 40) < 0 && (*(_DWORD *)(v10 + 16) & 0x400LL) != 0
    || (unsigned int)MiIsPfnCommitNotCharged(v10, 0x3FFFFFFFFFFFFFFFLL, v6) )
  {
    v18 = 1;
    v19 = (ULONG *)*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL));
    if ( (unsigned int)MiChargeCommit((__int64)v19, 1uLL, 4) )
      goto LABEL_54;
  }
  else
  {
    v19 = (ULONG *)*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL));
LABEL_54:
    if ( v19 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
      {
        v22 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    CachedResidentAvailable - 1,
                                    CachedResidentAvailable);
        if ( v22 == CachedResidentAvailable )
          goto LABEL_20;
      }
    }
    if ( (unsigned int)MiChargePartitionResidentAvailable(v19, 1LL, 0xFFFFFFFFLL) )
    {
LABEL_20:
      v15 = *(_DWORD *)(v10 + 32);
      LOWORD(v15) = v15 + 1;
      *(_DWORD *)(v10 + 32) = v15;
    }
    else if ( v18 )
    {
      MiReturnCommit(v19, 1LL, 0LL);
    }
  }
  if ( v11 != 17 )
    *a2 = v11;
  MiLockOwnedProtoPage(v10);
  return v10;
}
