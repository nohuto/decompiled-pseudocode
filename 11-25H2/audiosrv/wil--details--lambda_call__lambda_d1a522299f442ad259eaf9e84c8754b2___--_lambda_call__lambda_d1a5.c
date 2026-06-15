/*
 * XREFs of wil::details::lambda_call__lambda_d1a522299f442ad259eaf9e84c8754b2___::_lambda_call__lambda_d1a522299f442ad259eaf9e84c8754b2___ @ 0x1801321D0
 * Callers:
 *     _CSpatialProperties::Initialize_::_1_::dtor$0 @ 0x1801684F5 (_CSpatialProperties--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VEffectPackConfigurationManager@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CFC64 (-reset@-$com_ptr_t@VEffectPackConfigurationManager@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_d1a522299f442ad259eaf9e84c8754b2___::_lambda_call__lambda_d1a522299f442ad259eaf9e84c8754b2___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    *(_QWORD *)(*(_QWORD *)a1 + 40LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)a1 + 48LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)a1 + 56LL) = 0LL;
    wil::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>::reset((__int64 *)(*(_QWORD *)a1 + 64LL));
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)(*(_QWORD *)a1 + 72LL));
    return wil::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>::reset((__int64 *)(*(_QWORD *)a1 + 80LL));
  }
  return result;
}
