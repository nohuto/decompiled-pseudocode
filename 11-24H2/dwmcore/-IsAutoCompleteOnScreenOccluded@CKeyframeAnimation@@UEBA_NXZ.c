/*
 * XREFs of ?IsAutoCompleteOnScreenOccluded@CKeyframeAnimation@@UEBA_NXZ @ 0x180014CD0
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180013DC0 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x180015A70 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x1801537A8 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x180154388 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x18015459C (-NotifyAnimationStopped@CBaseExpression@@IEAAJXZ.c)
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x1801F2234 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CKeyframeAnimation::IsAutoCompleteOnScreenOccluded(CKeyframeAnimation *this)
{
  return (*((_BYTE *)this + 537) & 0x10) != 0;
}
