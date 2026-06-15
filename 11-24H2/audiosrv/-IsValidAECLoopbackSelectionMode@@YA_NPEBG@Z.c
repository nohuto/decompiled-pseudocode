/*
 * XREFs of ?IsValidAECLoopbackSelectionMode@@YA_NPEBG@Z @ 0x1800F7A10
 * Callers:
 *     ?GetCurrentLoopbackEndpointIdInternal@@YAJPEAGPEAPEAGPEA_N@Z @ 0x1800F661C (-GetCurrentLoopbackEndpointIdInternal@@YAJPEAGPEAPEAGPEA_N@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18004DC2C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004E1FC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18006CE68 (--$_Find_lower_bound@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_ea_18006CE68.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??$_Lower_bound_duplicate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800D1F1C (--$_Lower_bound_duplicate@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree.c)
 */

char __fastcall IsValidAECLoopbackSelectionMode(const unsigned __int16 *a1, __int64 a2)
{
  char v2; // bl
  char v3; // di
  __int64 v4; // rcx
  __int64 v5; // rcx
  char v6; // al
  __int64 v7; // rcx
  _BYTE v9[16]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v10; // [rsp+38h] [rbp-40h]
  _BYTE v11[32]; // [rsp+40h] [rbp-38h] BYREF

  v2 = 0;
  v3 = 0;
  if ( a1 )
  {
    std::wstring::wstring((__int64)v11, (__int64)a1);
    v3 = 1;
    std::_Tree<std::_Tmap_traits<std::wstring,enum AEC_LOOPBACK_SELECTION_MODE,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>>,0>>::_Find_lower_bound<std::wstring>(
      v4,
      (__int64)v9,
      (__int64)v11);
    v6 = std::_Tree<std::_Tmap_traits<std::wstring,enum AEC_LOOPBACK_SELECTION_MODE,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>>,0>>::_Lower_bound_duplicate<std::wstring>(
           v5,
           v10,
           (__int64)v11);
    v7 = qword_1801DB6B8;
    if ( v6 )
      v7 = v10;
    if ( v7 != qword_1801DB6B8 )
      v2 = 1;
  }
  if ( (v3 & 1) != 0 )
    std::wstring::_Tidy_deallocate((__int64)v11, a2);
  return v2;
}
