/*
 * XREFs of ?IsAutoCompleteOnScreenOccluded@CKeyframeAnimation@@UEBA_NXZ @ 0x18003AFE0
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x18003B1F0 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x18003C798 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x18003D4D4 (-NotifyAnimationStopped@CBaseExpression@@IEAAJXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x18003D5A4 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x1800604F0 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x1801FE8B4 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CKeyframeAnimation::IsAutoCompleteOnScreenOccluded(CKeyframeAnimation *this)
{
  return (*((_BYTE *)this + 537) & 0x10) != 0;
}
