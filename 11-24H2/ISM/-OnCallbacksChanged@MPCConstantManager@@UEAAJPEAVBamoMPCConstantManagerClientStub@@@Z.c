/*
 * XREFs of ?OnCallbacksChanged@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@@Z @ 0x1800B4420
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Try_emplace@AEBW4InputType@@$$V@?$map@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@PEAX@std@@_N@1@AEBW4InputType@@@Z @ 0x18000FE08 (--$_Try_emplace@AEBW4InputType@@$$V@-$map@W4InputType@@V-$map@V-$basic_string@GU-$char_traits@G@.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18004DF08 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Try_emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800B2F80 (--$_Try_emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@V-$ba.c)
 *     ?GetPROPVARIANTFromConstantValue@MPCConstantManager@@AEAA?AV?$optional@UtagPROPVARIANT@@@std@@V?$variant@K_NM@3@@Z @ 0x1800B4334 (-GetPROPVARIANTFromConstantValue@MPCConstantManager@@AEAA-AV-$optional@UtagPROPVARIANT@@@std@@V-.c)
 *     StubCallback @ 0x1800B5220 (StubCallback.c)
 *     ?value@?$optional@UtagPROPVARIANT@@@std@@QEGAAAEAUtagPROPVARIANT@@XZ @ 0x1800B5ACC (-value@-$optional@UtagPROPVARIANT@@@std@@QEGAAAEAUtagPROPVARIANT@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCConstantManager::OnCallbacksChanged(
        MPCConstantManager *this,
        struct BamoMPCConstantManagerClientStub *a2)
{
  int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  int *v9; // rsi
  __int64 v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  const char *v15; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // edx
  __int128 v20; // xmm0
  __int64 v21; // xmm1_8
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int128 v26; // [rsp+30h] [rbp-79h]
  __int128 v27; // [rsp+40h] [rbp-69h] BYREF
  __int64 v28; // [rsp+50h] [rbp-59h]
  __int128 v29; // [rsp+60h] [rbp-49h] BYREF
  __int64 v30; // [rsp+70h] [rbp-39h]
  _BYTE v31[32]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v32[32]; // [rsp+A0h] [rbp-9h] BYREF
  _BYTE v33[16]; // [rsp+C0h] [rbp+17h] BYREF
  _BYTE v34[48]; // [rsp+D0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  __int64 v36; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v37; // [rsp+120h] [rbp+77h] BYREF
  __int64 v38; // [rsp+128h] [rbp+7Fh]

  v2 = (int)a2;
  if ( a2 && (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 24LL))((char *)a2 + 8) )
  {
    v8 = **((_QWORD **)this + 9);
    v37 = v8;
    while ( !*(_BYTE *)(v8 + 25) )
    {
      v9 = (int *)(v8 + 32);
      v10 = **(_QWORD **)(v8 + 40);
      v36 = v10;
      while ( !*(_BYTE *)(v10 + 25) )
      {
        v11 = (_QWORD *)(v10 + 32);
        MPCConstantManager::GetPROPVARIANTFromConstantValue(v5, (__int64)v32, *(_QWORD *)(v10 + 64));
        v12 = std::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::_Try_emplace<enum InputType const &,>(
                (_QWORD *)this + 7,
                (__int64)v33,
                v9);
        v13 = std::map<std::wstring,std::variant<unsigned long,bool,float>>::_Try_emplace<std::wstring const &,>(
                (__int64 *)(*(_QWORD *)v12 + 40LL),
                (__int64)v34,
                v11);
        MPCConstantManager::GetPROPVARIANTFromConstantValue(v14, (__int64)v31, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
        if ( !v32[24] || !v31[24] )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x16C,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
            v15);
        v17 = std::optional<tagPROPVARIANT>::value(v31);
        v26 = *(_OWORD *)v17;
        v38 = *(_QWORD *)(v17 + 16);
        v18 = std::optional<tagPROPVARIANT>::value(v32);
        if ( v11[3] > 7uLL )
          v11 = (_QWORD *)*v11;
        v19 = *v9;
        v27 = v26;
        v20 = *(_OWORD *)v18;
        v28 = v38;
        v21 = *(_QWORD *)(v18 + 16);
        v29 = v20;
        v30 = v21;
        StubCallback(v2, v19, (int)v11, (int)&v29, (__int64)&v27);
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
          &v36,
          v22,
          v23,
          v24);
        v10 = v36;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
        &v37,
        v4,
        v6,
        v7);
      v8 = v37;
    }
  }
  return 0LL;
}
