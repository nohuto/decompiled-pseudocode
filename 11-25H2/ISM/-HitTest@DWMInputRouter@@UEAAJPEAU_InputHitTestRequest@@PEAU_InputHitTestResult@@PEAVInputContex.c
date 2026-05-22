/*
 * XREFs of ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180018CC0
 * Callers:
 *     ?HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180018890 (-HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 * Callees:
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18000D33C (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@W4InputType@@AEBUHitTestResult@@PEAUIInputTarget@@@Z @ 0x180017B20 (-GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x180019880 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x180019FE0 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 *     ?GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001AB50 (-GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA-AV-$ComPtr@VInputSite@@@WRL@M.c)
 *     ??$_Insert_or_assign@KAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEAKAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Z @ 0x18002245C (--$_Insert_or_assign@KAEAV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@-$unordered_map@KV-$ComPtr@UI.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x180025F94 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ??R?$default_delete@UHitTestResult@@@std@@QEBAXPEAUHitTestResult@@@Z @ 0x18004EB60 (--R-$default_delete@UHitTestResult@@@std@@QEBAXPEAUHitTestResult@@@Z.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x18004F008 (--1HitTestResult@@QEAA@XZ.c)
 *     ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x18005BCC0 (-GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ.c)
 *     ?CheckForVirtualTouchpadFromInputSiteList@DWMInputRouter@@AEAA_NAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@PEAUVPTP_ID@@@Z @ 0x18007D958 (-CheckForVirtualTouchpadFromInputSiteList@DWMInputRouter@@AEAA_NAEBV-$vector@V-$ComPtr@VInputSit.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18008D760 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009B5DC (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ?Create@InputSiteHierarchyManager@@SA?AV?$ComPtr@UIInputSiteHierarchyManager@@@WRL@Microsoft@@XZ @ 0x18012DB5C (-Create@InputSiteHierarchyManager@@SA-AV-$ComPtr@UIInputSiteHierarchyManager@@@WRL@Microsoft@@XZ.c)
 *     ?IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z @ 0x180197C18 (-IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall DWMInputRouter::HitTest(
        DWMInputRouter *this,
        struct _InputHitTestRequest *a2,
        struct _InputHitTestResult *a3,
        struct InputContext *a4,
        struct IInputBuffer *a5,
        struct IInputTarget **a6)
{
  struct _InputHitTestResult *v6; // r12
  struct _InputHitTestRequest *v7; // rsi
  int v9; // r14d
  struct IInputSiteHierarchyManager *v10; // rbx
  __int64 v11; // rax
  char *v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rcx
  int v18; // ebx
  _QWORD *v19; // rcx
  _QWORD *v20; // rdx
  int v21; // eax
  unsigned int v22; // edi
  unsigned int v23; // r14d
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  struct InputContext *v27; // rcx
  HANDLE v28; // r14
  __int64 v29; // rbx
  _QWORD *v30; // r10
  char v31; // di
  unsigned __int64 v32; // rcx
  struct _InputHitTestResult *v33; // r14
  struct _InputHitTestResult *v34; // rax
  struct InputContext *v35; // rbx
  __int64 v36; // rdx
  struct _InputHitTestResult *k; // rbx
  unsigned int v38; // r13d
  struct _InputHitTestRequest *v39; // rdi
  __int64 v40; // rcx
  struct _InputHitTestRequest *v41; // rcx
  unsigned __int64 v42; // rdx
  struct _InputHitTestResult *v43; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // r12
  int (__fastcall *v50)(_QWORD, _QWORD, _QWORD); // rax
  struct _InputHitTestRequest *v51; // r8
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  HANDLE v56; // rax
  int v57; // eax
  Microsoft::Bamo::BaseBamoConnection **v58; // rax
  struct InputSystemServerConnection *v59; // rcx
  Microsoft::Bamo::BaseBamoConnection *v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rbx
  __int64 v65; // r14
  _QWORD ***v66; // r12
  _QWORD *v67; // rax
  __int64 *v68; // rdi
  struct _InputHitTestRequest *v69; // rax
  __int64 v70; // rbx
  __int64 v71; // rax
  HANDLE CurrentProcess; // rdi
  HANDLE v73; // rax
  const char *v74; // r9
  char *InitialTargetFromHitTestResult; // rax
  __int64 v76; // rdx
  struct InputContext *v77; // rdi
  __int64 v78; // rcx
  struct _InputHitTestResult *v79; // rcx
  struct IInputSiteHierarchyManager **v80; // rax
  struct IInputSiteHierarchyManager *v81; // rcx
  unsigned int v82; // ebx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  int dwDesiredAccess; // [rsp+20h] [rbp-E0h]
  __int64 v85; // [rsp+40h] [rbp-C0h] BYREF
  Microsoft::Bamo::BaseBamoConnection *v86; // [rsp+48h] [rbp-B8h] BYREF
  int v87; // [rsp+50h] [rbp-B0h]
  int v88; // [rsp+54h] [rbp-ACh]
  struct _InputHitTestResult *v89; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v90; // [rsp+60h] [rbp-A0h] BYREF
  struct _InputHitTestRequest *j; // [rsp+68h] [rbp-98h]
  __int64 v92; // [rsp+70h] [rbp-90h] BYREF
  struct InputContext *v93; // [rsp+78h] [rbp-88h]
  int (__fastcall *v94)(_QWORD, _QWORD, _QWORD); // [rsp+80h] [rbp-80h]
  _QWORD *i; // [rsp+88h] [rbp-78h] BYREF
  DWMInputRouter *v96; // [rsp+98h] [rbp-68h]
  int (__fastcall ***v97)(_QWORD, _QWORD, _QWORD); // [rsp+A0h] [rbp-60h]
  struct IInputTarget **v98; // [rsp+A8h] [rbp-58h]
  struct IInputBuffer *v99; // [rsp+B0h] [rbp-50h]
  char v100; // [rsp+B8h] [rbp-48h] BYREF
  int v101; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v102; // [rsp+C4h] [rbp-3Ch]
  __int128 v103; // [rsp+CCh] [rbp-34h]
  __int128 v104; // [rsp+DCh] [rbp-24h]
  __int128 v105; // [rsp+ECh] [rbp-14h]
  __int128 v106; // [rsp+FCh] [rbp-4h]
  __int128 v107; // [rsp+10Ch] [rbp+Ch]
  __int64 v108; // [rsp+11Ch] [rbp+1Ch]
  int v109; // [rsp+124h] [rbp+24h]
  int v110; // [rsp+128h] [rbp+28h]
  int v111; // [rsp+12Ch] [rbp+2Ch]
  __int64 v112; // [rsp+130h] [rbp+30h]
  __int128 v113; // [rsp+138h] [rbp+38h]
  char v114[8]; // [rsp+150h] [rbp+50h] BYREF
  HANDLE hSourceHandle; // [rsp+158h] [rbp+58h]
  __int128 v116; // [rsp+160h] [rbp+60h]
  __int128 v117; // [rsp+170h] [rbp+70h]
  __int128 v118; // [rsp+180h] [rbp+80h]
  __int128 v119; // [rsp+190h] [rbp+90h]
  __int64 v120; // [rsp+1A0h] [rbp+A0h]
  char v121; // [rsp+1A8h] [rbp+A8h]
  int v122; // [rsp+1ACh] [rbp+ACh]
  struct _InputHitTestResult *v123; // [rsp+1B0h] [rbp+B0h]
  __int64 v124; // [rsp+1B8h] [rbp+B8h]
  unsigned __int64 v125; // [rsp+1C0h] [rbp+C0h]
  int v126[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v127; // [rsp+1E0h] [rbp+E0h]
  int v128; // [rsp+1E8h] [rbp+E8h]
  int v129; // [rsp+1ECh] [rbp+ECh]
  int v130; // [rsp+1F0h] [rbp+F0h]
  __int16 v131; // [rsp+1F4h] [rbp+F4h]
  __int16 v132; // [rsp+1F6h] [rbp+F6h]
  int v133; // [rsp+1F8h] [rbp+F8h]
  __int64 v134; // [rsp+1FCh] [rbp+FCh]
  int v135; // [rsp+204h] [rbp+104h]
  __int64 v136; // [rsp+208h] [rbp+108h]
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+158h]

  v93 = a4;
  v6 = a3;
  v89 = a3;
  v7 = a2;
  j = a2;
  v96 = this;
  v99 = a5;
  v98 = a6;
  v9 = 0;
  v88 = 0;
  v103 = 0LL;
  v104 = 0LL;
  v105 = 0LL;
  v106 = 0LL;
  v107 = 0LL;
  v108 = 0LL;
  v109 = 0;
  v113 = 0LL;
  v101 = *(_DWORD *)a2;
  v102 = *(_QWORD *)((char *)a2 + 20);
  v110 = *((_DWORD *)a2 + 16);
  v111 = *((_DWORD *)a2 + 17);
  v112 = *((_QWORD *)a2 + 9);
  v10 = ISMStatics::s_inputSiteHierarchyManager;
  if ( !ISMStatics::s_inputSiteHierarchyManager )
  {
    v80 = (struct IInputSiteHierarchyManager **)InputSiteHierarchyManager::Create(&v92);
    v81 = *v80;
    *v80 = 0LL;
    ISMStatics::s_inputSiteHierarchyManager = v81;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v92);
    v10 = ISMStatics::s_inputSiteHierarchyManager;
  }
  if ( !ISMStatics::s_inputSystemBamoConnection )
  {
    v85 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v85);
    v57 = CoreUICreate(&v85);
    if ( v57 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x31,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismstatics.cpp",
        (const char *)(unsigned int)v57,
        dwDesiredAccess);
    v58 = InputSystemServerConnection::Create(&v86, v85);
    v59 = *v58;
    *v58 = 0LL;
    ISMStatics::s_inputSystemBamoConnection = v59;
    v60 = v86;
    if ( v86 )
    {
      v86 = 0LL;
      Microsoft::Bamo::BaseBamoConnection::Release(v60);
    }
    v61 = v85;
    if ( v85 )
    {
      v85 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
    }
  }
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)ISMStatics::s_inputSystemBamoConnection + 31) + 8LL)
                                           + 152LL))(*((_QWORD *)ISMStatics::s_inputSystemBamoConnection + 31) + 8LL);
  HitTestHelper::HitTestRequestWithRetry(v114, &v101, *((_QWORD *)this + 23), v11, v10);
  if ( !v114[0] )
  {
    v38 = -2147467259;
    v88 = -2147467259;
    v14 = v125;
    v33 = (struct _InputHitTestResult *)v124;
    v6 = v123;
    goto LABEL_40;
  }
  v13 = *(_DWORD *)v7;
  LODWORD(v14) = 2;
  v15 = v124;
  v92 = v124;
  if ( v13 == 4 )
  {
    v87 = 2;
  }
  else
  {
    v52 = v13 - 2;
    if ( v52 )
    {
      v53 = v52 - 1;
      if ( v53 )
      {
        if ( v53 == 2 )
          v87 = 32;
        else
          v87 = 0;
      }
      else
      {
        v87 = 16;
      }
    }
    else
    {
      v87 = 8;
      LODWORD(v86) = 0;
      if ( (unsigned __int8)DWMInputRouter::CheckForVirtualTouchpadFromInputSiteList(32LL, v124 - 24, &v86) )
      {
        *((_DWORD *)v6 + 26) = (_DWORD)v86;
        *((_DWORD *)v6 + 25) = 0;
        v56 = hSourceHandle;
        hSourceHandle = 0LL;
LABEL_109:
        *((_QWORD *)v6 + 1) = v56;
        HitTestResult::~HitTestResult((HitTestResult *)v114);
        return 0LL;
      }
    }
  }
  *(_QWORD *)v6 = v120;
  *((_OWORD *)v6 + 1) = v116;
  *((_OWORD *)v6 + 2) = v117;
  *((_OWORD *)v6 + 3) = v118;
  *((_OWORD *)v6 + 4) = v119;
  *((_DWORD *)v6 + 20) = v122;
  v16 = v15 - 24;
  LODWORD(v86) = 0;
  InputSiteManager::GetInputSiteForLeafmostViewFromInputSiteList(&v85, v15 - 24);
  v17 = v85;
  if ( v85 )
  {
    if ( !*(_BYTE *)(v85 + 480) )
      std::_Throw_bad_optional_access();
    LODWORD(v86) = *LegacyInputSinkData::GetViewInstanceId((LegacyInputSinkData *)(v85 + 48));
    v17 = v85;
  }
  if ( v17 )
  {
    v85 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = 0;
  v19 = *(_QWORD **)v16;
  v20 = *(_QWORD **)(v16 + 8);
  for ( i = v20; ; v20 = i )
  {
    v90 = v19;
    if ( v19 == v20 )
    {
      if ( !v18 )
        v18 = 1;
      if ( !v9 )
        v9 = 2;
      goto LABEL_16;
    }
    v45 = *v19;
    v46 = 0LL;
    v85 = 0LL;
    v47 = *(_QWORD *)(v45 + 488);
    v48 = *(_QWORD *)(v45 + 496);
    if ( v47 != v48 )
    {
      v49 = v48;
      while ( 1 )
      {
        v97 = *(int (__fastcall ****)(_QWORD, _QWORD, _QWORD))(v47 + 8);
        v50 = **v97;
        v94 = v50;
        if ( v46 )
        {
          v85 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
          v50 = v94;
        }
        if ( v50(v97, &GUID_4753c172_9138_4064_8603_1556e98a010f, &v85) >= 0 )
          break;
        v47 += 16LL;
        if ( v47 == v49 )
          break;
        v46 = v85;
      }
      v46 = v85;
      v7 = j;
      v6 = v89;
    }
    if ( v46 )
    {
      if ( !v18 )
      {
        v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 24LL))(v46);
        v46 = v85;
      }
      if ( !v9 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 32LL))(v46);
        v46 = v85;
      }
      if ( v18 && v9 )
        break;
    }
    if ( v46 )
    {
      v85 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    }
    v19 = v90 + 1;
  }
  if ( v46 )
  {
    v85 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  }
LABEL_16:
  if ( v18 == 2 )
  {
    v21 = 1;
  }
  else
  {
    v21 = 0;
    if ( v18 == 3 )
      v21 = 2;
  }
  v22 = v21 | 4;
  if ( v9 != 1 )
    v22 = v21;
  if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
    __fastfail(7u);
  if ( ((1LL << gdwDeviceFamily) & 0x1C000) != 0 && (v22 & 2) != 0 )
  {
    v82 = v22 & 0xFFFFFFFD;
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    v23 = (unsigned int)v86;
    v22 = v22 & 0xFFFFFFFC | 1;
    if ( !ViewHelper::IsViewPartOfForegroundApplication(ViewHierarchy, (unsigned int)v86) )
      v22 = v82;
  }
  else
  {
    v23 = (unsigned int)v86;
  }
  *((_QWORD *)v6 + 11) = v23;
  *((_DWORD *)v6 + 24) = v22;
  if ( !v87 )
  {
    *((_DWORD *)v6 + 25) = 0;
    v56 = hSourceHandle;
    hSourceHandle = 0LL;
    goto LABEL_109;
  }
  v126[3] = 0;
  v132 = 0;
  v136 = 0LL;
  v24 = *(_DWORD *)v7;
  v129 = v24;
  if ( v24 == 4 )
  {
    v25 = 2;
  }
  else
  {
    v54 = v24 - 2;
    if ( v54 )
    {
      v55 = v54 - 1;
      if ( v55 )
      {
        if ( v55 == 2 )
        {
          v25 = 0x1000000;
          if ( !*((_DWORD *)v7 + 4) )
            v25 = 32;
        }
        else
        {
          v25 = 0;
        }
      }
      else
      {
        v25 = 16;
      }
    }
    else
    {
      v25 = 8;
    }
  }
  v126[0] = v25;
  v126[1] = *((_DWORD *)v7 + 8);
  v126[2] = *((_DWORD *)v7 + 10);
  v127 = *((_QWORD *)v7 + 6);
  v128 = *((_DWORD *)v7 + 17);
  v134 = *(_QWORD *)((char *)v7 + 20);
  v130 = *((_DWORD *)v7 + 1);
  v131 = *((_WORD *)v7 + 4);
  v26 = *((_DWORD *)v7 + 3);
  v135 = *((_DWORD *)v7 + 14);
  if ( v25 == 2 )
    v26 = 1;
  v133 = v26;
  v27 = v93;
  *((_DWORD *)v93 + 24) = v22;
  *((_QWORD *)v27 + 11) = *((_QWORD *)v6 + 11);
  v28 = hSourceHandle;
  v29 = v92;
  if ( (char *)hSourceHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    v68 = *(__int64 **)(v92 - 24);
    v69 = *(struct _InputHitTestRequest **)(v92 - 16);
    for ( j = v69; ; v69 = j )
    {
      if ( v68 == (__int64 *)v69 )
      {
        v70 = 0LL;
        v90 = 0LL;
        v71 = 0LL;
        goto LABEL_130;
      }
      v62 = *v68;
      v63 = 0LL;
      v85 = 0LL;
      v64 = *(_QWORD *)(v62 + 488);
      v65 = *(_QWORD *)(v62 + 496);
      if ( v64 != v65 )
      {
        while ( 1 )
        {
          v66 = *(_QWORD ****)(v64 + 8);
          v67 = **v66;
          i = v67;
          if ( v63 )
          {
            v85 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
            v67 = i;
          }
          if ( ((int (__fastcall *)(_QWORD ***, GUID *, __int64 *))v67)(
                 v66,
                 &GUID_8ddffe9c_458e_6d51_c227_1374408f672c,
                 &v85) >= 0 )
            break;
          v64 += 16LL;
          if ( v64 == v65 )
            break;
          v63 = v85;
        }
        LODWORD(v14) = 2;
        if ( v85 )
          break;
      }
      ++v68;
    }
    v90 = (_QWORD *)*v68;
    v70 = (__int64)v90;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v90);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v85);
    v71 = v70;
LABEL_130:
    v6 = v89;
    if ( v71 )
    {
      v121 = 0;
      v122 = 0;
      *((_DWORD *)v89 + 20) = 0;
    }
    CurrentProcess = GetCurrentProcess();
    v73 = GetCurrentProcess();
    if ( !DuplicateHandle(v73, hSourceHandle, CurrentProcess, (LPHANDLE)v6 + 1, 0, 0, 2u) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x645,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        v74);
    InitialTargetFromHitTestResult = (char *)DWMInputRouter::GetInitialTargetFromHitTestResult(
                                               (int)v96,
                                               &v89,
                                               v126[0],
                                               (__int64)v114,
                                               0LL);
    v76 = 0LL;
    if ( &v100 != InitialTargetFromHitTestResult )
    {
      v76 = *(_QWORD *)InitialTargetFromHitTestResult;
      *(_QWORD *)InitialTargetFromHitTestResult = 0LL;
    }
    v77 = v93;
    v78 = *((_QWORD *)v93 + 2);
    *((_QWORD *)v93 + 2) = v76;
    if ( v78 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
    v79 = v89;
    if ( v89 )
    {
      v89 = 0LL;
      (*(void (__fastcall **)(struct _InputHitTestResult *))(*(_QWORD *)v79 + 16LL))(v79);
    }
    if ( v87 != 2 && v87 != 32 )
    {
      LODWORD(v86) = v133;
      std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::_Insert_or_assign<unsigned long,Microsoft::WRL::ComPtr<IInputTarget> &>(
        (char *)v77 + 24,
        &i,
        &v86,
        (char *)v77 + 16);
    }
    if ( v70 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
    v29 = v124;
    v28 = hSourceHandle;
  }
  v30 = operator new(0x78uLL);
  *(_BYTE *)v30 = v114[0];
  v30[1] = v28;
  hSourceHandle = 0LL;
  *((_OWORD *)v30 + 1) = v116;
  *((_OWORD *)v30 + 2) = v117;
  *((_OWORD *)v30 + 3) = v118;
  *((_OWORD *)v30 + 4) = v119;
  v30[10] = v120;
  v31 = v121;
  *((_BYTE *)v30 + 88) = v121;
  *((_DWORD *)v30 + 23) = v122;
  v32 = v125;
  i = 0LL;
  v125 = 0LL;
  v33 = 0LL;
  v124 = 0LL;
  v34 = v123;
  v123 = 0LL;
  v30[12] = v34;
  v30[13] = v29;
  v30[14] = v32;
  v35 = v93;
  v36 = *((_QWORD *)v93 + 22);
  *((_QWORD *)v93 + 22) = v30;
  if ( v36 )
    std::default_delete<HitTestResult>::operator()();
  LODWORD(v86) = 0;
  if ( (int)ContextualProcessorManager::OnHitTest(
              *((ContextualProcessorManager **)v96 + 32),
              (struct HitTestInfo *)v126,
              v35,
              v99,
              v98,
              (enum ContextualProcessorState *)&v86) >= 0 )
    LODWORD(k) = (_DWORD)v86;
  else
    LODWORD(k) = 0;
  if ( !v31 || *(_DWORD *)v7 == 4 && (*((_BYTE *)v7 + 64) & 1) == 0 )
  {
    if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
      __fastfail(7u);
    v12 = (char *)gdwDeviceFamily;
    if ( ((1LL << gdwDeviceFamily) & 0x1820) == 0 )
      goto LABEL_37;
    goto LABEL_106;
  }
  LODWORD(v14) = 3;
  while ( 1 )
  {
    *((_DWORD *)v6 + 25) = v14;
    v14 = (unsigned __int64)i;
    v6 = v33;
    v38 = (unsigned int)v33;
LABEL_40:
    if ( !v6 )
      break;
    for ( k = v6; k != v33; k = (struct _InputHitTestResult *)((char *)k + 24) )
    {
      v39 = *(struct _InputHitTestRequest **)k;
      if ( *(_QWORD *)k )
      {
        v7 = (struct _InputHitTestRequest *)*((_QWORD *)k + 1);
        if ( v39 != v7 )
        {
          do
          {
            v40 = *(_QWORD *)v39;
            if ( *(_QWORD *)v39 )
            {
              *(_QWORD *)v39 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
            }
            v39 = (struct _InputHitTestRequest *)((char *)v39 + 8);
          }
          while ( v39 != v7 );
          v38 = v88;
        }
        v41 = *(struct _InputHitTestRequest **)k;
        v42 = (*((_QWORD *)k + 2) - *(_QWORD *)k) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v42 >= 0x1000 )
        {
          v42 += 39LL;
          v51 = (struct _InputHitTestRequest *)*((_QWORD *)v41 - 1);
          v12 = (char *)(v41 - v51);
          if ( (unsigned __int64)(v12 - 8) > 0x1F )
            goto LABEL_105;
          v41 = v51;
        }
        operator delete(v41, (const struct std::nothrow_t *)v42);
        *(_QWORD *)k = 0LL;
        *((_QWORD *)k + 1) = 0LL;
        *((_QWORD *)k + 2) = 0LL;
      }
    }
    v14 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v14 - (_QWORD)v6) >> 3);
    v42 = 24 * v14;
    v43 = v6;
    if ( 24 * v14 < 0x1000
      || (v42 += 39LL, v6 = (struct _InputHitTestResult *)*((_QWORD *)v6 - 1), (unsigned __int64)(v43 - v6 - 8) <= 0x1F) )
    {
      operator delete(v6, (const struct std::nothrow_t *)v42);
      break;
    }
LABEL_105:
    _o__invalid_parameter_noinfo_noreturn(v12, v42);
LABEL_106:
    if ( *(_DWORD *)v7 != 4 )
    {
LABEL_37:
      LODWORD(v14) = 0;
      if ( (_DWORD)k )
      {
        LOBYTE(v14) = (_DWORD)k != 3;
        LODWORD(v14) = v14 + 1;
      }
    }
  }
  if ( (char *)hSourceHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    NtCloseCompositionInputSink();
  return v38;
}
