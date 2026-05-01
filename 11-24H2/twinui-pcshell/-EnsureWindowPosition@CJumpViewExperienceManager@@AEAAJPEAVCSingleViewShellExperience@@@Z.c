/*
 * XREFs of ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180393DB8
 * Callers:
 *     ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180395420 (-OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z @ 0x1801A4A48 (--0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z.c)
 *     ?VerifyPV@Accessor@RoVariant@@AEBAJXZ @ 0x1801A4BAC (-VerifyPV@Accessor@RoVariant@@AEBAJXZ.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801DDB50 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1801E309C (--1RoVariant@@QEAA@XZ.c)
 *     ?GetMonitorInformation@CJumpViewExperienceManager@@AEBAJUtagPOINT@@AEAUtagRECT@@AEAIAEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1802423AC (-GetMonitorInformation@CJumpViewExperienceManager@@AEBAJUtagPOINT@@AEAUtagRECT@@AEAIAEAW4EDGEUI_.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802C1CE8 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?CalcWindowPosition@CJumpViewExperienceManager@@CAJUtagRECT@@UtagPOINT@@HHW4EDGEUI_TRAYSTUCKPLACE@@AEAU2@@Z @ 0x180393854 (-CalcWindowPosition@CJumpViewExperienceManager@@CAJUtagRECT@@UtagPOINT@@HHW4EDGEUI_TRAYSTUCKPLAC.c)
 *     ?GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z @ 0x1803949A0 (-GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@wil@@QEAA_NXZ @ 0x1803963F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@.c)
 *     ?ScaleByDPI@ExperienceManagerUtils@@YAXAEBUSize@Foundation@Windows@@HAEAH1@Z @ 0x1806827D4 (-ScaleByDPI@ExperienceManagerUtils@@YAXAEBUSize@Foundation@Windows@@HAEAH1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CJumpViewExperienceManager::EnsureWindowPosition(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  unsigned int v5; // r8d
  int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, PVOID, struct IInspectable **); // rdi
  HSTRING_HEADER *v11; // rax
  int v12; // r12d
  void *v13; // rbx
  void *v14; // rax
  RoVariant *v15; // rcx
  __int64 v16; // r8
  RoVariant *v17; // rcx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, PVOID, struct IInspectable **); // rdi
  unsigned int v20; // r8d
  HSTRING_HEADER *v21; // rax
  HSTRING_HEADER *v22; // rsi
  void *v23; // rbx
  PVOID Reserved1; // rax
  int Int32; // eax
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, PVOID, LONG *); // rdi
  unsigned int v28; // r8d
  HSTRING_HEADER *v29; // rax
  __int64 v30; // rsi
  HSTRING_HEADER *v31; // rbx
  HSTRING_HEADER *v32; // rax
  int v33; // eax
  int MonitorInformation; // eax
  struct tagRECT v35; // xmm6
  int v36; // eax
  int v37; // eax
  int *v39; // [rsp+28h] [rbp-E0h]
  enum EDGEUI_TRAYSTUCKPLACE *v40; // [rsp+28h] [rbp-E0h]
  struct tagRECT v41; // [rsp+38h] [rbp-D0h] BYREF
  void *v42; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+50h] [rbp-B8h]
  HSTRING_HEADER *v44; // [rsp+58h] [rbp-B0h] BYREF
  struct IInspectable *v45; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v47; // [rsp+70h] [rbp-98h] BYREF
  int v48; // [rsp+74h] [rbp-94h] BYREF
  int v49[2]; // [rsp+78h] [rbp-90h] BYREF
  struct tagPOINT v50; // [rsp+80h] [rbp-88h]
  int v51; // [rsp+88h] [rbp-80h] BYREF
  int v52; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v53; // [rsp+90h] [rbp-78h] BYREF
  void *v54; // [rsp+98h] [rbp-70h] BYREF
  LONG v55; // [rsp+A0h] [rbp-68h]
  HSTRING_HEADER v56; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-48h]
  struct tagRECT v58; // [rsp+C8h] [rbp-40h] BYREF
  HSTRING_HEADER v59; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v60; // [rsp+F0h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  if ( !*((_QWORD *)a2 + 3) )
    return 0LL;
  v46 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4,
         &v46);
  v6 = v4;
  if ( v4 < 0 )
  {
    v7 = (unsigned int)v4;
    v8 = 963LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)v7);
    goto LABEL_34;
  }
  v54 = 0LL;
  v55 = 0;
  v9 = v46;
  v10 = *(__int64 (__fastcall **)(__int64, PVOID, struct IInspectable **))(*(_QWORD *)v46 + 48LL);
  v44 = (HSTRING_HEADER *)&v54;
  v45 = 0LL;
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          &v56,
          (const WCHAR **)&JumpViewExperienceEvents::Param_Position,
          v5);
  v12 = v10(v9, v11[1].Reserved.Reserved1, &v45);
  v57 = 0LL;
  RoVariant::RoVariant((RoVariant *)&v42, v45);
  v13 = v42;
  v42 = 0LL;
  LODWORD(v10) = v43;
  LODWORD(v43) = 0;
  RoVariant::~RoVariant((RoVariant *)&v42);
  v14 = v54;
  v54 = v13;
  *(_QWORD *)&v41.left = v14;
  LODWORD(v14) = v55;
  v55 = (int)v10;
  v41.right = (int)v14;
  RoVariant::~RoVariant((RoVariant *)&v41);
  if ( v12 >= 0 )
  {
    *(_QWORD *)&v41.left = v54;
    v41.right = v55;
    v50 = 0LL;
    v53 = 0LL;
    v6 = RoVariant::Accessor::VerifyPV((RoVariant::Accessor *)&v41);
    if ( v6 < 0 || (v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 184LL))(v16, &v53), v6 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C9,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
      v17 = (RoVariant *)&v54;
LABEL_10:
      RoVariant::~RoVariant(v17);
      goto LABEL_34;
    }
    v50.x = (int)*(float *)&v53;
    v50.y = (int)*((float *)&v53 + 1);
    RoVariant::~RoVariant((RoVariant *)&v54);
    v56.Reserved.Reserved1 = 0LL;
    *(_DWORD *)&v56.Reserved.Reserved2[8] = 0;
    v18 = v46;
    v19 = *(__int64 (__fastcall **)(__int64, PVOID, struct IInspectable **))(*(_QWORD *)v46 + 48LL);
    v44 = &v56;
    v45 = 0LL;
    v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v59,
            (const WCHAR **)&JumpViewExperienceEvents::Param_HorizontalAlign,
            v20);
    v12 = v19(v18, v21[1].Reserved.Reserved1, &v45);
    v60 = 0LL;
    v22 = v44;
    RoVariant::RoVariant((RoVariant *)&v42, v45);
    v23 = v42;
    v42 = 0LL;
    LODWORD(v19) = v43;
    LODWORD(v43) = 0;
    RoVariant::~RoVariant((RoVariant *)&v42);
    Reserved1 = v22->Reserved.Reserved1;
    v22->Reserved.Reserved1 = v23;
    *(_QWORD *)&v41.left = Reserved1;
    LODWORD(Reserved1) = *(_DWORD *)&v22->Reserved.Reserved2[8];
    *(_DWORD *)&v22->Reserved.Reserved2[8] = (_DWORD)v19;
    v41.right = (int)Reserved1;
    RoVariant::~RoVariant((RoVariant *)&v41);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D2,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
      v15 = (RoVariant *)&v56;
      goto LABEL_6;
    }
    v51 = 0;
    *(_QWORD *)&v41.left = v56.Reserved.Reserved1;
    v41.right = *(_DWORD *)&v56.Reserved.Reserved2[8];
    Int32 = RoVariant::Accessor::GetInt32((RoVariant::Accessor *)&v41, &v51);
    v6 = Int32;
    if ( Int32 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D5,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)Int32);
      v17 = (RoVariant *)&v56;
      goto LABEL_10;
    }
    RoVariant::~RoVariant((RoVariant *)&v56);
    v42 = 0LL;
    LODWORD(v43) = 0;
    v26 = v46;
    v27 = *(__int64 (__fastcall **)(__int64, PVOID, LONG *))(*(_QWORD *)v46 + 48LL);
    *(_QWORD *)&v41.left = &v42;
    *(_QWORD *)&v41.right = 0LL;
    v29 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v59,
            (const WCHAR **)&JumpViewExperienceEvents::Param_VerticalAlign,
            v28);
    v12 = v27(v26, v29[1].Reserved.Reserved1, &v41.right);
    v60 = 0LL;
    v30 = *(_QWORD *)&v41.left;
    RoVariant::RoVariant((RoVariant *)&v44, *(struct IInspectable **)&v41.right);
    v31 = v44;
    v44 = 0LL;
    LODWORD(v27) = (_DWORD)v45;
    LODWORD(v45) = 0;
    RoVariant::~RoVariant((RoVariant *)&v44);
    v32 = *(HSTRING_HEADER **)v30;
    *(_QWORD *)v30 = v31;
    v44 = v32;
    LODWORD(v32) = *(_DWORD *)(v30 + 8);
    *(_DWORD *)(v30 + 8) = (_DWORD)v27;
    LODWORD(v45) = (_DWORD)v32;
    RoVariant::~RoVariant((RoVariant *)&v44);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3DC,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
      v15 = (RoVariant *)&v42;
      goto LABEL_6;
    }
    v52 = 0;
    *(_QWORD *)&v41.left = v42;
    v41.right = v43;
    v33 = RoVariant::Accessor::GetInt32((RoVariant::Accessor *)&v41, &v52);
    v6 = v33;
    if ( v33 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3DF,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v33);
      v17 = (RoVariant *)&v42;
      goto LABEL_10;
    }
    RoVariant::~RoVariant((RoVariant *)&v42);
    v41 = 0LL;
    v47 = 0;
    MonitorInformation = CJumpViewExperienceManager::GetMonitorInformation(
                           this,
                           v50,
                           &v41,
                           &v47,
                           (CJumpViewExperienceManager *)((char *)this + 496));
    v6 = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      v7 = (unsigned int)MonitorInformation;
      v8 = 1000LL;
      goto LABEL_33;
    }
    v35 = v41;
    *(struct tagRECT *)((char *)this + 524) = v41;
    v48 = 0;
    v49[0] = 0;
    ExperienceManagerUtils::ScaleByDPI(
      (struct CSingleViewShellExperience *)((char *)a2 + 44),
      (const struct Windows::Foundation::Size *)v47,
      (int)&v48,
      v49,
      v39);
    if ( v48 <= 0 || v49[0] <= 0 )
    {
      v6 = -2147024809;
      v7 = 2147942487LL;
      v8 = 1010LL;
      goto LABEL_33;
    }
    v58 = 0LL;
    v41 = v35;
    v36 = CJumpViewExperienceManager::CalcWindowPosition(&v41.left, *(_QWORD *)&v50, v48, v49[0], (__int64)v40, &v58);
    v6 = v36;
    if ( v36 < 0 )
    {
      v7 = (unsigned int)v36;
      v8 = 1013LL;
      goto LABEL_33;
    }
    v37 = CSingleViewShellExperience::SetPosition(a2, &v58);
    v6 = v37;
    if ( v37 < 0 )
    {
      v7 = (unsigned int)v37;
      v8 = 1014LL;
      goto LABEL_33;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::GetImpl'::`2'::impl) )
    {
      if ( *((_DWORD *)this + 125) == 5 )
        *(struct tagRECT *)((char *)&g_hoverState + 4) = v58;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v46);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3C6,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v12);
  v15 = (RoVariant *)&v54;
LABEL_6:
  RoVariant::~RoVariant(v15);
  v6 = v12;
LABEL_34:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v46);
  return (unsigned int)v6;
}
