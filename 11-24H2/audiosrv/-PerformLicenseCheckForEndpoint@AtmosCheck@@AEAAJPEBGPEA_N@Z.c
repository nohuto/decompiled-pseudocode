/*
 * XREFs of ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18015172C
 * Callers:
 *     _lambda_1adb194f2307f3e7d35605d4da2bab89_::operator() @ 0x18014FE2C (_lambda_1adb194f2307f3e7d35605d4da2bab89_--operator().c)
 *     ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x1801515D4 (-PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@Z @ 0x18000D62C (-UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV-$unique_ptr@$$BY0A@UEndpointSpecificSpatialTe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 *     ??$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA?AV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@_K@Z @ 0x180056F64 (--$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA-AV-$unique_p.c)
 *     ?InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180057088 (-InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@.c)
 *     ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x180057108 (-PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z.c)
 *     ??$?0$00X@?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z @ 0x18009FB98 (--$-0$00X@-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z.c)
 *     ?BeginAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x18009FDFC (-BeginAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::scope_exit__lambda_f7a716bfe224096f553bb41568304cf0___ @ 0x18014F62C (wil--scope_exit__lambda_f7a716bfe224096f553bb41568304cf0___.c)
 *     wil::details::lambda_call__lambda_86871cef99ccda234418e908d473a535___::_lambda_call__lambda_86871cef99ccda234418e908d473a535___ @ 0x18014FB40 (wil--details--lambda_call__lambda_86871cef99ccda234418e908d473a535___--_lambda_call__lambda_8687.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::PerformLicenseCheckForEndpoint(AtmosCheck *this, unsigned __int16 *a2, bool *a3)
{
  int v6; // eax
  _QWORD *v7; // rax
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v8; // rbx
  unsigned int v9; // edi
  int updated; // eax
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v14; // [rsp+70h] [rbp+18h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0;
  v6 = AtmosCheck::BeginAppSvcCall(this);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1548LL,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)v6);
  v7 = wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>(
         &v15,
         (__int64)this);
  wil::scope_exit__lambda_f7a716bfe224096f553bb41568304cf0___((__int64)v12, v7);
  wil::make_unique_nothrow<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>(&v14);
  v8 = v14;
  if ( v14 )
  {
    AtmosCheck::InitializeEndpointSpecificSpatialTechInfo(v14);
    AtmosCheck::PerformLicenseCheckHelper(this, a2, 0, v8, a3);
    AtmosCheck::PerformLicenseCheckHelper(this, a2, 1, v8, a3);
    AtmosCheck::PerformLicenseCheckHelper(this, a2, 2, v8, a3);
    AtmosCheck::PerformLicenseCheckHelper(this, a2, 3, v8, a3);
    AtmosCheck::PerformLicenseCheckHelper(this, a2, 4, v8, a3);
    AtmosCheck::PerformLicenseCheckHelper(this, a2, 5, v8, a3);
    AtmosCheck::PerformLicenseCheckHelper(this, a2, 6, v8, a3);
    updated = AtmosCheck::UpdateEndpointUnderLock(this, a2, &v14);
    v9 = updated;
    if ( updated >= 0 )
    {
      operator delete(v8);
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x623,
        (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)updated);
      operator delete(v8);
    }
  }
  else
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x614,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)0x8007000ELL);
  }
  wil::details::lambda_call__lambda_86871cef99ccda234418e908d473a535___::_lambda_call__lambda_86871cef99ccda234418e908d473a535___((__int64)v12);
  return v9;
}
