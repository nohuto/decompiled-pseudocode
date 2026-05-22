/*
 * XREFs of ?SetAllConstantsForInputTypeToDefault@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEAVBamoAsyncHRESULTProxy@@@Z @ 0x1800B6E30
 * Callers:
 *     <none>
 * Callees:
 *     ?count@?$_Tree@V?$_Tmap_traits@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QEBA_KAEBW4InputType@@@Z @ 0x18000F808 (-count@-$_Tree@V-$_Tmap_traits@W4InputType@@V-$map@V-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBW4InputType@@@Z @ 0x1800B7B14 (-erase@-$_Tree@V-$_Tmap_traits@W4InputType@@V-$map@V-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 */

__int64 __fastcall MPCConstantManager::SetAllConstantsForInputTypeToDefault(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  bool v4; // zf
  __int64 v6; // r10
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a1 + 80) == 0LL;
  v8 = a3;
  v9 = a3;
  if ( !v4
    && std::_Tree<std::_Tmap_traits<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>,std::less<enum InputType>,std::allocator<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>,0>>::count(
         (__int64 **)(a1 + 72),
         &v9) )
  {
    std::_Tree<std::_Tmap_traits<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>,std::less<enum InputType>,std::allocator<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>,0>>::erase(
      v6,
      &v8);
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a4 + 8) + 24LL))(a4 + 8, 0LL);
}
