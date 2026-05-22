/*
 * XREFs of ??0MPCConstantManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x180092FE8
 * Callers:
 *     std::call_once__lambda_c8397eccb247ca477275d95d0a9bda1a___ @ 0x18007CD00 (std--call_once__lambda_c8397eccb247ca477275d95d0a9bda1a___.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18000E01C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ??0?$map@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@@std@@QEAA@XZ @ 0x1800B5548 (--0-$map@W4InputType@@V-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$va.c)
 */

// Hidden C++ exception states: #wind=2
MPCConstantManager *__fastcall MPCConstantManager::MPCConstantManager(
        MPCConstantManager *this,
        struct MPCManagerConnection *a2)
{
  *(_QWORD *)this = &BamoMPCConstantManagerClientPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoMPCConstantManagerClientPrincipal::`vftable'{for `IMPCConstantManagerClientPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((MPCConstantManager *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::`vftable';
  *(_QWORD *)this = &MPCConstantManager::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoMPCConstantManagerClientPrincipal::`vftable'{for `IMPCConstantManagerClientPrincipal'};
  std::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>((char *)this + 56);
  std::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>((char *)this + 72);
  return this;
}
