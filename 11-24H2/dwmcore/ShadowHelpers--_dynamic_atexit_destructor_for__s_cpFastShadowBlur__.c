/*
 * XREFs of ShadowHelpers::_dynamic_atexit_destructor_for__s_cpFastShadowBlur__ @ 0x1802DFBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void ShadowHelpers::_dynamic_atexit_destructor_for__s_cpFastShadowBlur__()
{
  wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(&ShadowHelpers::s_cpFastShadowBlur);
}
