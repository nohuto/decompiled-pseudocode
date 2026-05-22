/*
 * XREFs of ??$_Get_size_of_n@$0EI@@std@@YA_K_K@Z @ 0x18007067C
 * Callers:
 *     ??$_Emplace_reallocate@AEBVHidChannelValueInfo@@@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@AEAAPEAVHidChannelValueInfo@@QEAV2@AEBV2@@Z @ 0x1800704D8 (--$_Emplace_reallocate@AEBVHidChannelValueInfo@@@-$vector@VHidChannelValueInfo@@V-$allocator@VHi.c)
 *     ??0LampArrayRawInputProvider@@AEAA@XZ @ 0x1800810BC (--0LampArrayRawInputProvider@@AEAA@XZ.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIAmbientDeviceMappingChangedEventArgs@Internal@Lights@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIAmbientDeviceMappingChangedEventArgs@Internal@Lights@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIAmbientDeviceMappingChangedEventArgs@Internal@Lights@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800DFAF8 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801111E4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDI.c)
 *     ??0?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@1@@Z @ 0x180111508 (--0-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@_K.c)
 *     ??$?0AEBUDockInputIdentity@@AEAUtagRECT@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@1@AEBUDockInputIdentity@@AEAUtagRECT@@@Z @ 0x18017CCB4 (--$-0AEBUDockInputIdentity@@AEAUtagRECT@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$.c)
 *     ??0GestureState@MagnifierRecognizer@@QEAA@XZ @ 0x1801A5B2C (--0GestureState@MagnifierRecognizer@@QEAA@XZ.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAK@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801A6974 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAK@1@V-$tuple@$$V@1@@-$_Tree_temp_node@V-$alloc.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009AC3C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<72>(unsigned __int64 a1)
{
  if ( a1 > 0x38E38E38E38E38ELL )
    std::_Throw_bad_array_new_length();
  return 72 * a1;
}
