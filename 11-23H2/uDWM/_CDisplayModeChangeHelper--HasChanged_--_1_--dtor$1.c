/*
 * XREFs of _CDisplayModeChangeHelper::HasChanged_::_1_::dtor$1 @ 0x1800677BA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplayModeChangeHelper::HasChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(a2 + 48);
}
