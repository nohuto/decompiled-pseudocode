/*
 * XREFs of ??$_Construct_in_place@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCEndpointCharacteristics@@@std@@YAXAEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCEndpointCharacteristics@@@Z @ 0x180126884
 * Callers:
 *     ??$emplace_back@AEAPEAVCEndpointCharacteristics@@@?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAVCEndpointCharacteristics@@@Z @ 0x180127A50 (--$emplace_back@AEAPEAVCEndpointCharacteristics@@@-$vector@V-$com_ptr_t@VCEndpointCharacteristic.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Construct_in_place<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>,CEndpointCharacteristics * &>(
        _QWORD *a1,
        __int64 *a2)
{
  return wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
           a1,
           *a2);
}
