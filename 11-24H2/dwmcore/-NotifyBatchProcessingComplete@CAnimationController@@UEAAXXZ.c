/*
 * XREFs of ?NotifyBatchProcessingComplete@CAnimationController@@UEAAXXZ @ 0x18007AD30
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ @ 0x18007BA60 (-UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ.c)
 */

void __fastcall CAnimationController::NotifyBatchProcessingComplete(CAnimationController *this)
{
  if ( (*((_BYTE *)this + 8) & 3) != 0 )
  {
    CAnimationController::UpdateKeyframeAnimations((CAnimationController *)((char *)this - 112));
    *((_BYTE *)this + 8) &= 0xFCu;
  }
}
