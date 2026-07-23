/*
 * XREFs of MiLockLeafPage @ 0x140349740
 * Callers:
 *     MiDeleteSectionCluster @ 0x140216B54 (MiDeleteSectionCluster.c)
 *     MiCombineWithExisting @ 0x140294840 (MiCombineWithExisting.c)
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MiReplacePageOfProtoPool @ 0x140348A30 (MiReplacePageOfProtoPool.c)
 *     MiSoftFaultMappedView @ 0x1403491DC (MiSoftFaultMappedView.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MmCopyToCachedPage @ 0x14034F0D4 (MmCopyToCachedPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403D2314 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiInitializeNewImageSectionProtos @ 0x1403F0B48 (MiInitializeNewImageSectionProtos.c)
 *     MiTranslatePageForCopy @ 0x1403F3CE0 (MiTranslatePageForCopy.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FDC68 (MiReservePageFileSpaceForPage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14043BAD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiResolveProtoCombine @ 0x14047C8C4 (MiResolveProtoCombine.c)
 *     MiMakeImageReadOnly @ 0x14048C870 (MiMakeImageReadOnly.c)
 *     MiDeletePerSessionProtos @ 0x140490370 (MiDeletePerSessionProtos.c)
 *     MiDecrementLargeSubsections @ 0x1404C22C0 (MiDecrementLargeSubsections.c)
 *     MiEliminateStaleExtents @ 0x14067BA38 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14067BC54 (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14067BE48 (MiFillFileOnlyProtoAsBad.c)
 *     MiPurgeFileOnlyPfn @ 0x14067CD7C (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReuseStandbyPage @ 0x14043BE20 (MiReuseStandbyPage.c)
 *     MiReleaseFreshPageLocked @ 0x14043C168 (MiReleaseFreshPageLocked.c)
 */

__int64 __fastcall MiLockLeafPage(unsigned __int64 *a1, char a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned int v7; // r15d
  __int64 v8; // rsi

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
      if ( !v4 || !qword_140E2DCC0 || (qword_140E2DCC0 & v4) != 0 )
      {
        v5 = *a1;
        if ( qword_140E2DCC0 )
        {
          if ( (v4 & 0x10) != 0 )
            v5 = v4 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v5 = v4 & ~qword_140E2DCC0;
        }
LABEL_8:
        v6 = (v5 >> 12) & 0xFFFFFFFFFFLL;
        if ( v6 <= qword_140E2DD20 && (*(_QWORD *)(48 * v6 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
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
  if ( (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0
    && (a2 & 2) == 0 )
  {
    MiReuseStandbyPage(v8, qword_140E300C8);
    MiReleaseFreshPageLocked(v8);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  return v8;
}
