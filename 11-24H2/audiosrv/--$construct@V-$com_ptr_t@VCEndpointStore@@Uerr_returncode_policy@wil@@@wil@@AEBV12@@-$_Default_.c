/*
 * XREFs of ??$construct@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@?$_Default_allocator_traits@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@QEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@AEBV34@@Z @ 0x180029CA4
 * Callers:
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18000DC00 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ??$_Assign_unchecked@V?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@std@@U_Default_sentinel@2@@?$forward_list@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXV?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@1@U_Default_sentinel@1@@Z @ 0x180029B48 (--$_Assign_unchecked@V-$_Flist_unchecked_const_iterator@V-$_Flist_val@U-$_Flist_simple_types@V-$.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Default_allocator_traits<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>::construct<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy> const &>(
        __int64 a1,
        _QWORD *a2,
        volatile int *a3)
{
  return wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::com_ptr_t<CEndpointStore,wil::err_returncode_policy>(
           a2,
           a3);
}
