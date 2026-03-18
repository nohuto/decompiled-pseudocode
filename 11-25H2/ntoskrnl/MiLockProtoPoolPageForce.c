/*
 * XREFs of MiLockProtoPoolPageForce @ 0x140231620
 * Callers:
 *     MmCopyToCachedPage @ 0x140223414 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiInitializeNewImageSectionProtos @ 0x1404536FC (MiInitializeNewImageSectionProtos.c)
 *     MiInitializeImageProtos @ 0x140453928 (MiInitializeImageProtos.c)
 *     MiDeletePerSessionProtos @ 0x1404967DC (MiDeletePerSessionProtos.c)
 *     MiMakeImageReadOnly @ 0x14049C768 (MiMakeImageReadOnly.c)
 *     MiInitializeDynamicPfns @ 0x140661D7C (MiInitializeDynamicPfns.c)
 *     MiEliminateStaleExtents @ 0x14066F098 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14066F2B4 (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14066F4A8 (MiFillFileOnlyProtoAsBad.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14022BAA0 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MiLockOwnedProtoPage @ 0x140231FF0 (MiLockOwnedProtoPage.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiIsPfnCommitNotCharged @ 0x14033E4E0 (MiIsPfnCommitNotCharged.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockProtoPoolPageForce(ULONG_PTR BugCheckParameter1, unsigned __int8 *a2)
{
  unsigned __int64 *v4; // r15
  int v5; // r12d
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned __int8 v12; // al
  unsigned __int8 v13; // si
  unsigned __int64 v14; // rax
  __int64 CurrentPrcb; // rdx
  int v16; // ecx
  __int64 v17; // rax
  int v18; // eax
  unsigned int v20; // ebp
  char v21; // bp
  ULONG *v22; // rdi
  signed __int32 v23; // eax
  signed __int32 v24; // ett

  v4 = (unsigned __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = 0;
LABEL_2:
  v6 = 0xFFFFDE0000000000uLL;
  v7 = 0xFFFFDE0000000028uLL;
  if ( a2 )
    *a2 = 17;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = *v4;
        if ( (*v4 & 1) == 0 || (v8 & 0x200) != 0 )
          goto LABEL_26;
        v9 = (v8 >> 12) & 0xFFFFFFFFFFLL;
        if ( v9 <= qword_140E2D9A0 )
        {
          v10 = 6 * v9;
          if ( (*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
            break;
        }
      }
      v11 = 48 * v9 - 0x220000000000LL;
      if ( !a2 )
        break;
      v12 = MiSafeLockPage(v9, 0xFFFFFFFFFFLL, 0xFFFFDE0000000000uLL, 0xFFFFDE0000000028uLL);
      v6 = 0xFFFFDE0000000000uLL;
      v13 = v12;
      v7 = 0xFFFFDE0000000028uLL;
      if ( v12 != 17 )
        goto LABEL_10;
    }
    v13 = 17;
    v20 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v20 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10) )
        {
          HvlNotifyLongSpinWait(v20);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
LABEL_10:
    v14 = *v4;
    if ( (*v4 & 1) == 0 || (v14 & 0x200) != 0 )
    {
      if ( v13 == 17 )
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      else
        MiUnlockPage(v11, v13);
LABEL_26:
      MmAccessFault(2uLL, BugCheckParameter1);
      goto LABEL_2;
    }
    CurrentPrcb = 0xFFFFFFFFFFLL;
    if ( v9 == ((v14 >> 12) & 0xFFFFFFFFFFLL) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v6 = 0xFFFFDE0000000000uLL;
    v7 = 0xFFFFDE0000000028uLL;
    if ( v13 <= 1u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
      __writecr8(v13);
      v6 = 0xFFFFDE0000000000uLL;
      v7 = 0xFFFFDE0000000028uLL;
    }
  }
  if ( (*(_QWORD *)(v11 + 40) & 0x10000000000LL) != 0 || _bittest64((const signed __int64 *)(v11 + 40), 0x35u) )
    goto LABEL_20;
  v16 = *(_DWORD *)(v11 + 32);
  CurrentPrcb = 0x3FFFFFFFFFFFFFFFLL;
  v17 = *(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (_WORD)v16 )
  {
    if ( (_WORD)v16 == 1 )
    {
      if ( v17 || (*(_BYTE *)(v11 + 34) & 8) != 0 )
        v5 = 1;
      if ( !v5 )
        goto LABEL_20;
    }
    else if ( (_WORD)v16 != 2 || !v17 || (*(_BYTE *)(v11 + 34) & 8) == 0 )
    {
      goto LABEL_20;
    }
  }
  v21 = 0;
  if ( (*(__int64 *)(v11 + 40) >= 0 || (*(_DWORD *)(v11 + 16) & 0x400LL) == 0)
    && !(unsigned int)MiIsPfnCommitNotCharged(v11) )
  {
    v22 = (ULONG *)*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v11 + 40) >> 43) & 0x3FFLL));
    goto LABEL_41;
  }
  v21 = 1;
  v22 = (ULONG *)*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v11 + 40) >> 43) & 0x3FFLL));
  if ( (unsigned int)MiChargeCommit((__int64)v22, 1uLL, 4) )
  {
LABEL_41:
    if ( v22 == &MiSystemPartition )
    {
      CurrentPrcb = (__int64)KeGetCurrentPrcb();
      v23 = *(_DWORD *)(CurrentPrcb + 35740);
      while ( (unsigned int)(v23 - 1) <= 0xFFFFFFFD )
      {
        v24 = v23;
        v23 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 35740), v23 - 1, v23);
        if ( v24 == v23 )
          goto LABEL_20;
      }
    }
    if ( (unsigned int)MiChargePartitionResidentAvailable((__int64)v22, 1uLL, 0xFFFFFFFFLL) )
    {
LABEL_20:
      v18 = *(_DWORD *)(v11 + 32);
      LOWORD(v18) = v18 + 1;
      *(_DWORD *)(v11 + 32) = v18;
    }
    else if ( v21 )
    {
      MiReturnCommit(v22, 1LL, 0LL);
    }
  }
  if ( v13 != 17 )
    *a2 = v13;
  MiLockOwnedProtoPage(v11, CurrentPrcb, v6, v7);
  return v11;
}
