/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18001D800
 * Callers:
 *     ??$emplace_front@AEAPEAVCProcess@@@?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAVCProcess@@@Z @ 0x180032D5C (--$emplace_front@AEAPEAVCProcess@@@-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_policy.c)
 *     ??$emplace_after@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@@?$forward_list@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@V?$allocator@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@@2@@std@@QEAA?AV?$_Flist_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@@std@@@std@@@1@V?$_Flist_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@@std@@@std@@@1@$$QEAV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@1@@Z @ 0x18003F5A8 (--$emplace_after@V-$unique_ptr@UDuckingDescriptorAndId@@U-$default_delete@UDuckingDescriptorAndI.c)
 *     _TsSessionIdAddNotify_::_1_::dtor$13 @ 0x18004BE68 (_TsSessionIdAddNotify_--_1_--dtor$13.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$14 @ 0x18004C010 (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$14.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$19 @ 0x18004C050 (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$19.c)
 *     _std::forward_list_std::unique_ptr_DuckingDescriptorAndId_std::default_delete_DuckingDescriptorAndId____std::allocator_std::unique_ptr_DuckingDescriptorAndId_std::default_delete_DuckingDescriptorAndId_______::emplace_after_std::unique_ptr_DuckingDescriptorAndId_std::default_delete_DuckingDescriptorAndId______::_1_::dtor$0 @ 0x18004D3A6 (_std--forward_list_std--unique_ptr_DuckingDescriptorAndId_std--default_delete_DuckingDescriptorA.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x10);
}
