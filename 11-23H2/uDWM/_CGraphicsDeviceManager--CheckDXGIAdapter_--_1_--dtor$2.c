/*
 * XREFs of _CGraphicsDeviceManager::CheckDXGIAdapter_::_1_::dtor$2 @ 0x180067814
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGraphicsDeviceManager::CheckDXGIAdapter_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
