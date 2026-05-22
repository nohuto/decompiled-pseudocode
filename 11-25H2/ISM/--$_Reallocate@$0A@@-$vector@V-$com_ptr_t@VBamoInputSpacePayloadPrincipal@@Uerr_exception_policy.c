/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXAEA_K@Z @ 0x180139AF4
 * Callers:
 *     ?ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x1800945D0 (-ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSys.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180017AC0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18007337C (--$_Uninitialized_move@PEAV-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>>::_Reallocate<0>(
        __int64 **a1,
        unsigned __int64 *a2)
{
  __int64 v4; // rdi
  size_t size_of; // rax
  __int64 *v6; // rsi

  v4 = a1[1] - *a1;
  size_of = std::_Get_size_of_n<8>(*a2);
  v6 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_move<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(
    *a1,
    a1[1],
    v6);
  return std::vector<wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>>::_Change_array(
           (__int64)a1,
           (__int64)v6,
           v4,
           *a2);
}
