/*
 * XREFs of ?OnPlaybackRateChanged@CAnimationController@@QEAAXXZ @ 0x18011303C
 * Callers:
 *     ?SetPlaybackRate@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJM@Z @ 0x180112D34 (-SetPlaybackRate@-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResourc.c)
 *     ??0CAnimationController@@QEAA@PEAVCComposition@@@Z @ 0x180112D58 (--0CAnimationController@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ @ 0x1800ADA40 (-UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800E4E40 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall CAnimationController::OnPlaybackRateChanged(CAnimationController *this)
{
  char v2; // al

  v2 = *((_BYTE *)this + 120) | 2;
  *((_BYTE *)this + 120) = v2;
  if ( (v2 & 8) != 0 )
  {
    CAnimationController::UpdateKeyframeAnimations(this);
    *((_BYTE *)this + 120) &= ~8u;
  }
  CResource::InvalidateAnimationSources(this, 3LL);
  CResource::OnPropertyChanged(this);
}
