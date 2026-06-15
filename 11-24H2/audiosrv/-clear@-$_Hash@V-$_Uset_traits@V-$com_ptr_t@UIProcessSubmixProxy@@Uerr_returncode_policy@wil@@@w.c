/*
 * XREFs of ?clear@?$_Hash@V?$_Uset_traits@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1800B0AD0
 * Callers:
 *     ??1_Clear_guard@?$_Hash@V?$_Uset_traits@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800AD9F4 (--1_Clear_guard@-$_Hash@V-$_Uset_traits@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_polic.c)
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800ADE70 (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 *     ?GetFilteredSubmixes@DeviceGraphStore@@YAJKW4ProcessSubmixCapture@@KAEAV?$unordered_set@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@@Z @ 0x1800FA41C (-GetFilteredSubmixes@DeviceGraphStore@@YAJKW4ProcessSubmixCapture@@KAEAV-$unordered_set@V-$com_p.c)
 *     ?GetSubmixesForApplication@DeviceGraphStore@@YAJPEBGKAEAV?$unordered_set@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@@Z @ 0x1800FA848 (-GetSubmixesForApplication@DeviceGraphStore@@YAJPEBGKAEAV-$unordered_set@V-$com_ptr_t@UIProcessS.c)
 * Callees:
 *     ??$fill@PEAV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@std@@YAXQEAV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@0@0AEBV10@@Z @ 0x18007154C (--$fill@PEAV-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@V-$com_ptr_t@UIP.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@?$_List_node@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@PEAU01@@Z @ 0x18009F928 (--$_Free_non_head@V-$allocator@U-$_List_node@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Uset_traits<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::_Uhash_compare<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>,std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,0>>::clear(
        __int64 a1)
{
  unsigned __int64 *v2; // rdx
  unsigned __int64 *v3; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 16) )
  {
    std::_List_node<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,void *>::_Free_non_head<std::allocator<std::_List_node<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,void *>>>(
      a1,
      *(_QWORD ***)(a1 + 8));
    **(_QWORD **)(a1 + 8) = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 16) = 0LL;
    v2 = *(unsigned __int64 **)(a1 + 32);
    v3 = *(unsigned __int64 **)(a1 + 24);
    v5 = *(_QWORD *)(a1 + 8);
    return std::fill<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>,std::_Iterator_base0> *,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>,std::_Iterator_base0>>(
             v3,
             v2,
             &v5);
  }
  return result;
}
