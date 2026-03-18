/*
 * XREFs of MiLockLeafPage @ 0x14033B770
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MmCopyToCachedPage @ 0x140223414 (MmCopyToCachedPage.c)
 *     MiDeleteSectionCluster @ 0x140229404 (MiDeleteSectionCluster.c)
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 *     MiSoftFaultMappedView @ 0x140339FC4 (MiSoftFaultMappedView.c)
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiReplacePageOfProtoPool @ 0x14033AFCC (MiReplacePageOfProtoPool.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033D068 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiTranslatePageForCopy @ 0x1403783E0 (MiTranslatePageForCopy.c)
 *     MiCombineWithExisting @ 0x14038A898 (MiCombineWithExisting.c)
 *     MiResolveProtoCombine @ 0x14038AD20 (MiResolveProtoCombine.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FAC48 (MiReservePageFileSpaceForPage.c)
 *     MiInitializeNewImageSectionProtos @ 0x1404536FC (MiInitializeNewImageSectionProtos.c)
 *     MiDeletePerSessionProtos @ 0x1404967DC (MiDeletePerSessionProtos.c)
 *     MiMakeImageReadOnly @ 0x14049C768 (MiMakeImageReadOnly.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1404C22F8 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiDecrementLargeSubsections @ 0x1404C8190 (MiDecrementLargeSubsections.c)
 *     MiEliminateStaleExtents @ 0x14066F098 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14066F2B4 (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14066F4A8 (MiFillFileOnlyProtoAsBad.c)
 *     MiPurgeFileOnlyPfn @ 0x1406703DC (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReleaseFreshPageLocked @ 0x140342C10 (MiReleaseFreshPageLocked.c)
 *     MiReuseStandbyPage @ 0x1404C2648 (MiReuseStandbyPage.c)
 */

__int64 __fastcall MiLockLeafPage(unsigned __int64 *a1, char a2)
{
  __int64 v4; // r9
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  int v9; // r15d
  __int64 v10; // rdi

  while ( 2 )
  {
    v4 = 0x40000000000000LL;
    v5 = 0xFFFFDE0000000028uLL;
    while ( 1 )
    {
      v6 = *a1;
      v7 = *a1;
      if ( (*a1 & 1) != 0 )
        goto LABEL_9;
      if ( (*a1 & 0xC00) != 0x800 )
        return 0LL;
      if ( !v6 || !qword_140E2D940 || (qword_140E2D940 & v6) != 0 )
      {
        v7 = *a1;
        if ( qword_140E2D940 )
        {
          if ( (v6 & 0x10) != 0 )
            v7 = v6 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v7 = v6 & ~qword_140E2D940;
        }
LABEL_9:
        v8 = (v7 >> 12) & 0xFFFFFFFFFFLL;
        if ( v8 <= qword_140E2D9A0 && (*(_QWORD *)(48 * v8 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
          break;
      }
    }
    v9 = 0;
    v10 = 48 * v8 - 0x220000000000LL;
    if ( (a2 & 1) != 0 )
    {
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v9 & HvlLongSpinCountMask) == 0
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
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
    }
    else
    {
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v9 & HvlLongSpinCountMask) == 0
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
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
    }
    if ( *a1 != v6 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      continue;
    }
    break;
  }
  if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0
    && (a2 & 2) == 0 )
  {
    MiReuseStandbyPage(v10, qword_140E2FD48, v5, v4);
    MiReleaseFreshPageLocked(v10);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  return v10;
}
