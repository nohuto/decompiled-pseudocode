/*
 * XREFs of _CSplashScreen::OnViewRemoved_::_1_::dtor$9 @ 0x1802C00DA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSplashScreen::OnViewRemoved_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(*(void **)(a2 + 72));
}
