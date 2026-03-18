/*
 * XREFs of ??1CExpressionValueStack@@QEAA@XZ @ 0x1802AA5B4
 * Callers:
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800E700C (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1801534F0 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801E05CC (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ??1CExpressionManager@@EEAA@XZ @ 0x18028C9BC (--1CExpressionManager@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CExpressionValueStack::~CExpressionValueStack(CExpressionValueStack *this)
{
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 16);
}
