/*
 * XREFs of ??1WeakReference@Platform@@QEAA@XZ @ 0x180211320
 * Callers:
 *     _GuidedSnapAssistViewController::[XamlBaseViewController]::RegisterForEvents_::_1_::dtor$17 @ 0x1806D23AA (_GuidedSnapAssistViewController--[XamlBaseViewController]--RegisterForEvents_--_1_--dtor$17.c)
 *     _XamlAltTabViewController::[XamlBaseViewController]::RegisterForEvents_::_1_::dtor$0 @ 0x1806D258D (_XamlAltTabViewController--[XamlBaseViewController]--RegisterForEvents_--_1_--dtor$0.c)
 *     _XamlBaseViewController::RegisterActivationChanged_::_1_::dtor$0 @ 0x1806D2695 (_XamlBaseViewController--RegisterActivationChanged_--_1_--dtor$0.c)
 *     _XamlSnapAssistViewHost::AnimateDismissView_::_1_::dtor$3 @ 0x1806DCBE2 (_XamlSnapAssistViewHost--AnimateDismissView_--_1_--dtor$3.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x18003FC58 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 */

void __fastcall Platform::WeakReference::~WeakReference(Platform::WeakReference *this)
{
  Platform::WeakReference::InternalRelease(this);
}
