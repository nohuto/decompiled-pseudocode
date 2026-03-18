/*
 * XREFs of ??1CExpressionValueStack@@QEAA@XZ @ 0x1802B4074
 * Callers:
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18003CBE0 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1800EFE88 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x180223624 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ??1CExpressionManager@@EEAA@XZ @ 0x180297E2C (--1CExpressionManager@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CExpressionValueStack::~CExpressionValueStack(CExpressionValueStack *this)
{
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 16);
}
