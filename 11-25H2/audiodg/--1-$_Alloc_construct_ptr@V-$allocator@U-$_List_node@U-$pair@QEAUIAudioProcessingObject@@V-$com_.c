/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x140049F70
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x140045DA4 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@QEAUIAudioProcessingObject@@V-$co.c)
 *     _std::_Hash_std::_Umap_traits_IAudioProcessingObject___wil::com_ptr_t_CAPOProcessingHostObject_wil::err_returncode_policy__std::_Uhash_compare_IAudioProcessingObject___std::hash_IAudioProcessingObject____std::equal_to_IAudioProcessingObject______std::allocator_std::pair_IAudioProcessingObject___const_wil::com_ptr_t_CAPOProcessingHostObject_wil::err_returncode_policy______0___::emplace_IAudioProcessingObject___&_wil::com_ptr_t_CAPOProcessingHostObject_wil::err_returncode_policy__&__::_1_::dtor$1 @ 0x140093082 (_std--_Hash_std--_Umap_traits_IAudioProcessingObject___wil--com_ptr_t_CAPOProcessin_ea_140093082.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x20uLL);
}
