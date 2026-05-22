/*
 * XREFs of ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x1800EB5A4
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800EA834 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x1800C4A38 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x1800C4A5C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_1800C4A5C.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800C4EB4 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800DF2DC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E817C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E8368 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800E94C0 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E983C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x1800E9878 (--0-$vector@EV-$allocator@E@std@@@std@@QEAA@_KAEBV-$allocator@E@1@@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800EC180 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@H@Z @ 0x1800EC1B8 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@H@Z.c)
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@_J@Z @ 0x1800EC220 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@_J@Z.c)
 */

__int64 __fastcall HidLampArrayDevice::ValidateReportParsers(HidLampArrayDevice *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  int v5; // edi
  char v6; // r14
  char v7; // al
  unsigned __int8 v8; // r15
  unsigned __int64 v9; // rsi
  unsigned __int8 *v10; // rdx
  unsigned __int8 *v11; // rcx
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
  unsigned __int8 *v39; // rcx
  __int64 v40; // r9
  _DWORD *v41; // r8
  _QWORD *v42; // rdx
  __int64 v43; // r9
  __int64 v44; // r9
  __int64 v45; // r9
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rbx
  _QWORD *v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // rbx
  _QWORD *v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rcx
  __int64 v73; // rsi
  __int64 v74; // rdi
  __int64 v75; // rbx
  _QWORD *v76; // rax
  __int64 v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // rcx
  __int64 v86; // rsi
  __int64 v87; // rdi
  __int64 v88; // rbx
  _QWORD *v89; // rax
  __int64 v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rax
  _QWORD *v93; // rax
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // rcx
  const char *v99; // rax
  char *v100; // [rsp+30h] [rbp-D8h]
  char *v101; // [rsp+30h] [rbp-D8h]
  unsigned __int8 *v102; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int8 *v103; // [rsp+70h] [rbp-98h]
  char *v104[4]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v105[32]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v106[32]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v107[32]; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD v108[4]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v109[32]; // [rsp+120h] [rbp+18h] BYREF
  _BYTE v110[32]; // [rsp+140h] [rbp+38h] BYREF
  _BYTE v111[32]; // [rsp+160h] [rbp+58h] BYREF
  _BYTE v112[32]; // [rsp+180h] [rbp+78h] BYREF
  _BYTE v113[32]; // [rsp+1A0h] [rbp+98h] BYREF
  _QWORD v114[4]; // [rsp+1C0h] [rbp+B8h] BYREF
  _BYTE v115[32]; // [rsp+1E0h] [rbp+D8h] BYREF
  _BYTE v116[32]; // [rsp+200h] [rbp+F8h] BYREF
  _BYTE v117[32]; // [rsp+220h] [rbp+118h] BYREF
  _BYTE v118[32]; // [rsp+240h] [rbp+138h] BYREF
  _BYTE v119[32]; // [rsp+260h] [rbp+158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B0h] [rbp+1A8h]

  v4 = *((_QWORD *)this + 73);
  v5 = 0;
  v6 = 1;
  if ( !v4
    || !*((_QWORD *)this + 74)
    || !*((_QWORD *)this + 75)
    || !*((_QWORD *)this + 76)
    || !*((_QWORD *)this + 77)
    || (v7 = 0, !*((_QWORD *)this + 78)) )
  {
    v7 = 1;
  }
  if ( v7 )
  {
    LOBYTE(v5) = v4 == 0;
    LODWORD(v100) = v5;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x354,
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
  }
  else
  {
    std::vector<unsigned char>::vector<unsigned char>(&v102, a2, a3);
    *v102 = *(_BYTE *)(*((_QWORD *)this + 73) + 16LL);
    v102[1] = *(_BYTE *)(*((_QWORD *)this + 74) + 16LL);
    v102[2] = *(_BYTE *)(*((_QWORD *)this + 75) + 16LL);
    v102[3] = *(_BYTE *)(*((_QWORD *)this + 76) + 16LL);
    v102[4] = *(_BYTE *)(*((_QWORD *)this + 77) + 16LL);
    v102[5] = *(_BYTE *)(*((_QWORD *)this + 78) + 16LL);
    std::_Sort_unchecked<unsigned char *,std::less<void>>(v102, v103, v103 - v102, 0);
    v8 = 0;
    v9 = 0LL;
    v10 = v103;
    v11 = v102;
    if ( v103 == v102 )
    {
LABEL_14:
      v18 = *(int *)(*((_QWORD *)this + 73) + 56LL);
      if ( v18 == *(_QWORD *)(*((_QWORD *)this + 75) + 56LL)
        && v18 == *(_QWORD *)(*((_QWORD *)this + 76) + 56LL)
        && (_DWORD)v18 == *(_DWORD *)(*((_QWORD *)this + 77) + 192LL)
        && v18 == *(_QWORD *)(*((_QWORD *)this + 78) + 128LL) )
      {
        v6 = 0;
      }
      if ( v6 )
      {
        v19 = std::to_string(v113, *(_QWORD *)(*((_QWORD *)this + 78) + 128LL));
        v20 = std::to_string(v112, *(unsigned int *)(*((_QWORD *)this + 77) + 192LL));
        v21 = std::to_string(v111, *(_QWORD *)(*((_QWORD *)this + 76) + 56LL));
        v22 = std::to_string(v110, *(_QWORD *)(*((_QWORD *)this + 75) + 56LL));
        v23 = std::to_string(v109, *(_QWORD *)(*((_QWORD *)this + 73) + 56LL));
        v24 = std::string::string(v108, "LampCount logical max is not the same across reports.");
        v25 = std::operator+<char>((__int64)v107, v24, " LampArrayAttributes:");
        v26 = (_QWORD *)std::operator+<char>((__int64)v106, v25, v23);
        v27 = std::operator+<char>((__int64)v105, v26, ", LampAttributesRequest:");
        v28 = (_QWORD *)std::operator+<char>((__int64)v119, v27, v22);
        v29 = std::operator+<char>((__int64)v118, v28, ", LampAttributesResponse:");
        v30 = (_QWORD *)std::operator+<char>((__int64)v117, v29, v21);
        v31 = std::operator+<char>((__int64)v116, v30, ", LampMultiUpdate:");
        v32 = (_QWORD *)std::operator+<char>((__int64)v114, v31, v20);
        v33 = std::operator+<char>((__int64)v115, v32, ", LampRangeUpdate:");
        std::operator+<char>((__int64)v104, v33, v19);
        std::string::~string((__int64)v115);
        std::string::~string((__int64)v114);
        std::string::~string((__int64)v116);
        std::string::~string((__int64)v117);
        std::string::~string((__int64)v118);
        std::string::~string((__int64)v119);
        std::string::~string((__int64)v105);
        std::string::~string((__int64)v106);
        std::string::~string((__int64)v107);
        std::string::~string((__int64)v108);
        std::string::~string((__int64)v109);
        std::string::~string((__int64)v110);
        std::string::~string((__int64)v111);
        std::string::~string((__int64)v112);
        std::string::~string((__int64)v113);
        LampArrayTelemetry::GetInstance(v35, v34, v36);
        LampArrayTelemetry::LogLampArrayHidReportFailure(
          v37,
          (__int64)v104,
          2147942487LL,
          (__int64)this + 24,
          *((_WORD *)this + 269),
          *((_WORD *)this + 270),
          *((_WORD *)this + 271));
        v38 = 911LL;
      }
      else
      {
        v39 = (unsigned __int8 *)*((_QWORD *)this + 76);
        v40 = v39[632];
        v41 = (_DWORD *)*((_QWORD *)this + 77);
        if ( (_DWORD)v40 == v41[56] && (v42 = (_QWORD *)*((_QWORD *)this + 78), v40 == v42[34]) )
        {
          v43 = v39[704];
          if ( (_DWORD)v43 == v41[64] && v43 == v42[43] )
          {
            v44 = v39[776];
            if ( (_DWORD)v44 == v41[72] && v44 == v42[52] )
            {
              v45 = v39[848];
              if ( (_DWORD)v45 == v41[80] && v45 == v42[61] )
              {
                std::vector<unsigned char>::_Tidy(&v102);
                return 0LL;
              }
              v47 = std::to_string(v105, v42[61]);
              v48 = std::to_string(v106, *(unsigned int *)(*((_QWORD *)this + 77) + 320LL));
              v49 = std::to_string(v107, *(_QWORD *)(*((_QWORD *)this + 76) + 848LL));
              v50 = std::string::string(v108, "GainChannel logical max is not the same across reports.");
              v51 = std::operator+<char>((__int64)v109, v50, " LampAttributesResponse:");
              v52 = (_QWORD *)std::operator+<char>((__int64)v110, v51, v49);
              v53 = std::operator+<char>((__int64)v111, v52, ", LampMultiUpdate:");
              v54 = (_QWORD *)std::operator+<char>((__int64)v112, v53, v48);
              v55 = std::operator+<char>((__int64)v113, v54, ", LampRangeUpdate:");
              std::operator+<char>((__int64)v104, v55, v47);
              std::string::~string((__int64)v113);
              std::string::~string((__int64)v112);
              std::string::~string((__int64)v111);
              std::string::~string((__int64)v110);
              std::string::~string((__int64)v109);
              std::string::~string((__int64)v108);
              std::string::~string((__int64)v107);
              std::string::~string((__int64)v106);
              std::string::~string((__int64)v105);
              LampArrayTelemetry::GetInstance(v57, v56, v58);
              LampArrayTelemetry::LogLampArrayHidReportFailure(
                v59,
                (__int64)v104,
                2147942487LL,
                (__int64)this + 24,
                *((_WORD *)this + 269),
                *((_WORD *)this + 270),
                *((_WORD *)this + 271));
              v38 = 1003LL;
            }
            else
            {
              v60 = std::to_string(v105, v42[52]);
              v61 = std::to_string(v106, *(unsigned int *)(*((_QWORD *)this + 77) + 288LL));
              v62 = std::to_string(v107, *(_QWORD *)(*((_QWORD *)this + 76) + 776LL));
              v63 = std::string::string(v108, "BlueChannel logical max is not the same across reports.");
              v64 = std::operator+<char>((__int64)v109, v63, " LampAttributesResponse:");
              v65 = (_QWORD *)std::operator+<char>((__int64)v110, v64, v62);
              v66 = std::operator+<char>((__int64)v111, v65, ", LampMultiUpdate:");
              v67 = (_QWORD *)std::operator+<char>((__int64)v112, v66, v61);
              v68 = std::operator+<char>((__int64)v113, v67, ", LampRangeUpdate:");
              std::operator+<char>((__int64)v104, v68, v60);
              std::string::~string((__int64)v113);
              std::string::~string((__int64)v112);
              std::string::~string((__int64)v111);
              std::string::~string((__int64)v110);
              std::string::~string((__int64)v109);
              std::string::~string((__int64)v108);
              std::string::~string((__int64)v107);
              std::string::~string((__int64)v106);
              std::string::~string((__int64)v105);
              LampArrayTelemetry::GetInstance(v70, v69, v71);
              LampArrayTelemetry::LogLampArrayHidReportFailure(
                v72,
                (__int64)v104,
                2147942487LL,
                (__int64)this + 24,
                *((_WORD *)this + 269),
                *((_WORD *)this + 270),
                *((_WORD *)this + 271));
              v38 = 980LL;
            }
          }
          else
          {
            v73 = std::to_string(v105, v42[43]);
            v74 = std::to_string(v106, *(unsigned int *)(*((_QWORD *)this + 77) + 256LL));
            v75 = std::to_string(v107, *(_QWORD *)(*((_QWORD *)this + 76) + 704LL));
            v76 = std::string::string(v108, "GreenChannel logical max is not the same across reports.");
            v77 = std::operator+<char>((__int64)v109, v76, " LampAttributesResponse:");
            v78 = (_QWORD *)std::operator+<char>((__int64)v110, v77, v75);
            v79 = std::operator+<char>((__int64)v111, v78, ", LampMultiUpdate:");
            v80 = (_QWORD *)std::operator+<char>((__int64)v112, v79, v74);
            v81 = std::operator+<char>((__int64)v113, v80, ", LampRangeUpdate:");
            std::operator+<char>((__int64)v104, v81, v73);
            std::string::~string((__int64)v113);
            std::string::~string((__int64)v112);
            std::string::~string((__int64)v111);
            std::string::~string((__int64)v110);
            std::string::~string((__int64)v109);
            std::string::~string((__int64)v108);
            std::string::~string((__int64)v107);
            std::string::~string((__int64)v106);
            std::string::~string((__int64)v105);
            LampArrayTelemetry::GetInstance(v83, v82, v84);
            LampArrayTelemetry::LogLampArrayHidReportFailure(
              v85,
              (__int64)v104,
              2147942487LL,
              (__int64)this + 24,
              *((_WORD *)this + 269),
              *((_WORD *)this + 270),
              *((_WORD *)this + 271));
            v38 = 957LL;
          }
        }
        else
        {
          v86 = std::to_string(v105, *(_QWORD *)(*((_QWORD *)this + 78) + 272LL));
          v87 = std::to_string(v106, *(unsigned int *)(*((_QWORD *)this + 77) + 224LL));
          v88 = std::to_string(v107, *(_QWORD *)(*((_QWORD *)this + 76) + 632LL));
          v89 = std::string::string(v108, "RedChannel logical max is not the same across reports.");
          v90 = std::operator+<char>((__int64)v109, v89, " LampAttributesResponse:");
          v91 = (_QWORD *)std::operator+<char>((__int64)v110, v90, v88);
          v92 = std::operator+<char>((__int64)v111, v91, ", LampMultiUpdate:");
          v93 = (_QWORD *)std::operator+<char>((__int64)v112, v92, v87);
          v94 = std::operator+<char>((__int64)v113, v93, ", LampRangeUpdate:");
          std::operator+<char>((__int64)v104, v94, v86);
          std::string::~string((__int64)v113);
          std::string::~string((__int64)v112);
          std::string::~string((__int64)v111);
          std::string::~string((__int64)v110);
          std::string::~string((__int64)v109);
          std::string::~string((__int64)v108);
          std::string::~string((__int64)v107);
          std::string::~string((__int64)v106);
          std::string::~string((__int64)v105);
          LampArrayTelemetry::GetInstance(v96, v95, v97);
          LampArrayTelemetry::LogLampArrayHidReportFailure(
            v98,
            (__int64)v104,
            2147942487LL,
            (__int64)this + 24,
            *((_WORD *)this + 269),
            *((_WORD *)this + 270),
            *((_WORD *)this + 271));
          v38 = 934LL;
        }
      }
      v99 = (const char *)v104;
      if ( v104[3] > (char *)0xF )
        v99 = v104[0];
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)v38,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)0x80070057LL,
        (int)"%hs",
        v99);
      std::string::~string((__int64)v104);
    }
    else
    {
      while ( 1 )
      {
        if ( v8 == v11[v9] )
        {
          v12 = std::to_string(v115, v8);
          v13 = std::string::string(v114, "One or more LampArray HID reports have duplicate IDs: ");
          std::operator+<char>((__int64)v104, (__int64)v13, v12);
          std::string::~string((__int64)v114);
          std::string::~string((__int64)v115);
          LampArrayTelemetry::GetInstance(v15, v14, v16);
          LampArrayTelemetry::LogLampArrayHidReportFailure(
            v17,
            (__int64)v104,
            2147942487LL,
            (__int64)this + 24,
            *((_WORD *)this + 269),
            *((_WORD *)this + 270),
            *((_WORD *)this + 271));
          std::string::~string((__int64)v104);
          v10 = v103;
          v11 = v102;
          if ( v8 == v102[v9] )
            break;
        }
        v8 = v11[v9++];
        if ( v9 >= v10 - v11 )
          goto LABEL_14;
      }
      LODWORD(v101) = v8;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x371,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)0x80070057LL,
        (int)"Reports have duplicate Id:%d",
        v101);
    }
    std::vector<unsigned char>::_Tidy(&v102);
  }
  return 2147942487LL;
}
