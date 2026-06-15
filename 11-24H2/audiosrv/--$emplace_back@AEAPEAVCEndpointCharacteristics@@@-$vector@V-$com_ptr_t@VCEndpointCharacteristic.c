/*
 * XREFs of ??$emplace_back@AEAPEAVCEndpointCharacteristics@@@?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAVCEndpointCharacteristics@@@Z @ 0x18012FB10
 * Callers:
 *     ?PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18005F930 (-PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANC.c)
 * Callees:
 *     ??$_Construct_in_place@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCEndpointCharacteristics@@@std@@YAXAEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCEndpointCharacteristics@@@Z @ 0x18012E790 (--$_Construct_in_place@V-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@.c)
 *     ??$_Emplace_reallocate@AEAPEAVCEndpointCharacteristics@@@?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCEndpointCharacteristics@@@Z @ 0x18012E99C (--$_Emplace_reallocate@AEAPEAVCEndpointCharacteristics@@@-$vector@V-$com_ptr_t@VCEndpointCharact.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::emplace_back<CEndpointCharacteristics * &>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rcx

  if ( a1[1] == a1[2] )
    return std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::_Emplace_reallocate<CEndpointCharacteristics * &>(
             a1,
             a1[1],
             a2);
  std::_Construct_in_place<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>,CEndpointCharacteristics * &>(
    (_QWORD *)a1[1],
    a2);
  v3 = a1[1];
  a1[1] = v3 + 8;
  return (__int64 *)v3;
}
