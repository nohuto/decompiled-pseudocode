/*
 * XREFs of ?OnPlaybackRateChanged@CAnimationController@@QEAAXXZ @ 0x1801D6500
 * Callers:
 *     ?SetPlaybackRate@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJM@Z @ 0x1801D61F8 (-SetPlaybackRate@-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResourc.c)
 *     ??0CAnimationController@@QEAA@PEAVCComposition@@@Z @ 0x1801D621C (--0CAnimationController@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ @ 0x18007BA60 (-UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18007F9F0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
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
  CResource::InvalidateAnimationSources(this, 3);
  CResource::OnPropertyChanged(this);
}
