/*
 * XREFs of _CGraphicsDeviceManager::CheckDXGIAdapter_::_1_::dtor$5 @ 0x1800F75DE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGraphicsDeviceManager::CheckDXGIAdapter_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDXGIOutput,wil::err_returncode_policy>::~com_ptr_t<IDXGIOutput,wil::err_returncode_policy>((__int64 *)(a2 + 88));
}
