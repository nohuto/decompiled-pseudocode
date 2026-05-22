/*
 * XREFs of ?GetConstantNamesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4InputType@@@Z @ 0x1800B6060
 * Callers:
 *     ?GetConstantsForInputType@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEAVBamoAsyncResult_string_Proxy@@@Z @ 0x1800B62E0 (-GetConstantsForInputType@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4Input.c)
 * Callees:
 *     ??$_Try_emplace@AEBW4InputType@@$$V@?$map@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@PEAX@std@@_N@1@AEBW4InputType@@@Z @ 0x18000F6A8 (--$_Try_emplace@AEBW4InputType@@$$V@-$map@W4InputType@@V-$map@V-$basic_string@GU-$char_traits@G@.c)
 *     ?count@?$_Tree@V?$_Tmap_traits@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QEBA_KAEBW4InputType@@@Z @ 0x18000F808 (-count@-$_Tree@V-$_Tmap_traits@W4InputType@@V-$map@V-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180032CB0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180067E10 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18007FAB0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800A8F60 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBGAEBV10@@Z @ 0x1800B4D2C (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800B5694 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCConstantManager::GetConstantNamesString(__int64 a1, __int64 a2, int a3)
{
  __int64 **v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  unsigned __int64 v12; // r8
  _DWORD v14[4]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15[3]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v16[32]; // [rsp+48h] [rbp-28h] BYREF

  v15[2] = a2;
  v14[0] = a3;
  std::wstring::wstring(a2, &WindowName);
  v14[2] = 1;
  v5 = (__int64 **)(a1 + 56);
  if ( std::_Tree<std::_Tmap_traits<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>,std::less<enum InputType>,std::allocator<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>,0>>::count(
         v5,
         v14)
    && *(_QWORD *)(*(_QWORD *)std::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::_Try_emplace<enum InputType const &,>(
                                v5,
                                (__int64)v15,
                                v14)
                 + 48LL) )
  {
    v6 = **(_QWORD **)(*(_QWORD *)std::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::_Try_emplace<enum InputType const &,>(
                                    v5,
                                    (__int64)v15,
                                    v14)
                     + 40LL);
    v15[0] = v6;
    while ( !*(_BYTE *)(v6 + 25) )
    {
      if ( *(_QWORD *)(a2 + 16) )
      {
        v11 = std::operator+<unsigned short>(v16, v7, (_QWORD *)(v6 + 32));
        v12 = v11[2];
        if ( v11[3] > 7uLL )
          v11 = (_QWORD *)*v11;
        std::wstring::append((const void **)a2, v11, v12);
        std::wstring::_Tidy_deallocate((__int64)v16);
      }
      else
      {
        std::wstring::operator=((void *)a2, (void *)(v6 + 32));
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(
        v15,
        v8,
        v9,
        v10);
      v6 = v15[0];
    }
  }
  return a2;
}
