/*
 * XREFs of ??1?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@QEAA@XZ @ 0x180046474
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180045EE0 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@GU-$char_traits_ea_180045EE0.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180046418 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@_ea_180046418.c)
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x180046610 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     _CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::dtor$4 @ 0x18004DEF7 (_CEndpointVolumeStateManager--AddEndpointVolumeReference_--_1_--dtor$4.c)
 * Callees:
 *     ??1?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@std@@QEAA@XZ @ 0x18004649C (--1-$unique_ptr@VCEndpointVolumeState@@U-$default_delete@VCEndpointVolumeState@@@std@@@std@@QEAA.c)
 */

__int64 __fastcall std::pair<std::wstring,std::unique_ptr<CEndpointVolumeState>>::~pair<std::wstring,std::unique_ptr<CEndpointVolumeState>>(
        __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  std::unique_ptr<CEndpointVolumeState>::~unique_ptr<CEndpointVolumeState>(a1 + 32);
  return std::wstring::~wstring(a1, v2, v3, v4);
}
