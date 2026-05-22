/*
 * XREFs of ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007B2CC
 * Callers:
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF0B0 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x1801BCE94 (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 * Callees:
 *     ?CheckModifiedConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18000FD38 (-CheckModifiedConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V-$basic_string_view@GU-$.c)
 *     ?CheckConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18000FDAC (-CheckConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V-$basic_string_view@GU-$char_tra.c)
 *     ??$_Try_emplace@AEBW4InputType@@$$V@?$map@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@PEAX@std@@_N@1@AEBW4InputType@@@Z @ 0x18000FE08 (--$_Try_emplace@AEBW4InputType@@$$V@-$map@W4InputType@@V-$map@V-$basic_string@GU-$char_traits@G@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$find@V?$basic_string_view@GU?$char_traits@G@std@@@std@@U?$less@X@2@$0A@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@Z @ 0x1800952D8 (--$find@V-$basic_string_view@GU-$char_traits@G@std@@@std@@U-$less@X@2@$0A@@-$_Tree@V-$_Tmap_trai.c)
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x18009B814 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 */

float __fastcall MPCConstantManager::GetStaticConstant<float>(__int64 a1, int a2, __int128 *a3)
{
  const char *v5; // r9
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int128 v12; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  int v14; // [rsp+48h] [rbp+18h] BYREF
  char v15; // [rsp+50h] [rbp+20h] BYREF

  v14 = a2;
  v12 = *a3;
  if ( !MPCConstantManager::CheckConstantExistence(a1, a2, (__int64)&v12) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x12,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\inc\\MPCConstantManager.inl",
      v5);
  v12 = *a3;
  if ( MPCConstantManager::CheckModifiedConstantExistence(a1, v14, (__int64)&v12) )
  {
    v6 = (_QWORD *)std::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::_Try_emplace<enum InputType const &,>(
                     (_QWORD *)(a1 + 72),
                     (__int64)&v12,
                     &v14);
    v7 = std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<void>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::find<std::basic_string_view<unsigned short>,std::less<void>,0>(
           *v6 + 40LL,
           &v15,
           a3);
    v8 = *(_QWORD *)v7;
    if ( *(_BYTE *)(*(_QWORD *)v7 + 68LL) != 2 )
      std::_Throw_bad_variant_access();
  }
  else
  {
    v9 = (_QWORD *)std::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::_Try_emplace<enum InputType const &,>(
                     (_QWORD *)(a1 + 56),
                     (__int64)&v12,
                     &v14);
    v10 = std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<void>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::find<std::basic_string_view<unsigned short>,std::less<void>,0>(
            *v9 + 40LL,
            &v15,
            a3);
    v8 = *(_QWORD *)v10;
    if ( *(_BYTE *)(*(_QWORD *)v10 + 68LL) != 2 )
      std::_Throw_bad_variant_access();
  }
  return *(float *)(v8 + 64);
}
