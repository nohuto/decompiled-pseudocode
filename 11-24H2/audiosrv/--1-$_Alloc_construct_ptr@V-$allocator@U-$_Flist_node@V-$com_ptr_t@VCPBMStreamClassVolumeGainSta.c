/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A1F54
 * Callers:
 *     ?AddDuckingManagerGainStage@CAudioSession@@UEAAJPEAVCPBMStreamClassVolumeGainStage@@@Z @ 0x1800C1020 (-AddDuckingManagerGainStage@CAudioSession@@UEAAJPEAVCPBMStreamClassVolumeGainStage@@@Z.c)
 *     ??$emplace_front@AEAV?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@@?$forward_list@V?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAV?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800C5900 (--$emplace_front@AEAV-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@@-$f.c)
 *     _lambda_66d1f1fb806334d7e1fc2b7285da9724_::operator() @ 0x1800C5E14 (_lambda_66d1f1fb806334d7e1fc2b7285da9724_--operator().c)
 *     ??$emplace_front@AEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$forward_list@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAA?A_TAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800DAB5C (--$emplace_front@AEAV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$forward_list@V-$ComPtr@UISt.c)
 *     ?TryGetResourceManagerService@CBluetoothAudioEndpointResourceManagerProvider@@UEAAJPEAVCEndpointCharacteristics@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F2770 (-TryGetResourceManagerService@CBluetoothAudioEndpointResourceManagerProvider@@UEAAJPEAVCEndpoint.c)
 *     ?RuntimeClassInitialize@CMulticastSessionManager@@QEAAJXZ @ 0x180100A10 (-RuntimeClassInitialize@CMulticastSessionManager@@QEAAJXZ.c)
 *     _CEndpointStoreCache::GetEndpointStore_::_1_::dtor$15 @ 0x180168630 (_CEndpointStoreCache--GetEndpointStore_--_1_--dtor$15.c)
 *     _CMulticastSessionManager::RuntimeClassInitialize_::_1_::dtor$2 @ 0x18016A3DD (_CMulticastSessionManager--RuntimeClassInitialize_--_1_--dtor$2.c)
 *     _CBluetoothAudioEndpointResourceManagerProvider::TryGetResourceManagerService_::_1_::dtor$9 @ 0x18016FB44 (_CBluetoothAudioEndpointResourceManagerProvider--TryGetResourceManagerService_--_1_--dtor$9.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>(
        __int64 a1)
{
  char *v1; // rcx

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x10);
}
