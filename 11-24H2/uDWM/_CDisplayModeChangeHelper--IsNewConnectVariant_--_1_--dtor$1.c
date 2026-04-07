/*
 * XREFs of _CDisplayModeChangeHelper::IsNewConnectVariant_::_1_::dtor$1 @ 0x1800F72E5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDisplayModeChangeHelper::IsNewConnectVariant_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>((CDWMDisplay **)(a2 + 96));
}
