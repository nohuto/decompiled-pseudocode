/*
 * XREFs of ??$emplace_front@AEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$forward_list@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAA?A_TAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800D3304
 * Callers:
 *     ?FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@PEA_N@Z @ 0x1800D51F8 (-FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManagerBase@@IEAA.c)
 *     ?ReleaseSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@AEAV?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@@Z @ 0x1800DA5C8 (-ReleaseSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@AEAV-$forward_list@UDisp.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800DB3BC (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups_Old@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800DC2E0 (-RestoreDisplacedPrimaryProfileStreamGroups_Old@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002203C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$construct@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEBV123@@?$_Default_allocator_traits@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@SAXAEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@1@QEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEBV345@@Z @ 0x180023B44 (--$construct@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEBV123@@-$_Default_allocator_traits@.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A5B44 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCPBMStreamClassVolumeGainSta.c)
 */

__int64 __fastcall std::forward_list<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::emplace_front<Microsoft::WRL::ComPtr<IStreamGroupProxy> &>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v7 = a1;
  v8 = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  std::_Default_allocator_traits<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>::construct<Microsoft::WRL::ComPtr<IStreamGroupProxy>,Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
    v5,
    v4 + 1,
    a2);
  *v4 = *a1;
  v8 = 0LL;
  *a1 = v4;
  std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>((__int64)&v7);
  return *a1 + 8LL;
}
