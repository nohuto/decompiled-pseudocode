/*
 * XREFs of _lambda_7ee6381ccef9550c878152fb933ee002_::_lambda_7ee6381ccef9550c878152fb933ee002_ @ 0x180146C0C
 * Callers:
 *     ?QueueCompleteInitialization@AtmosCheck@@AEAAJW4AtmosRegistration@@@Z @ 0x180148DE0 (-QueueCompleteInitialization@AtmosCheck@@AEAAJW4AtmosRegistration@@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x1800A1B1C (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 */

__int64 __fastcall lambda_7ee6381ccef9550c878152fb933ee002_::_lambda_7ee6381ccef9550c878152fb933ee002_(
        __int64 a1,
        __int64 *a2,
        _DWORD *a3)
{
  wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
    (_QWORD *)a1,
    *a2);
  *(_DWORD *)(a1 + 8) = *a3;
  return a1;
}
