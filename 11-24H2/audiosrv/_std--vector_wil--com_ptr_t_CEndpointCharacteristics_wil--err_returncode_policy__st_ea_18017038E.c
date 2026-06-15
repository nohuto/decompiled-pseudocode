/*
 * XREFs of _std::vector_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy____::_1_::catch$0 @ 0x18017038E
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180019110 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ?deallocate@?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAAXQEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x180053FE4 (-deallocate@-$allocator@V-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil.c)
 *     _CxxThrowException_0 @ 0x180167F30 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 136));
  std::allocator<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::deallocate(
    v3,
    *(void **)(a2 + 40),
    *(_QWORD *)(a2 + 32));
  throw;
}
