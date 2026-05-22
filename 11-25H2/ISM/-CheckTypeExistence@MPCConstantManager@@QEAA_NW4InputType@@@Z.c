/*
 * XREFs of ?CheckTypeExistence@MPCConstantManager@@QEAA_NW4InputType@@@Z @ 0x18000F7D0
 * Callers:
 *     ?CheckModifiedConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18000F5D8 (-CheckModifiedConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V-$basic_string_view@GU-$.c)
 *     ?CheckConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18000F64C (-CheckConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V-$basic_string_view@GU-$char_tra.c)
 *     ?AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@Z @ 0x1800673A0 (-AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV-$map@V-$basic_.c)
 *     ?AddInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800B585C (-AddInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?GetConstantsForInputType@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEAVBamoAsyncResult_string_Proxy@@@Z @ 0x1800B62E0 (-GetConstantsForInputType@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4Input.c)
 * Callees:
 *     ?count@?$_Tree@V?$_Tmap_traits@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QEBA_KAEBW4InputType@@@Z @ 0x18000F808 (-count@-$_Tree@V-$_Tmap_traits@W4InputType@@V-$map@V-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 */

bool __fastcall MPCConstantManager::CheckTypeExistence(__int64 a1, int a2)
{
  char v2; // r10
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v2 = 0;
  if ( *(_QWORD *)(a1 + 64) )
    return std::_Tree<std::_Tmap_traits<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>,std::less<enum InputType>,std::allocator<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>,0>>::count(
             a1 + 56,
             &v4) != 0;
  return v2;
}
