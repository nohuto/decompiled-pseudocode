/*
 * XREFs of ??1?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C5244
 * Callers:
 *     _CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual_::_1_::dtor$0 @ 0x1806CB7C8 (_CImmersiveApp--CImmersiveWindowCollection--RemoveSystemVisual_--_1_--dtor$0.c)
 *     _CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual_::_1_::dtor$1 @ 0x1806CB7DA (_CImmersiveApp--CImmersiveWindowCollection--RemoveSystemVisual_--_1_--dtor$1.c)
 *     _CSplashScreen::OnSystemVisualChanged_::_1_::dtor$0 @ 0x1806CB7EC (_CSplashScreen--OnSystemVisualChanged_--_1_--dtor$0.c)
 *     _CSplashScreen::OnSystemVisualChanged_::_1_::dtor$1 @ 0x1806CB7FE (_CSplashScreen--OnSystemVisualChanged_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CSplashScreen>::~ComPtr<CSplashScreen>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(a1);
}
