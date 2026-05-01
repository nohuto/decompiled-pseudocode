/*
 * XREFs of ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x18026AA58
 * Callers:
 *     ?Initialize@VirtualDesktopGestureContext@@QEAAJK@Z @ 0x180560A40 (-Initialize@VirtualDesktopGestureContext@@QEAAJK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800C9E90 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801C4860 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUtagRECT@@PEBUtagSIZE@@PEAPEAU3@@Z @ 0x18022F950 (-CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDC.c)
 *     ?RegisterWindow@VirtualDesktopGestureWindow@@IEAAJPEBG0@Z @ 0x180233668 (-RegisterWindow@VirtualDesktopGestureWindow@@IEAAJPEBG0@Z.c)
 *     ?MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAPEAU2@@Z @ 0x18026BB00 (-MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEAV-$CCoSimpleA.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802B7F2C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??$As@UIVirtualDesktopThumbnail@@@?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopThumbnail@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802C1F48 (--$As@UIVirtualDesktopThumbnail@@@-$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1802C95E8 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1804BB6FC (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetScaleFactor@VirtualDesktopGestureWindow@@QEAAIXZ @ 0x1805603B0 (-GetScaleFactor@VirtualDesktopGestureWindow@@QEAAIXZ.c)
 *     ?IsCurrentDesktopRemote@VirtualDesktopGestureWindow@@IEAAJPEAH@Z @ 0x1805613D8 (-IsCurrentDesktopRemote@VirtualDesktopGestureWindow@@IEAAJPEAH@Z.c)
 *     ?SetBackdropBlurEffect@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry@@M@Z @ 0x180562330 (-SetBackdropBlurEffect@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry.c)
 *     ?SetDropShadowEffect@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry@@@Z @ 0x180562B08 (-SetDropShadowEffect@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall VirtualDesktopGestureWindow::Initialize(VirtualDesktopGestureWindow *this, int a2)
{
  int v3; // eax
  int v4; // ebx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64, char *); // rbx
  DCompThumbnailHelpers **v8; // r15
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  void *v12; // r8
  unsigned __int64 v13; // r9
  __int64 *v14; // rcx
  _QWORD *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 *v18; // rax
  char v19; // bl
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(__int64, _QWORD, _QWORD, unsigned __int64, GUID *, __int64 *); // rdi
  int v22; // edx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rdx
  void *v26; // r8
  int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 *v30; // rax
  __int64 v31; // rdi
  __int64 (__fastcall *v32)(__int64, _QWORD, __int64, GUID *, char *); // rbx
  _QWORD *v33; // r12
  __int64 v34; // rdi
  __int64 (__fastcall *v35)(__int64, _QWORD, unsigned __int64, GUID *, char *); // rbx
  __int64 v36; // rsi
  __int64 (__fastcall *v37)(__int64, _QWORD, unsigned __int64, GUID *, char *); // rdi
  VirtualDesktopGestureWindow *v38; // rcx
  int ScaleFactor; // esi
  VirtualDesktopGestureWindow *v40; // rcx
  __int64 v41; // rdi
  __int64 (__fastcall *v42)(__int64, _QWORD, unsigned __int64, GUID *, struct IDCompThumbnail **); // rbx
  int v43; // eax
  __int64 v44; // rdx
  void *v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 *v48; // rax
  __int64 v49; // rdi
  __int64 (__fastcall *v50)(__int64, struct IDCompThumbnail *, _QWORD, unsigned __int64, GUID *, __int64 *); // rbx
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rdx
  void *v54; // r8
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rdi
  __int64 (__fastcall *v60)(__int64, struct IDCompThumbnail *, unsigned __int64, GUID *, int *); // rbx
  void *v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 *v64; // rax
  DCompThumbnailHelpers *v65; // rdi
  __int64 (__fastcall *v66)(DCompThumbnailHelpers *, _QWORD, _QWORD, unsigned __int64, GUID *, struct tagSIZE *); // rbx
  int v67; // ecx
  DWORD SysColor; // eax
  int v69; // eax
  void *v70; // r8
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 *v73; // rcx
  __int64 v74; // rdi
  __int64 (__fastcall *v75)(__int64, _QWORD, __int64, GUID *, char *); // rbx
  int BackgroundThumbnail; // eax
  __int64 v77; // rdx
  unsigned __int64 v78; // r9
  void *v79; // r8
  __int64 v80; // rdx
  __int64 v81; // rdx
  __int64 *v82; // rcx
  __int64 *v83; // rdi
  __int64 v84; // rbx
  int v85; // eax
  __int64 v86; // rdx
  void *v87; // r8
  int v88; // edi
  __int64 v89; // rdx
  __int64 v90; // rdx
  __int64 *v91; // rcx
  int IsCurrentDesktopRemote; // eax
  __int64 v93; // rdx
  HMONITOR v94; // rdx
  HWND TrayWindowForMonitor; // rsi
  int *v96; // rdx
  __int64 v97; // rdi
  __int64 (__fastcall *v98)(__int64, __int64, HWND, _QWORD, _QWORD, __int128 *, GUID *, struct tagSIZE *); // rbx
  int v99; // eax
  int v100; // edi
  unsigned __int64 v101; // r9
  __int64 v102; // rdx
  int v103; // eax
  void *v104; // r8
  __int64 v105; // rdx
  __int64 v106; // rdx
  __int64 *v107; // rcx
  int v108; // eax
  struct tagSIZE v109; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v110; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v111; // [rsp+68h] [rbp-A0h]
  __int64 v112; // [rsp+70h] [rbp-98h] BYREF
  struct IDCompThumbnail *v113; // [rsp+78h] [rbp-90h] BYREF
  int v114[2]; // [rsp+80h] [rbp-88h] BYREF
  int v115[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v116; // [rsp+90h] [rbp-78h] BYREF
  __int64 v117; // [rsp+98h] [rbp-70h] BYREF
  int v118; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v119[16]; // [rsp+A8h] [rbp-60h] BYREF
  VirtualDesktopGestureWindow *v120; // [rsp+B8h] [rbp-50h]
  char v121; // [rsp+C0h] [rbp-48h]
  struct tagRECT rc; // [rsp+C8h] [rbp-40h] BYREF
  struct tagRECT v123; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v124; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v125; // [rsp+F8h] [rbp-10h] BYREF
  int v126; // [rsp+100h] [rbp-8h]
  int v127; // [rsp+104h] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  *((_DWORD *)this + 57) = a2;
  v3 = VirtualDesktopGestureWindow::RegisterWindow(
         this,
         L"VirtualDesktopGestureSwitcher",
         L"Virtual desktop switching preview");
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v4;
  }
  v120 = this;
  v121 = 1;
  v109 = (struct tagSIZE)*((_QWORD *)this + 5);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v109);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v119, &v109, &GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v109);
  v6 = *((_QWORD *)this + 5);
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v6 + 56LL);
  v8 = (DCompThumbnailHelpers **)((char *)this + 56);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  v9 = v7(v6, *((_QWORD *)this + 1), 1LL, (char *)this + 56);
  v4 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v9);
LABEL_6:
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v119);
    DestroyWindow(*((HWND *)this + 1));
    return (unsigned int)v4;
  }
  *(_QWORD *)&v123.left = 0LL;
  v123.right = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
  v123.bottom = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
  *(_QWORD *)v115 = 0LL;
  v109 = 0LL;
  if ( *((_DWORD *)this + 57) == 2 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v109);
    v10 = DCompThumbnailHelpers::CreateDesktopBackgroundThumbnail(
            *v8,
            0LL,
            (VirtualDesktopGestureWindow *)((char *)this + 184),
            0LL,
            &v109);
    v4 = v10;
    if ( v10 < 0 )
    {
      v11 = 162LL;
LABEL_14:
      v13 = (unsigned int)v10;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)v13);
LABEL_16:
      v14 = (__int64 *)&v109;
LABEL_17:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v14);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v115);
      goto LABEL_6;
    }
    v10 = (*(__int64 (__fastcall **)(struct tagSIZE, struct tagRECT *, _QWORD, _QWORD))(**(_QWORD **)&v109 + 24LL))(
            v109,
            &v123,
            0LL,
            0LL);
    v4 = v10;
    if ( v10 < 0 )
    {
      v11 = 163LL;
      goto LABEL_14;
    }
    v10 = VirtualDesktopGestureWindow::SetBackdropBlurEffect(
            this,
            *(struct IDCompThumbnail **)&v109,
            (const struct Geometry::CRect *)&v123,
            60.0);
    v4 = v10;
    if ( v10 < 0 )
    {
      v11 = 167LL;
      goto LABEL_14;
    }
    v15 = (_QWORD *)((char *)this + 128);
    v4 = 0;
    v16 = *((_QWORD *)this + 17);
    if ( v16 != *((_QWORD *)this + 19)
      || (v4 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 (__int64)this + 128,
                 v16 + 1,
                 v12),
          v4 >= 0) )
    {
      v17 = *((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = v17 + 1;
      v18 = (__int64 *)(*v15 + 8 * v17);
      if ( !v18 )
        goto LABEL_24;
      *v18 = (__int64)v109;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v18);
    }
    if ( v4 < 0 )
    {
      v13 = (unsigned int)v4;
      v11 = 168LL;
      goto LABEL_15;
    }
LABEL_24:
    v110 = 0LL;
    v19 = ShouldSystemUseDarkMode();
    v20 = *((_QWORD *)this + 7);
    v21 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, unsigned __int64, GUID *, __int64 *))(*(_QWORD *)v20 + 104LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v110);
    v22 = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
    LODWORD(v111) = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
    HIDWORD(v111) = v22;
    v23 = v21(v20, 0LL, v19 != 0 ? 3552822 : 13882323, v111, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v110);
    v4 = v23;
    if ( v23 < 0 )
    {
      v24 = 172LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v23);
LABEL_27:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v110);
      goto LABEL_16;
    }
    v23 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v110 + 24LL))(
            v110,
            &v123,
            0LL,
            0LL);
    v4 = v23;
    if ( v23 < 0 )
    {
      v24 = 173LL;
      goto LABEL_26;
    }
    ShouldSystemUseDarkMode();
    v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v110 + 32LL))(v110, v25, 0LL, 0LL);
    v4 = v23;
    if ( v23 < 0 )
    {
      v24 = 175LL;
      goto LABEL_26;
    }
    v27 = 0;
    v28 = *((_QWORD *)this + 17);
    if ( v28 != *((_QWORD *)this + 19)
      || (v27 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)this + 128,
                  v28 + 1,
                  v26),
          v27 >= 0) )
    {
      v29 = *((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = v29 + 1;
      v30 = (__int64 *)(*((_QWORD *)this + 16) + 8 * v29);
      if ( !v30 )
        goto LABEL_38;
      *v30 = v110;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v30);
    }
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB0,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v27);
LABEL_87:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v110);
      v4 = v27;
      goto LABEL_16;
    }
LABEL_38:
    v31 = *((_QWORD *)this + 7);
    v32 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v31 + 112LL);
    v33 = (_QWORD *)((char *)this + 160);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
    v111 = 0x100000001LL;
    v23 = v32(v31, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 160);
    v4 = v23;
    if ( v23 < 0 )
    {
      v24 = 178LL;
      goto LABEL_26;
    }
    v34 = *((_QWORD *)this + 7);
    v35 = *(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, GUID *, char *))(*(_QWORD *)v34 + 112LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 21);
    v111 = __PAIR64__(*((_DWORD *)this + 49) - *((_DWORD *)this + 47), *((_DWORD *)this + 48) - *((_DWORD *)this + 46));
    v23 = v35(v34, *v33, v111, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 168);
    v4 = v23;
    if ( v23 < 0 )
    {
      v24 = 180LL;
      goto LABEL_26;
    }
    v36 = *((_QWORD *)this + 7);
    v37 = *(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, GUID *, char *))(*(_QWORD *)v36 + 112LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 22);
    v111 = __PAIR64__(*((_DWORD *)this + 49) - *((_DWORD *)this + 47), *((_DWORD *)this + 48) - *((_DWORD *)this + 46));
    v23 = v37(v36, *v33, v111, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 176);
    v4 = v23;
    if ( v23 < 0 )
    {
      v24 = 181LL;
      goto LABEL_26;
    }
    rc = v123;
    ScaleFactor = VirtualDesktopGestureWindow::GetScaleFactor(v38);
    InflateRect(&rc, ScaleFactor, ScaleFactor);
    VirtualDesktopGestureWindow::GetScaleFactor(v40);
    v113 = 0LL;
    v41 = *((_QWORD *)this + 7);
    v42 = *(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, GUID *, struct IDCompThumbnail **))(*(_QWORD *)v41 + 112LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v113);
    LODWORD(v111) = rc.right - rc.left;
    HIDWORD(v111) = rc.bottom - rc.top;
    v43 = v42(v41, *((_QWORD *)this + 21), v111, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v113);
    v4 = v43;
    if ( v43 < 0 )
    {
      v44 = 192LL;
LABEL_46:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v44,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v43);
LABEL_47:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v113);
      goto LABEL_27;
    }
    v43 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v113 + 24LL))(
            v113,
            &rc,
            0LL,
            0LL);
    v4 = v43;
    if ( v43 < 0 )
    {
      v44 = 193LL;
      goto LABEL_46;
    }
    v43 = VirtualDesktopGestureWindow::SetDropShadowEffect(this, v113, (const struct Geometry::CRect *)&rc);
    v4 = v43;
    if ( v43 < 0 )
    {
      v44 = 194LL;
      goto LABEL_46;
    }
    v27 = 0;
    v46 = *((_QWORD *)this + 17);
    if ( v46 != *((_QWORD *)this + 19)
      || (v27 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)this + 128,
                  v46 + 1,
                  v45),
          v27 >= 0) )
    {
      v47 = *((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = v47 + 1;
      v48 = (__int64 *)(*((_QWORD *)this + 16) + 8 * v47);
      if ( !v48 )
        goto LABEL_58;
      *v48 = (__int64)v113;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v48);
    }
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC3,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v27);
LABEL_86:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v113);
      goto LABEL_87;
    }
LABEL_58:
    v112 = 0LL;
    v49 = *((_QWORD *)this + 7);
    v50 = *(__int64 (__fastcall **)(__int64, struct IDCompThumbnail *, _QWORD, unsigned __int64, GUID *, __int64 *))(*(_QWORD *)v49 + 104LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v112);
    LODWORD(v111) = rc.right - rc.left;
    HIDWORD(v111) = rc.bottom - rc.top;
    v51 = v50(v49, v113, 0LL, v111, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v112);
    v4 = v51;
    if ( v51 < 0 )
    {
      v52 = 198LL;
LABEL_60:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v52,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v51);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v112);
      goto LABEL_47;
    }
    v125 = 0LL;
    v126 = rc.right - rc.left;
    v127 = rc.bottom - rc.top;
    v51 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v112 + 24LL))(
            v112,
            &v125,
            0LL,
            0LL);
    v4 = v51;
    if ( v51 < 0 )
    {
      v52 = 200LL;
      goto LABEL_60;
    }
    ShouldSystemUseDarkMode();
    v51 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v112 + 32LL))(v112, v53, 0LL, 0LL);
    v4 = v51;
    if ( v51 < 0 )
    {
      v52 = 202LL;
      goto LABEL_60;
    }
    v51 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v112 + 240LL))(v112);
    v4 = v51;
    if ( v51 < 0 )
    {
      v52 = 203LL;
      goto LABEL_60;
    }
    v27 = 0;
    v55 = *((_QWORD *)this + 17);
    if ( v55 != *((_QWORD *)this + 19)
      || (v27 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)this + 128,
                  v55 + 1,
                  v54),
          v27 >= 0) )
    {
      v56 = *((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = v56 + 1;
      v57 = (__int64 *)(*((_QWORD *)this + 16) + 8 * v56);
      if ( !v57 )
        goto LABEL_73;
      *v57 = v112;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v57);
    }
    if ( v27 < 0 )
    {
      v58 = 204LL;
LABEL_85:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v58,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v27);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v112);
      goto LABEL_86;
    }
LABEL_73:
    v59 = *((_QWORD *)this + 7);
    v60 = *(__int64 (__fastcall **)(__int64, struct IDCompThumbnail *, unsigned __int64, GUID *, int *))(*(_QWORD *)v59 + 112LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v115);
    v111 = __PAIR64__(*((_DWORD *)this + 49) - *((_DWORD *)this + 47), *((_DWORD *)this + 48) - *((_DWORD *)this + 46));
    v51 = v60(v59, v113, v111, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v115);
    v4 = v51;
    if ( v51 < 0 )
    {
      v52 = 207LL;
      goto LABEL_60;
    }
    LODWORD(v124) = ScaleFactor;
    DWORD1(v124) = ScaleFactor;
    DWORD2(v124) = ScaleFactor + v123.right - v123.left;
    HIDWORD(v124) = v123.bottom - v123.top + ScaleFactor;
    v51 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD))(**(_QWORD **)v115 + 24LL))(
            *(_QWORD *)v115,
            &v124,
            0LL,
            0LL);
    v4 = v51;
    if ( v51 < 0 )
    {
      v52 = 209LL;
      goto LABEL_60;
    }
    v51 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v115 + 240LL))(*(_QWORD *)v115);
    v4 = v51;
    if ( v51 < 0 )
    {
      v52 = 210LL;
      goto LABEL_60;
    }
    v27 = 0;
    v62 = *((_QWORD *)this + 17);
    if ( v62 != *((_QWORD *)this + 19)
      || (v27 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)this + 128,
                  v62 + 1,
                  v61),
          v27 >= 0) )
    {
      v63 = *((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = v63 + 1;
      v64 = (__int64 *)(*((_QWORD *)this + 16) + 8 * v63);
      if ( !v64 )
      {
LABEL_88:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v112);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v113);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v110);
        goto LABEL_102;
      }
      *v64 = *(_QWORD *)v115;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v64);
    }
    if ( v27 < 0 )
    {
      v58 = 211LL;
      goto LABEL_85;
    }
    goto LABEL_88;
  }
  v65 = *v8;
  v66 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, _QWORD, _QWORD, unsigned __int64, GUID *, struct tagSIZE *))(*(_QWORD *)*v8 + 104LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v109);
  v67 = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
  LODWORD(v111) = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
  HIDWORD(v111) = v67;
  SysColor = GetSysColor(1);
  v69 = v66(v65, *((_QWORD *)this + 20), SysColor, v111, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v109);
  v4 = v69;
  if ( v69 < 0 )
  {
    v11 = 216LL;
LABEL_93:
    v13 = (unsigned int)v69;
    goto LABEL_15;
  }
  v69 = (*(__int64 (__fastcall **)(struct tagSIZE, struct tagRECT *, _QWORD, _QWORD))(**(_QWORD **)&v109 + 24LL))(
          v109,
          &v123,
          0LL,
          0LL);
  v4 = v69;
  if ( v69 < 0 )
  {
    v11 = 217LL;
    goto LABEL_93;
  }
  v15 = (_QWORD *)((char *)this + 128);
  v4 = 0;
  v71 = *((_QWORD *)this + 17);
  if ( v71 != *((_QWORD *)this + 19)
    || (v4 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)this + 128,
               v71 + 1,
               v70),
        v4 >= 0) )
  {
    v72 = *((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = v72 + 1;
    v73 = (__int64 *)(*v15 + 8 * v72);
    if ( !v73 )
      goto LABEL_100;
    *v73 = (__int64)v109;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v73);
  }
  if ( v4 < 0 )
  {
    v13 = (unsigned int)v4;
    v11 = 218LL;
    goto LABEL_15;
  }
LABEL_100:
  v74 = *((_QWORD *)this + 7);
  v75 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v74 + 112LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
  v111 = 0x100000001LL;
  v69 = v75(v74, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 160);
  v4 = v69;
  if ( v69 < 0 )
  {
    v11 = 220LL;
    goto LABEL_93;
  }
LABEL_102:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v109);
  v116 = 0LL;
  if ( *((_DWORD *)this + 57) == 2 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v116);
    BackgroundThumbnail = VirtualDesktopGestureWindow::MakeBackgroundThumbnail(this, *(_QWORD *)v115, v15, &v116);
    v4 = BackgroundThumbnail;
    if ( BackgroundThumbnail < 0 )
    {
      v77 = 226LL;
LABEL_107:
      v78 = (unsigned int)BackgroundThumbnail;
LABEL_108:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v77,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)v78);
LABEL_139:
      v14 = &v116;
      goto LABEL_17;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v116);
    BackgroundThumbnail = VirtualDesktopGestureWindow::MakeBackgroundThumbnail(this, 0LL, v15, &v116);
    v4 = BackgroundThumbnail;
    if ( BackgroundThumbnail < 0 )
    {
      v77 = 230LL;
      goto LABEL_107;
    }
  }
  BackgroundThumbnail = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v116 + 24LL))(
                          v116,
                          &v123,
                          0LL,
                          0LL);
  v4 = BackgroundThumbnail;
  if ( BackgroundThumbnail < 0 )
  {
    v77 = 232LL;
    goto LABEL_107;
  }
  v4 = 0;
  v80 = v15[1];
  if ( v80 != v15[3]
    || (v4 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)v15,
               v80 + 1,
               v79),
        v4 >= 0) )
  {
    v81 = v15[1];
    v15[1] = v81 + 1;
    v82 = (__int64 *)(*v15 + 8 * v81);
    if ( !v82 )
      goto LABEL_117;
    *v82 = v116;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v82);
  }
  if ( v4 < 0 )
  {
    v78 = (unsigned int)v4;
    v77 = 233LL;
    goto LABEL_108;
  }
LABEL_117:
  *(_QWORD *)v114 = 0LL;
  v83 = (__int64 *)*((_QWORD *)this + 7);
  v84 = *v83;
  if ( *((_DWORD *)this + 57) == 2 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v114);
    v124 = *(_OWORD *)((char *)this + 184);
    v85 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int128 *, int *))(v84 + 88))(
            v83,
            *(_QWORD *)v115,
            0LL,
            &v124,
            v114);
    v4 = v85;
    if ( v85 < 0 )
    {
      v86 = 238LL;
LABEL_120:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v86,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v85);
LABEL_138:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v114);
      goto LABEL_139;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v114);
    v124 = *(_OWORD *)((char *)this + 184);
    v85 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int128 *, int *))(v84 + 88))(
            v83,
            *((_QWORD *)this + 20),
            0LL,
            &v124,
            v114);
    v4 = v85;
    if ( v85 < 0 )
    {
      v86 = 242LL;
      goto LABEL_120;
    }
  }
  v85 = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *, _QWORD, _QWORD))(**(_QWORD **)v114 + 24LL))(
          *(_QWORD *)v114,
          &v123,
          0LL,
          0LL);
  v4 = v85;
  if ( v85 < 0 )
  {
    v86 = 244LL;
    goto LABEL_120;
  }
  v88 = 0;
  v89 = *((_QWORD *)this + 17);
  if ( v89 != *((_QWORD *)this + 19)
    || (v88 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (__int64)this + 128,
                v89 + 1,
                v87),
        v88 >= 0) )
  {
    v90 = *((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = v90 + 1;
    v91 = (__int64 *)(*((_QWORD *)this + 16) + 8 * v90);
    if ( !v91 )
      goto LABEL_131;
    *v91 = *(_QWORD *)v114;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v91);
  }
  if ( v88 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF5,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v88);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v114);
    v4 = v88;
    goto LABEL_139;
  }
LABEL_131:
  v117 = 0LL;
  IsCurrentDesktopRemote = Microsoft::WRL::ComPtr<IDCompThumbnail>::As<IVirtualDesktopThumbnail>(v114, &v117);
  v4 = IsCurrentDesktopRemote;
  if ( IsCurrentDesktopRemote < 0 )
  {
    v93 = 248LL;
LABEL_137:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v93,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)IsCurrentDesktopRemote);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v117);
    goto LABEL_138;
  }
  IsCurrentDesktopRemote = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v117 + 24LL))(
                             v117,
                             0LL,
                             0LL,
                             0LL,
                             0);
  v4 = IsCurrentDesktopRemote;
  if ( IsCurrentDesktopRemote < 0 )
  {
    v93 = 249LL;
    goto LABEL_137;
  }
  TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(*((TaskbarHelpers **)this + 25), v94);
  v118 = 0;
  IsCurrentDesktopRemote = VirtualDesktopGestureWindow::IsCurrentDesktopRemote(this, &v118);
  v4 = IsCurrentDesktopRemote;
  if ( IsCurrentDesktopRemote < 0 )
  {
    v93 = 255LL;
    goto LABEL_137;
  }
  if ( v118 || !TrayWindowForMonitor )
    goto LABEL_161;
  v112 = 0LL;
  if ( !*((_BYTE *)this + 222) )
  {
    v96 = v115;
    if ( *((_DWORD *)this + 57) != 2 )
      v96 = (int *)((char *)this + 160);
    Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(&v112, v96);
  }
  rc = 0LL;
  GetWindowRect(TrayWindowForMonitor, &rc);
  MapWindowPoints(0LL, *((HWND *)this + 1), (LPPOINT)&rc, 2u);
  *(_QWORD *)&v124 = 0LL;
  DWORD2(v124) = rc.right - rc.left;
  HIDWORD(v124) = rc.bottom - rc.top;
  v109 = 0LL;
  v97 = *((_QWORD *)this + 7);
  v98 = *(__int64 (__fastcall **)(__int64, __int64, HWND, _QWORD, _QWORD, __int128 *, GUID *, struct tagSIZE *))(*(_QWORD *)v97 + 64LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v109);
  v99 = v98(v97, v112, TrayWindowForMonitor, 0LL, 0LL, &v124, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v109);
  v100 = v99;
  if ( v99 < 0 )
  {
    v101 = (unsigned int)v99;
    v102 = 286LL;
LABEL_156:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v102,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)v101);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v109);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v112);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v117);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v114);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v116);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v115);
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v119);
    DestroyWindow(*((HWND *)this + 1));
    return (unsigned int)v100;
  }
  v103 = (*(__int64 (__fastcall **)(struct tagSIZE, struct tagRECT *, _QWORD, _QWORD))(**(_QWORD **)&v109 + 24LL))(
           v109,
           &rc,
           0LL,
           0LL);
  v100 = v103;
  if ( v103 < 0 )
  {
    v101 = (unsigned int)v103;
    v102 = 287LL;
    goto LABEL_156;
  }
  v100 = 0;
  v105 = *((_QWORD *)this + 17);
  if ( v105 == *((_QWORD *)this + 19) )
  {
    v100 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
             (__int64)this + 128,
             v105 + 1,
             v104);
    if ( v100 < 0 )
      goto LABEL_154;
  }
  v106 = *((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = v106 + 1;
  v107 = (__int64 *)(*((_QWORD *)this + 16) + 8 * v106);
  if ( v107 )
  {
    *v107 = (__int64)v109;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v107);
LABEL_154:
    if ( v100 < 0 )
    {
      v101 = (unsigned int)v100;
      v102 = 288LL;
      goto LABEL_156;
    }
  }
  if ( !*((_BYTE *)this + 222) )
  {
    v108 = (*(__int64 (__fastcall **)(struct tagSIZE))(**(_QWORD **)&v109 + 168LL))(v109);
    if ( v108 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x127,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v108);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v109);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v112);
LABEL_161:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v117);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v114);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v116);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v115);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v119);
  return 0LL;
}
