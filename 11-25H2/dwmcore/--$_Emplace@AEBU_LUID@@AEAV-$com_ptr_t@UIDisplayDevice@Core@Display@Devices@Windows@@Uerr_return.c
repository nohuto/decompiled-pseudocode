/*
 * XREFs of ??$_Emplace@AEBU_LUID@@AEAV?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@U_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@ULUIDComparator@CDDisplayManager@@V?$allocator@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBU_LUID@@AEAV?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1802C9CD0
 * Callers:
 *     ?EnsureDevice@CDDisplayManager@@AEAAJAEBU_LUID@@PEAUIDisplayAdapter@Core@Display@Devices@Windows@@PEAPEAUIDisplayDevice@4567@@Z @ 0x180211D18 (-EnsureDevice@CDDisplayManager@@AEAAJAEBU_LUID@@PEAUIDisplayAdapter@Core@Display@Devices@Windows.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180197D2C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCSceneMeshRendererComponent@@V-$com_.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1801B120C (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KPEAVCCursorState@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCCursorState@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KPEAVCCursorState@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x180211E08 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KPEAVCCursorState@@U-$less@_K@std@@V-$allocator.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1802591E0 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18025B55C (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_LUID@@V-$com_ptr_t@UIDisplayDevice.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<_LUID,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>,CDDisplayManager::LUIDComparator,std::allocator<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>>,0>>::_Emplace<_LUID const &,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy> &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4)
{
  _QWORD *lower; // rax
  _QWORD *v9; // r8
  __int128 v10; // xmm6
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]

  lower = std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::_Find_lower_bound<unsigned __int64>(
            a1,
            &v14,
            a3);
  v10 = *(_OWORD *)lower;
  v15 = lower[2];
  if ( *(_BYTE *)(v15 + 25) || *v9 < *(_QWORD *)(v15 + 32) )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v11 = *a1;
    *(_QWORD *)&v14 = a1;
    v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
    *(_QWORD *)(v12 + 32) = *a3;
    wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
      (__int64 *)(v12 + 40),
      a4);
    *((_QWORD *)&v14 + 1) = 0LL;
    *(_QWORD *)v12 = v11;
    *(_QWORD *)(v12 + 8) = v11;
    *(_QWORD *)(v12 + 16) = v11;
    *(_WORD *)(v12 + 24) = 0;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>,void *>>>((__int64)&v14);
    v14 = v10;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>>::_Insert_node(
                      a1,
                      (__int64)&v14,
                      v12);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v15;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
