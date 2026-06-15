/*
 * XREFs of ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800C7DF0
 * Callers:
 *     ??0DynamicAudioEndpointManager@@QEAA@XZ @ 0x1800C7E20 (--0DynamicAudioEndpointManager@@QEAA@XZ.c)
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x1800CBEA4 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??$emplace_front@AEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAA?A_TAEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@1@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@1@@Z @ 0x1800D3374 (--$emplace_front@AEAVWeakRef@WRL@Microsoft@@AEAV-$unique_ptr@USaDeviceParams@@U-$default_delete@.c)
 *     ??$_Emplace_reallocate@UDummyBroadcastSession@@@?$vector@UDummyBroadcastSession@@V?$allocator@UDummyBroadcastSession@@@std@@@std@@AEAAPEAUDummyBroadcastSession@@QEAU2@$$QEAU2@@Z @ 0x1800DDE84 (--$_Emplace_reallocate@UDummyBroadcastSession@@@-$vector@UDummyBroadcastSession@@V-$allocator@UD.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801032A8 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@1@V-$tuple@$$V@1@@-$_Tree_temp_node@V-$allocat.c)
 *     ??$_Try_emplace@AEB_J$$V@?$map@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEB_J@Z @ 0x18011CC80 (--$_Try_emplace@AEB_J$$V@-$map@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@@V-$allocat.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009F330 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<48>(unsigned __int64 a1)
{
  if ( a1 > 0x555555555555555LL )
    std::_Throw_bad_array_new_length();
  return 48 * a1;
}
