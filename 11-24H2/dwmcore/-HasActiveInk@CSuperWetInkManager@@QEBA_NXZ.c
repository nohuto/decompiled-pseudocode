/*
 * XREFs of ?HasActiveInk@CSuperWetInkManager@@QEBA_NXZ @ 0x1801C5750
 * Callers:
 *     ?GetCompositorClockBoost@CComposition@@QEBA_NXZ @ 0x180102DE0 (-GetCompositorClockBoost@CComposition@@QEBA_NXZ.c)
 *     ?GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCMergedRect@@@Z @ 0x1801C52D0 (-GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRec.c)
 * Callees:
 *     <none>
 */

char __fastcall CSuperWetInkManager::HasActiveInk(CSuperWetInkManager *this)
{
  __int64 i; // rdx

  if ( *(_QWORD *)this )
    return 1;
  for ( i = *((_QWORD *)this + 4); i != *((_QWORD *)this + 5); i += 104LL )
  {
    if ( *((_QWORD *)g_pComposition + 111) - *(_QWORD *)(i + 88) < 0xAuLL )
      return 1;
  }
  return 0;
}
