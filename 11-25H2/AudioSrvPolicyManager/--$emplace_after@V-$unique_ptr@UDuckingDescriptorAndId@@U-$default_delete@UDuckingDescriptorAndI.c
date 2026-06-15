/*
 * XREFs of ??$emplace_after@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@@?$forward_list@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@V?$allocator@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@@2@@std@@QEAA?AV?$_Flist_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@@std@@@std@@@1@V?$_Flist_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@@std@@@std@@@1@$$QEAV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@1@@Z @ 0x18003F5A8
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180041534 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180006FE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18001D800 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCPBMStreamClassVolumeGainSta.c)
 *     ??$construct@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@V12@@?$_Default_allocator_traits@V?$allocator@U?$_Flist_node@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_Flist_node@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@PEAX@std@@@1@QEAV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@1@$$QEAV31@@Z @ 0x18003F40C (--$construct@V-$unique_ptr@UDuckingDescriptorAndId@@U-$default_delete@UDuckingDescriptorAndId@@@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::forward_list<std::unique_ptr<DuckingDescriptorAndId>>::emplace_after<std::unique_ptr<DuckingDescriptorAndId>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4)
{
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // r10
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  v11 = a1;
  v12 = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  std::_Default_allocator_traits<std::allocator<std::_Flist_node<std::unique_ptr<DuckingDescriptorAndId>,void *>>>::construct<std::unique_ptr<DuckingDescriptorAndId>,std::unique_ptr<DuckingDescriptorAndId>>(
    v8,
    v7 + 1,
    a4);
  *v9 = *a3;
  v12 = 0LL;
  *a3 = v9;
  std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>((__int64)&v11);
  *a2 = *a3;
  return a2;
}
