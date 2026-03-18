/*
 * XREFs of MiLockLeafPage @ 0x1402E8100
 * Callers:
 *     MiActOnPte @ 0x14028B7E0 (MiActOnPte.c)
 *     MiPfPutPagesInTransition @ 0x1402E692C (MiPfPutPagesInTransition.c)
 *     MiReplacePageOfProtoPool @ 0x1402E73F0 (MiReplacePageOfProtoPool.c)
 *     MiSoftFaultMappedView @ 0x1402E7B9C (MiSoftFaultMappedView.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MmCopyToCachedPage @ 0x1402EDA94 (MmCopyToCachedPage.c)
 *     MiCombineWithExisting @ 0x1402F92E0 (MiCombineWithExisting.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiInitializeNewImageSectionProtos @ 0x140312D98 (MiInitializeNewImageSectionProtos.c)
 *     MiReservePageFileSpaceForPage @ 0x1403687E0 (MiReservePageFileSpaceForPage.c)
 *     MiTranslatePageForCopy @ 0x1403961F0 (MiTranslatePageForCopy.c)
 *     MiDeleteSectionCluster @ 0x1403A0124 (MiDeleteSectionCluster.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403E4774 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140442B00 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiResolveProtoCombine @ 0x140481604 (MiResolveProtoCombine.c)
 *     MiMakeImageReadOnly @ 0x140491960 (MiMakeImageReadOnly.c)
 *     MiDeletePerSessionProtos @ 0x140495AB0 (MiDeletePerSessionProtos.c)
 *     MiDecrementLargeSubsections @ 0x1404C8E10 (MiDecrementLargeSubsections.c)
 *     MiEliminateStaleExtents @ 0x14067A858 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14067AA74 (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14067AC68 (MiFillFileOnlyProtoAsBad.c)
 *     MiPurgeFileOnlyPfn @ 0x14067BB9C (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReuseStandbyPage @ 0x140442E50 (MiReuseStandbyPage.c)
 *     MiReleaseFreshPageLocked @ 0x14044321C (MiReleaseFreshPageLocked.c)
 */

ULONG_PTR __fastcall MiLockLeafPage(unsigned __int64 *a1, char a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned int v7; // r15d
  ULONG_PTR v8; // rsi

  while ( 1 )
  {
    while ( 1 )
    {
      v4 = *a1;
      v5 = *a1;
      if ( (*a1 & 1) != 0 )
        goto LABEL_8;
      if ( (*a1 & 0xC00) != 0x800 )
        return 0LL;
      if ( !v4 || !qword_140E2DB80 || (qword_140E2DB80 & v4) != 0 )
      {
        v5 = *a1;
        if ( qword_140E2DB80 )
        {
          if ( (v4 & 0x10) != 0 )
            v5 = v4 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v5 = v4 & ~qword_140E2DB80;
        }
LABEL_8:
        v6 = (v5 >> 12) & 0xFFFFFFFFFFLL;
        if ( v6 <= qword_140E2DBE0 && (*(_QWORD *)(48 * v6 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
          break;
      }
    }
    v7 = 0;
    v8 = 48 * v6 - 0x220000000000LL;
    if ( (a2 & 1) != 0 )
    {
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v7 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v7);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v8 + 24) < 0 );
      }
    }
    else
    {
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v7 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v7);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v8 + 24) < 0 );
      }
    }
    if ( *a1 == v4 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0
    && (a2 & 2) == 0 )
  {
    MiReuseStandbyPage(v8);
    MiReleaseFreshPageLocked(v8);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  return v8;
}
