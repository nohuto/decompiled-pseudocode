/*
 * XREFs of _lambda_14b36391e39e184c5a3f1194e32070c1_::_lambda_14b36391e39e184c5a3f1194e32070c1_ @ 0x180146B74
 * Callers:
 *     ?OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z @ 0x1800883E0 (-OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x1800A1B1C (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 */

_QWORD *__fastcall lambda_14b36391e39e184c5a3f1194e32070c1_::_lambda_14b36391e39e184c5a3f1194e32070c1_(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v5; // rax

  wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
    a1,
    *a2);
  v5 = a3[1];
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  a1[1] = *a3;
  a1[2] = a3[1];
  return a1;
}
