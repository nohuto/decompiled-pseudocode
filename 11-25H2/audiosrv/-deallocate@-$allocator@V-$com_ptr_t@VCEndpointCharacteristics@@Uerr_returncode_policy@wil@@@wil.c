/*
 * XREFs of ?deallocate@?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAAXQEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x180022B2C
 * Callers:
 *     _std::vector_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy____::_1_::catch$0 @ 0x180166F63 (_std--vector_wil--com_ptr_t_CEndpointCharacteristics_wil--err_returncode_policy__st_ea_180166F63.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180022D4C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::allocator<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::deallocate(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  unsigned __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  void *v4; // [rsp+38h] [rbp+10h] BYREF

  v3 = 8 * a3;
  v4 = a2;
  if ( (unsigned __int64)(8 * a3) >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v4, &v3);
    operator delete(v4, (const struct std::nothrow_t *)v3);
  }
  else
  {
    operator delete(a2, (const struct std::nothrow_t *)(8 * a3));
  }
}
