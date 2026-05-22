/*
 * XREFs of ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x1800EA34C
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800E954C (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x1800C6878 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x1800C689C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_1800C689C.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800C6CF4 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800DC0EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E6D0C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E6EF8 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800E8050 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E83CC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@EV?$allocator@E@std@@@std@@@std@@QEAA@XZ @ 0x1800E84E0 (--1-$_Tidy_guard@V-$vector@EV-$allocator@E@std@@@std@@@std@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E9EDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800EAF80 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@H@Z @ 0x1800EAFB8 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@H@Z.c)
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@_J@Z @ 0x1800EB020 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@_J@Z.c)
 */

__int64 __fastcall HidLampArrayDevice::ValidateReportParsers(HidLampArrayDevice *this)
{
  __int64 v2; // rcx
  int v3; // edi
  unsigned __int8 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int8 v7; // bl
  unsigned __int64 v8; // r14
  char v9; // si
  unsigned __int8 *i; // rcx
  int v11; // r15d
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rbx
  _QWORD *v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rdx
  const char *v39; // rax
  unsigned __int8 *v40; // rcx
  __int64 v41; // r9
  _DWORD *v42; // r8
  _QWORD *v43; // rdx
  __int64 v44; // r9
  __int64 v45; // r9
  __int64 v46; // r9
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rbx
  _QWORD *v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rcx
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 v63; // rbx
  _QWORD *v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rcx
  __int64 v74; // rsi
  __int64 v75; // rdi
  __int64 v76; // rbx
  _QWORD *v77; // rax
  __int64 v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rcx
  __int64 v87; // rsi
  __int64 v88; // rdi
  __int64 v89; // rbx
  _QWORD *v90; // rax
  __int64 v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // rax
  _QWORD *v94; // rax
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // rcx
  char *v100; // [rsp+30h] [rbp-D8h]
  char *v101; // [rsp+30h] [rbp-D8h]
  unsigned __int8 v102; // [rsp+68h] [rbp-A0h]
  unsigned __int8 *v103; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int8 *v104; // [rsp+78h] [rbp-90h]
  char *v105; // [rsp+80h] [rbp-88h]
  __int64 v106; // [rsp+88h] [rbp-80h] BYREF
  char *v107[4]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v108[32]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v109[32]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v110[32]; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v111[4]; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v112[32]; // [rsp+130h] [rbp+28h] BYREF
  _BYTE v113[32]; // [rsp+150h] [rbp+48h] BYREF
  _BYTE v114[32]; // [rsp+170h] [rbp+68h] BYREF
  _BYTE v115[32]; // [rsp+190h] [rbp+88h] BYREF
  _BYTE v116[32]; // [rsp+1B0h] [rbp+A8h] BYREF
  _QWORD v117[4]; // [rsp+1D0h] [rbp+C8h] BYREF
  _BYTE v118[32]; // [rsp+1F0h] [rbp+E8h] BYREF
  _BYTE v119[32]; // [rsp+210h] [rbp+108h] BYREF
  _BYTE v120[32]; // [rsp+230h] [rbp+128h] BYREF
  _BYTE v121[32]; // [rsp+250h] [rbp+148h] BYREF
  _BYTE v122[32]; // [rsp+270h] [rbp+168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C0h] [rbp+1B8h]

  v2 = *((_QWORD *)this + 73);
  v3 = 0;
  if ( v2
    && *((_QWORD *)this + 74)
    && *((_QWORD *)this + 75)
    && *((_QWORD *)this + 76)
    && *((_QWORD *)this + 77)
    && *((_QWORD *)this + 78) )
  {
    v4 = (unsigned __int8 *)std::_Allocate<16,std::_Default_allocate_traits,0>(6uLL);
    v103 = v4;
    v105 = (char *)(v4 + 6);
    *(_DWORD *)v4 = 0;
    *((_WORD *)v4 + 2) = 0;
    v104 = v4 + 6;
    v106 = 0LL;
    std::_Tidy_guard<std::vector<unsigned char>>::~_Tidy_guard<std::vector<unsigned char>>(&v106);
    *v103 = *(_BYTE *)(*((_QWORD *)this + 73) + 16LL);
    v103[1] = *(_BYTE *)(*((_QWORD *)this + 74) + 16LL);
    v103[2] = *(_BYTE *)(*((_QWORD *)this + 75) + 16LL);
    v103[3] = *(_BYTE *)(*((_QWORD *)this + 76) + 16LL);
    v103[4] = *(_BYTE *)(*((_QWORD *)this + 77) + 16LL);
    v103[5] = *(_BYTE *)(*((_QWORD *)this + 78) + 16LL);
    std::_Sort_unchecked<unsigned char *,std::less<void>>(v103, v104, v104 - v103, 0);
    v7 = 0;
    v8 = 0LL;
    v9 = 1;
    for ( i = v103; ; v7 = i[v8++] )
    {
      v102 = v7;
      if ( v8 >= v104 - i )
        break;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::ReportUsage(
        (__int64)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl,
        1u,
        v5,
        v6);
      v11 = v7;
      i = v103;
      if ( v7 == v103[v8] )
      {
        v12 = std::to_string(v118, v7);
        v13 = std::string::string(v117, "One or more LampArray HID reports have duplicate IDs: ");
        std::operator+<char>((__int64)v107, (__int64)v13, v12);
        std::string::~string((__int64)v117);
        std::string::~string((__int64)v118);
        LampArrayTelemetry::GetInstance(v15, v14, v16);
        LampArrayTelemetry::LogLampArrayHidReportFailure(
          v17,
          (__int64)v107,
          2147942487LL,
          (__int64)this + 24,
          *((_WORD *)this + 269),
          *((_WORD *)this + 270),
          *((_WORD *)this + 271));
        std::string::~string((__int64)v107);
        i = v103;
        if ( v102 == v103[v8] )
        {
          LODWORD(v101) = v11;
          wil::details::in1diag3::Return_HrMsg(
            retaddr,
            (void *)0x390,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
            (const char *)0x80070057LL,
            (int)"Reports have duplicate Id:%d",
            v101);
LABEL_13:
          std::vector<unsigned char>::_Tidy(&v103);
          return 2147942487LL;
        }
      }
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl,
      1u,
      v5,
      v6);
    v18 = *(int *)(*((_QWORD *)this + 73) + 56LL);
    if ( v18 == *(_QWORD *)(*((_QWORD *)this + 75) + 56LL)
      && v18 == *(_QWORD *)(*((_QWORD *)this + 76) + 56LL)
      && (_DWORD)v18 == *(_DWORD *)(*((_QWORD *)this + 77) + 192LL)
      && v18 == *(_QWORD *)(*((_QWORD *)this + 78) + 128LL) )
    {
      v9 = 0;
    }
    if ( v9 )
    {
      v19 = std::to_string(v116, *(_QWORD *)(*((_QWORD *)this + 78) + 128LL));
      v20 = std::to_string(v115, *(unsigned int *)(*((_QWORD *)this + 77) + 192LL));
      v21 = std::to_string(v114, *(_QWORD *)(*((_QWORD *)this + 76) + 56LL));
      v22 = std::to_string(v113, *(_QWORD *)(*((_QWORD *)this + 75) + 56LL));
      v23 = std::to_string(v112, *(_QWORD *)(*((_QWORD *)this + 73) + 56LL));
      v24 = std::string::string(v111, "LampCount logical max is not the same across reports.");
      v25 = std::operator+<char>((__int64)v110, v24, " LampArrayAttributes:");
      v26 = (_QWORD *)std::operator+<char>((__int64)v109, v25, v23);
      v27 = std::operator+<char>((__int64)v108, v26, ", LampAttributesRequest:");
      v28 = (_QWORD *)std::operator+<char>((__int64)v122, v27, v22);
      v29 = std::operator+<char>((__int64)v121, v28, ", LampAttributesResponse:");
      v30 = (_QWORD *)std::operator+<char>((__int64)v120, v29, v21);
      v31 = std::operator+<char>((__int64)v119, v30, ", LampMultiUpdate:");
      v32 = (_QWORD *)std::operator+<char>((__int64)v117, v31, v20);
      v33 = std::operator+<char>((__int64)v118, v32, ", LampRangeUpdate:");
      std::operator+<char>((__int64)v107, v33, v19);
      std::string::~string((__int64)v118);
      std::string::~string((__int64)v117);
      std::string::~string((__int64)v119);
      std::string::~string((__int64)v120);
      std::string::~string((__int64)v121);
      std::string::~string((__int64)v122);
      std::string::~string((__int64)v108);
      std::string::~string((__int64)v109);
      std::string::~string((__int64)v110);
      std::string::~string((__int64)v111);
      std::string::~string((__int64)v112);
      std::string::~string((__int64)v113);
      std::string::~string((__int64)v114);
      std::string::~string((__int64)v115);
      std::string::~string((__int64)v116);
      LampArrayTelemetry::GetInstance(v35, v34, v36);
      LampArrayTelemetry::LogLampArrayHidReportFailure(
        v37,
        (__int64)v107,
        2147942487LL,
        (__int64)this + 24,
        *((_WORD *)this + 269),
        *((_WORD *)this + 270),
        *((_WORD *)this + 271));
      v38 = 944LL;
LABEL_21:
      v39 = (const char *)v107;
      if ( v107[3] > (char *)0xF )
        v39 = v107[0];
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)v38,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)0x80070057LL,
        (int)"%hs",
        v39);
      std::string::~string((__int64)v107);
      goto LABEL_13;
    }
    v40 = (unsigned __int8 *)*((_QWORD *)this + 76);
    v41 = v40[632];
    v42 = (_DWORD *)*((_QWORD *)this + 77);
    if ( (_DWORD)v41 != v42[56] || (v43 = (_QWORD *)*((_QWORD *)this + 78), v41 != v43[34]) )
    {
      v87 = std::to_string(v108, *(_QWORD *)(*((_QWORD *)this + 78) + 272LL));
      v88 = std::to_string(v109, *(unsigned int *)(*((_QWORD *)this + 77) + 224LL));
      v89 = std::to_string(v110, *(_QWORD *)(*((_QWORD *)this + 76) + 632LL));
      v90 = std::string::string(v111, "RedChannel logical max is not the same across reports.");
      v91 = std::operator+<char>((__int64)v112, v90, " LampAttributesResponse:");
      v92 = (_QWORD *)std::operator+<char>((__int64)v113, v91, v89);
      v93 = std::operator+<char>((__int64)v114, v92, ", LampMultiUpdate:");
      v94 = (_QWORD *)std::operator+<char>((__int64)v115, v93, v88);
      v95 = std::operator+<char>((__int64)v116, v94, ", LampRangeUpdate:");
      std::operator+<char>((__int64)v107, v95, v87);
      std::string::~string((__int64)v116);
      std::string::~string((__int64)v115);
      std::string::~string((__int64)v114);
      std::string::~string((__int64)v113);
      std::string::~string((__int64)v112);
      std::string::~string((__int64)v111);
      std::string::~string((__int64)v110);
      std::string::~string((__int64)v109);
      std::string::~string((__int64)v108);
      LampArrayTelemetry::GetInstance(v97, v96, v98);
      LampArrayTelemetry::LogLampArrayHidReportFailure(
        v99,
        (__int64)v107,
        2147942487LL,
        (__int64)this + 24,
        *((_WORD *)this + 269),
        *((_WORD *)this + 270),
        *((_WORD *)this + 271));
      v38 = 967LL;
      goto LABEL_21;
    }
    v44 = v40[704];
    if ( (_DWORD)v44 != v42[64] || v44 != v43[43] )
    {
      v74 = std::to_string(v108, v43[43]);
      v75 = std::to_string(v109, *(unsigned int *)(*((_QWORD *)this + 77) + 256LL));
      v76 = std::to_string(v110, *(_QWORD *)(*((_QWORD *)this + 76) + 704LL));
      v77 = std::string::string(v111, "GreenChannel logical max is not the same across reports.");
      v78 = std::operator+<char>((__int64)v112, v77, " LampAttributesResponse:");
      v79 = (_QWORD *)std::operator+<char>((__int64)v113, v78, v76);
      v80 = std::operator+<char>((__int64)v114, v79, ", LampMultiUpdate:");
      v81 = (_QWORD *)std::operator+<char>((__int64)v115, v80, v75);
      v82 = std::operator+<char>((__int64)v116, v81, ", LampRangeUpdate:");
      std::operator+<char>((__int64)v107, v82, v74);
      std::string::~string((__int64)v116);
      std::string::~string((__int64)v115);
      std::string::~string((__int64)v114);
      std::string::~string((__int64)v113);
      std::string::~string((__int64)v112);
      std::string::~string((__int64)v111);
      std::string::~string((__int64)v110);
      std::string::~string((__int64)v109);
      std::string::~string((__int64)v108);
      LampArrayTelemetry::GetInstance(v84, v83, v85);
      LampArrayTelemetry::LogLampArrayHidReportFailure(
        v86,
        (__int64)v107,
        2147942487LL,
        (__int64)this + 24,
        *((_WORD *)this + 269),
        *((_WORD *)this + 270),
        *((_WORD *)this + 271));
      v38 = 990LL;
      goto LABEL_21;
    }
    v45 = v40[776];
    if ( (_DWORD)v45 != v42[72] || v45 != v43[52] )
    {
      v61 = std::to_string(v108, v43[52]);
      v62 = std::to_string(v109, *(unsigned int *)(*((_QWORD *)this + 77) + 288LL));
      v63 = std::to_string(v110, *(_QWORD *)(*((_QWORD *)this + 76) + 776LL));
      v64 = std::string::string(v111, "BlueChannel logical max is not the same across reports.");
      v65 = std::operator+<char>((__int64)v112, v64, " LampAttributesResponse:");
      v66 = (_QWORD *)std::operator+<char>((__int64)v113, v65, v63);
      v67 = std::operator+<char>((__int64)v114, v66, ", LampMultiUpdate:");
      v68 = (_QWORD *)std::operator+<char>((__int64)v115, v67, v62);
      v69 = std::operator+<char>((__int64)v116, v68, ", LampRangeUpdate:");
      std::operator+<char>((__int64)v107, v69, v61);
      std::string::~string((__int64)v116);
      std::string::~string((__int64)v115);
      std::string::~string((__int64)v114);
      std::string::~string((__int64)v113);
      std::string::~string((__int64)v112);
      std::string::~string((__int64)v111);
      std::string::~string((__int64)v110);
      std::string::~string((__int64)v109);
      std::string::~string((__int64)v108);
      LampArrayTelemetry::GetInstance(v71, v70, v72);
      LampArrayTelemetry::LogLampArrayHidReportFailure(
        v73,
        (__int64)v107,
        2147942487LL,
        (__int64)this + 24,
        *((_WORD *)this + 269),
        *((_WORD *)this + 270),
        *((_WORD *)this + 271));
      v38 = 1013LL;
      goto LABEL_21;
    }
    v46 = v40[848];
    if ( (_DWORD)v46 != v42[80] || v46 != v43[61] )
    {
      v48 = std::to_string(v108, v43[61]);
      v49 = std::to_string(v109, *(unsigned int *)(*((_QWORD *)this + 77) + 320LL));
      v50 = std::to_string(v110, *(_QWORD *)(*((_QWORD *)this + 76) + 848LL));
      v51 = std::string::string(v111, "GainChannel logical max is not the same across reports.");
      v52 = std::operator+<char>((__int64)v112, v51, " LampAttributesResponse:");
      v53 = (_QWORD *)std::operator+<char>((__int64)v113, v52, v50);
      v54 = std::operator+<char>((__int64)v114, v53, ", LampMultiUpdate:");
      v55 = (_QWORD *)std::operator+<char>((__int64)v115, v54, v49);
      v56 = std::operator+<char>((__int64)v116, v55, ", LampRangeUpdate:");
      std::operator+<char>((__int64)v107, v56, v48);
      std::string::~string((__int64)v116);
      std::string::~string((__int64)v115);
      std::string::~string((__int64)v114);
      std::string::~string((__int64)v113);
      std::string::~string((__int64)v112);
      std::string::~string((__int64)v111);
      std::string::~string((__int64)v110);
      std::string::~string((__int64)v109);
      std::string::~string((__int64)v108);
      LampArrayTelemetry::GetInstance(v58, v57, v59);
      LampArrayTelemetry::LogLampArrayHidReportFailure(
        v60,
        (__int64)v107,
        2147942487LL,
        (__int64)this + 24,
        *((_WORD *)this + 269),
        *((_WORD *)this + 270),
        *((_WORD *)this + 271));
      v38 = 1036LL;
      goto LABEL_21;
    }
    std::vector<unsigned char>::_Tidy(&v103);
    return 0LL;
  }
  else
  {
    LOBYTE(v3) = v2 == 0;
    LODWORD(v100) = v3;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x370,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x80070057LL,
      (int)"One or more ReportParsers are null.  LampArrayAttributes:%d, LampArrayControl:%d, LampAttributesRequest:%d, L"
           "ampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d",
      v100,
      *((_QWORD *)this + 74) == 0LL,
      *((_QWORD *)this + 75) == 0LL,
      *((_QWORD *)this + 76) == 0LL,
      *((_QWORD *)this + 77) == 0LL,
      *((_QWORD *)this + 78) == 0LL);
    return 2147942487LL;
  }
}
