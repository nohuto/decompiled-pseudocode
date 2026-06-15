/*
 * XREFs of _lambda_d6992668c4bfc33c09c8caf2c3b97d3f_::_lambda_d6992668c4bfc33c09c8caf2c3b97d3f_ @ 0x1800F87BC
 * Callers:
 *     ?ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ @ 0x1800F90A4 (-ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ.c)
 * Callees:
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x1800A1B1C (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 */

__int64 __fastcall lambda_d6992668c4bfc33c09c8caf2c3b97d3f_::_lambda_d6992668c4bfc33c09c8caf2c3b97d3f_(
        __int64 a1,
        __int64 *a2,
        _OWORD *a3)
{
  __int64 result; // rax

  wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
    (_QWORD *)a1,
    *a2);
  result = a1;
  *(_OWORD *)(a1 + 8) = *a3;
  return result;
}
