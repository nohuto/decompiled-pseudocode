/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x140045DA4
 * Callers:
 *     _std::_Hash_std::_Umap_traits_IAudioProcessingObject___wil::com_ptr_t_CAPOProcessingHostObject_wil::err_returncode_policy__std::_Uhash_compare_IAudioProcessingObject___std::hash_IAudioProcessingObject____std::equal_to_IAudioProcessingObject______std::allocator_std::pair_IAudioProcessingObject___const_wil::com_ptr_t_CAPOProcessingHostObject_wil::err_returncode_policy______0___::emplace_IAudioProcessingObject___&_wil::com_ptr_t_CAPOProcessingHostObject_wil::err_returncode_policy__&__::_1_::dtor$0 @ 0x140093070 (_std--_Hash_std--_Umap_traits_IAudioProcessingObject___wil--com_ptr_t_CAPOProcessin_ea_140093070.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)(v2 + 24));
  return std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>,void *>>>(a1);
}
