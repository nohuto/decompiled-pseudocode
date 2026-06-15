/*
 * XREFs of ?AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z @ 0x1801507AC
 * Callers:
 *     _lambda_1adb194f2307f3e7d35605d4da2bab89_::operator() @ 0x18014FE2C (_lambda_1adb194f2307f3e7d35605d4da2bab89_--operator().c)
 *     ?InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ @ 0x180150EE0 (-InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ.c)
 *     ?UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ @ 0x18015F2F0 (-UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 *     ??$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA?AV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@_K@Z @ 0x180056F64 (--$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA-AV-$unique_p.c)
 *     ?InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180057088 (-InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@.c)
 *     ??$emplace@AEAPEBGV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Ucase_insensitive_hash@@Ucase_insensitive_equality@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@_N@1@AEAPEBG$$QEAV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@Z @ 0x18006D788 (--$emplace@AEAPEBGV-$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U-$default_d.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::AddArrayToLicenseMap(AtmosCheck *this, const unsigned __int16 *a2)
{
  const char *v3; // r9
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v4; // rcx
  __int64 result; // rax
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v6; // rcx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  const unsigned __int16 *v9; // [rsp+48h] [rbp+10h] BYREF
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v10; // [rsp+50h] [rbp+18h] BYREF
  char *v11; // [rsp+58h] [rbp+20h]

  v9 = a2;
  try
  {
    wil::make_unique_nothrow<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>(&v10);
    if ( v10 )
    {
      AtmosCheck::InitializeEndpointSpecificSpatialTechInfo(v10);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
      v11 = (char *)this + 56;
      std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,case_insensitive_hash,case_insensitive_equality>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::emplace<unsigned short const * &,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>(
        (float *)this + 194,
        (__int64)v7,
        (__int64)&v9,
        (__int64)&v10);
      if ( this != (AtmosCheck *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
      v6 = v10;
      v10 = 0LL;
      if ( v6 )
        operator delete(v6);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C4,
        (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)0x8007000ELL);
      v4 = v10;
      v10 = 0LL;
      if ( v4 )
        operator delete(v4);
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3D1,
                           (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
                           v3);
  }
  return result;
}
