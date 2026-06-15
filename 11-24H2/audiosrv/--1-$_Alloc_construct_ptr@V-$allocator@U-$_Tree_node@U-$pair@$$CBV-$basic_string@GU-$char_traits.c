/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800D24F0
 * Callers:
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800D2544 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@st.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800F3DA0 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$cha_ea_1800F3DA0.c)
 *     ??1?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800F3DD0 (--1-$_Tree_temp_node_alloc@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_trait.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18014BB88 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@s.c)
 *     _std::_Tree_temp_node_alloc_std::allocator_std::_Tree_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__enum_AEC_LOOPBACK_SELECTION_MODE__void_______::_Tree_temp_node_alloc_std::allocator_std::_Tree_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__enum_AEC_LOOPBACK_SELECTION_MODE__void________::_1_::dtor$0 @ 0x18016E2E2 (_std--_Tree_temp_node_alloc_std--allocator_std--_Tree_node_std--pair_std--basic_string_unsigned_.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__ENDPOINT_REF_DATA__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__ENDPOINT_REF_DATA__void________std::piecewise_construct_t_const_&_std::tuple_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____&&__std::tuple_____::_1_::dtor$1 @ 0x18017066F (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_std--basic_string_unsigned_short_.c)
 *     _std::map__GUID_HmdInfo_std::less__GUID__std::allocator_std::pair__GUID_const__HmdInfo_____::_Try_emplace__GUID_const_&__::_1_::dtor$2 @ 0x18017225D (_std--map__GUID_HmdInfo_std--less__GUID__std--allocator_std--pair__GUID_const__HmdInfo_____--_Tr.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>,void *>>>(
        __int64 a1)
{
  char *v1; // rcx

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x48);
}
