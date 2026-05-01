/*
 * XREFs of ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x180094530
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003D4C4 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180094FB8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?ReadPerDesktopStringData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGPEAPEAG@Z @ 0x1800951C4 (-ReadPerDesktopStringData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGPEAPEAG@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1800A3BC8 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x18022581C (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1802C1D38 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180679D28 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall VirtualDesktopPersistence::RestoreVirtualDesktopState(
        VirtualDesktopPersistence *a1,
        int a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // r14
  __int64 (*v8)(void); // rbx
  CCriticalFailureHandler *v9; // rcx
  int v10; // ebx
  unsigned __int64 v11; // r15
  const char *v12; // r9
  __int64 result; // rax
  char v14; // si
  LPVOID *p_pv; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rdx
  void *v21; // rbx
  __int64 v22; // rdi
  void *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  CCriticalFailureHandler *v26; // rcx
  int v27; // edi
  void *v28; // rcx
  __int64 v29; // rcx
  _QWORD *v30; // rcx
  CCriticalFailureHandler *v31; // rcx
  int v32; // ebx
  _OWORD *v33; // r14
  unsigned __int64 v34; // r12
  __int64 v35; // rbx
  int (__fastcall *v36)(__int64, __int64, _QWORD, const wchar_t *); // rdi
  __int64 v37; // rdx
  unsigned __int64 i; // rsi
  _QWORD *v39; // r12
  __int64 (__fastcall *v40)(__int64 *, _QWORD *, struct IVirtualDesktop **); // rbx
  CCriticalFailureHandler *v41; // rcx
  int v42; // ebx
  __int64 v43; // rax
  struct IVirtualDesktop *v44; // rbx
  __int64 (__fastcall *v45)(struct IVirtualDesktop *, GUID *, __int64 *); // rdi
  int v46; // eax
  VirtualDesktopPersistence *v47; // rbx
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // r8
  unsigned __int16 *v51; // rsi
  __int64 v52; // rbx
  __int64 (__fastcall *v53)(__int64, __int64); // rdi
  __int64 v54; // rdx
  int v55; // eax
  int PerDesktopStringData; // eax
  unsigned int v57; // r8d
  WCHAR *v58; // rbx
  __int64 v59; // rdi
  unsigned int v60; // eax
  int v61; // eax
  __int64 v62; // rax
  __int64 (__fastcall *v63)(__int64 *, struct IVirtualDesktop *, __int64); // rdi
  __int64 v64; // r8
  int v65; // eax
  __int64 v66; // rcx
  struct IVirtualDesktop *v67; // rcx
  __int64 (__fastcall *v68)(__int64 *, _QWORD *, __int64, _QWORD **); // rbx
  CCriticalFailureHandler *v69; // rcx
  int v70; // ebx
  void *v71; // rcx
  unsigned __int64 *v72; // [rsp+20h] [rbp-148h]
  unsigned __int64 *v73; // [rsp+28h] [rbp-140h]
  unsigned __int64 *v74; // [rsp+28h] [rbp-140h]
  unsigned __int16 *v75; // [rsp+40h] [rbp-128h] BYREF
  _QWORD *v76; // [rsp+48h] [rbp-120h] BYREF
  _QWORD *v77; // [rsp+50h] [rbp-118h] BYREF
  LPVOID v78; // [rsp+58h] [rbp-110h] BYREF
  struct IVirtualDesktop *v79; // [rsp+60h] [rbp-108h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-100h] BYREF
  int v81; // [rsp+70h] [rbp-F8h]
  __int64 v82; // [rsp+78h] [rbp-F0h] BYREF
  PCWSTR sourceString; // [rsp+80h] [rbp-E8h] BYREF
  unsigned __int64 v84; // [rsp+88h] [rbp-E0h]
  WCHAR *v85; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v86; // [rsp+98h] [rbp-D0h] BYREF
  unsigned __int64 v87; // [rsp+A0h] [rbp-C8h]
  __int64 v88; // [rsp+A8h] [rbp-C0h]
  VirtualDesktopPersistence *v89; // [rsp+B0h] [rbp-B8h]
  _OWORD *v90; // [rsp+B8h] [rbp-B0h] BYREF
  unsigned __int64 v91; // [rsp+C0h] [rbp-A8h]
  __int64 v92; // [rsp+C8h] [rbp-A0h]
  __int128 v93; // [rsp+D0h] [rbp-98h]
  HSTRING_HEADER hstringHeader; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v95; // [rsp+F8h] [rbp-70h]
  char v96[32]; // [rsp+100h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v5 = a4;
  v86 = a4;
  v81 = a2;
  v89 = a1;
  v92 = a5;
  v77 = 0LL;
  v8 = *(__int64 (**)(void))(*a3 + 368);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v77);
  try
  {
    v10 = v8();
    LODWORD(v75) = v10;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v9, (int *)&v75);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v10 = (int)v75;
    }
    LODWORD(v11) = -2147024882;
    if ( v10 < 0 )
    {
      if ( v10 != -2147024882 && v10 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v9,
          (int *)&v75,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
          0x6Au,
          v72,
          v73);
        v10 = (int)v75;
      }
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6A,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v77);
        return (unsigned int)v10;
      }
    }
    v76 = 0LL;
    pv = 0LL;
    v87 = 0LL;
    v14 = 0;
    p_pv = &pv;
    v74 = (unsigned __int64 *)&pv;
    LODWORD(v72) = 3;
    LOBYTE(p_pv) = 1;
    if ( (*(int (__fastcall **)(_QWORD, LPVOID *, _QWORD, const wchar_t *))(**((_QWORD **)a1 + 2) + 24LL))(
           *((_QWORD *)a1 + 2),
           p_pv,
           0LL,
           L"VirtualDesktopIDs") >= 0 )
    {
      v17 = 0LL;
      v18 = retaddr;
      if ( v87 )
      {
        v18 = retaddr;
        if ( (v87 & 0xF) == 0 )
        {
          v33 = pv;
          pv = 0LL;
          v90 = v33;
          v34 = v87 >> 4;
          v91 = v87 >> 4;
          v93 = *v33;
          v78 = 0LL;
          v88 = 0LL;
          v35 = *((_QWORD *)a1 + 2);
          v36 = *(int (__fastcall **)(__int64, __int64, _QWORD, const wchar_t *))(*(_QWORD *)v35 + 24LL);
          LOBYTE(v16) = 3;
          LOBYTE(v17) = 1;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::ReportUsage(
            &`wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
            v17,
            v16);
          v74 = (unsigned __int64 *)&v78;
          LODWORD(v72) = 3;
          LOBYTE(v37) = 1;
          if ( v36(v35, v37, 0LL, L"CurrentVirtualDesktop") >= 0 )
          {
            if ( v88 == 16 )
              v93 = *(_OWORD *)v78;
            else
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x7E,
                (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                (const char *)0x8000FFFFLL);
          }
          for ( i = 0LL; ; ++i )
          {
            v84 = i;
            if ( i >= v34 )
              break;
            v39 = &v33[i];
            v79 = 0LL;
            v40 = *(__int64 (__fastcall **)(__int64 *, _QWORD *, struct IVirtualDesktop **))(*a3 + 248);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v79);
            v42 = v40(a3, v39, &v79);
            LODWORD(v75) = v42;
            if ( !CRVPrivate::cfhImmersiveShellStartup )
            {
              CCriticalFailureHandler::GetFakeFailure(v41, (int *)&v75);
              CRVPrivate::cfhImmersiveShellStartup = 1;
              v42 = (int)v75;
            }
            if ( v42 < 0 )
            {
              if ( v42 != -2147024882 && v42 != -2144862209 )
              {
                CCriticalFailureHandler::HandleFailure(
                  v41,
                  (int *)&v75,
                  L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                  0x87u,
                  v72,
                  v74);
                v42 = (int)v75;
              }
              if ( v42 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x87,
                  (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                  (const char *)(unsigned int)v42);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v79);
                CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&v78);
                CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&v90);
                CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&pv);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v76);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v77);
                return (unsigned int)v42;
              }
            }
            v43 = *v39 - v93;
            if ( *v39 == (_QWORD)v93 )
              v43 = v39[1] - *((_QWORD *)&v93 + 1);
            if ( !v43 )
              Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v76, &v79);
            v82 = 0LL;
            v44 = v79;
            v45 = **(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))v79;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v82);
            v46 = v45(v44, &GUID_c9be252c_e386_425e_b33c_ca422112f51f, &v82);
            if ( v46 >= 0 )
            {
              v75 = 0LL;
              v47 = v89;
              v48 = VirtualDesktopPersistence::ReadPerDesktopStringData(v89, v79, L"Name", &v75);
              v51 = v75;
              if ( v48 >= 0 )
              {
                v52 = v82;
                v53 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v82 + 24LL);
                sourceString = v75;
                v54 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                    &hstringHeader,
                                    &sourceString)
                                + 24);
                v55 = v53(v52, v54);
                if ( v55 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x93,
                    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                    (const char *)(unsigned int)v55);
                v47 = v89;
              }
              LOBYTE(v50) = 3;
              LOBYTE(v49) = 1;
              wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::ReportUsage(
                &`wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
                v49,
                v50);
              sourceString = 0LL;
              PerDesktopStringData = VirtualDesktopPersistence::ReadPerDesktopStringData(
                                       v47,
                                       v79,
                                       L"Wallpaper",
                                       (unsigned __int16 **)&sourceString);
              v58 = (WCHAR *)sourceString;
              if ( PerDesktopStringData >= 0 )
              {
                v59 = v82;
                v85 = *(WCHAR **)(*(_QWORD *)v82 + 40LL);
                v95 = 0LL;
                v11 = -1LL;
                do
                  ++v11;
                while ( sourceString[v11] );
                if ( v11 > 0xFFFFFFFF )
                {
                  Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, 0, v57);
                  break;
                }
                v60 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v11, 0, v57);
                Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, v58, v60, v11);
                v61 = ((__int64 (__fastcall *)(__int64, __int64))v85)(v59, v95);
                if ( v61 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x9B,
                    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                    (const char *)(unsigned int)v61);
                v62 = *v39 - v93;
                if ( *v39 == (_QWORD)v93 )
                  v62 = v39[1] - *((_QWORD *)&v93 + 1);
                if ( !v62 )
                {
                  v63 = *(__int64 (__fastcall **)(__int64 *, struct IVirtualDesktop *, __int64))(*a3 + 136);
                  v85 = v58;
                  v64 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v96, &v85) + 24);
                  v65 = v63(a3, v79, v64);
                  if ( v65 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x9E,
                      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                      (const char *)(unsigned int)v65);
                }
              }
              if ( v58 )
                CoTaskMemFree(v58);
              if ( v51 )
                CoTaskMemFree(v51);
              i = v84;
            }
            else
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x8E,
                (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                (const char *)(unsigned int)v46);
            }
            v66 = v82;
            if ( v82 )
            {
              v82 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
            }
            v67 = v79;
            if ( v79 )
            {
              v79 = 0LL;
              (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v67 + 16LL))(v67);
            }
            LODWORD(v11) = -2147024882;
            v34 = v91;
          }
          if ( !v76 )
          {
            v68 = *(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64, _QWORD **))(*a3 + 384);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v76);
            v70 = v68(a3, v77, 5LL, &v76);
            LODWORD(v75) = v70;
            if ( !CRVPrivate::cfhImmersiveShellStartup )
            {
              CCriticalFailureHandler::GetFakeFailure(v69, (int *)&v75);
              CRVPrivate::cfhImmersiveShellStartup = 1;
              v70 = (int)v75;
            }
            if ( v70 < 0 )
            {
              if ( v70 != (_DWORD)v11 && v70 != -2144862209 )
              {
                CCriticalFailureHandler::HandleFailure(
                  v69,
                  (int *)&v75,
                  L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                  0xAAu,
                  v72,
                  v74);
                v70 = (int)v75;
              }
              if ( v70 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xAA,
                  (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                  (const char *)(unsigned int)v70);
                CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&v78);
                CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&v90);
                CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&pv);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v76);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v77);
                return (unsigned int)v70;
              }
            }
          }
          v14 = 1;
          v71 = v78;
          v78 = 0LL;
          CoTaskMemFree(v71);
          CoTaskMemFree(v33);
          v21 = v76;
          v5 = v86;
LABEL_19:
          v78 = v21;
          if ( v21 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( v81 == 1 )
          {
            v24 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 96LL))(v5, &v86);
            Microsoft::WRL::ComPtr<IClassicWindow>::operator=(&v78, v24);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v86);
            v21 = v78;
          }
          v25 = *a3;
          if ( v14 )
          {
            v27 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, void *))(v25 + 256))(a3, v77, v21);
            LODWORD(v75) = v27;
            if ( !CRVPrivate::cfhImmersiveShellStartup )
            {
              CCriticalFailureHandler::GetFakeFailure(v26, (int *)&v75);
              CRVPrivate::cfhImmersiveShellStartup = 1;
              v27 = (int)v75;
            }
            if ( v27 < 0 )
            {
              if ( v27 != (_DWORD)v11 && v27 != -2144862209 )
              {
                CCriticalFailureHandler::HandleFailure(
                  v26,
                  (int *)&v75,
                  L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                  0xC0u,
                  v72,
                  v74);
                v27 = (int)v75;
              }
              if ( v27 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xC0,
                  (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                  (const char *)(unsigned int)v27);
                if ( v21 )
                  (*(void (__fastcall **)(void *))(*(_QWORD *)v21 + 16LL))(v21);
                v28 = pv;
                pv = 0LL;
                CoTaskMemFree(v28);
                v29 = (__int64)v76;
                if ( v76 )
                {
                  v76 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
                }
                v30 = v77;
                if ( v77 )
                {
                  v77 = 0LL;
                  (*(void (__fastcall **)(_QWORD *, _QWORD))(*v30 + 16LL))(v30, *v30);
                }
                return (unsigned int)v27;
              }
            }
          }
          else
          {
            v32 = (*(__int64 (__fastcall **)(__int64 *, void *))(v25 + 264))(a3, v21);
            LODWORD(v75) = v32;
            if ( !CRVPrivate::cfhImmersiveShellStartup )
            {
              CCriticalFailureHandler::GetFakeFailure(v31, (int *)&v75);
              CRVPrivate::cfhImmersiveShellStartup = 1;
              v32 = (int)v75;
            }
            if ( v32 < 0 )
            {
              if ( v32 != (_DWORD)v11 && v32 != -2144862209 )
              {
                CCriticalFailureHandler::HandleFailure(
                  v31,
                  (int *)&v75,
                  L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                  0xC4u,
                  v72,
                  v74);
                v32 = (int)v75;
              }
              if ( v32 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xC4,
                  (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                  (const char *)(unsigned int)v32);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v78);
                CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&pv);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v76);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v77);
                return (unsigned int)v32;
              }
            }
          }
          (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v92 + 40LL))(v92, v76);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v78);
          CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&pv);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v76);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v77);
          return 0LL;
        }
        v19 = 2147549183LL;
        v20 = 117LL;
      }
      else
      {
        v19 = 2147943568LL;
        v20 = 116LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v18,
        (void *)v20,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)v19);
    }
    v21 = v76;
    v22 = (__int64)v77;
    if ( v76 != v77 )
    {
      if ( v77 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v77 + 8LL))(v77);
        v21 = v76;
      }
      v23 = v21;
      v21 = (void *)v22;
      v76 = (_QWORD *)v22;
      if ( v23 )
      {
        (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 16LL))(v23);
        v21 = v76;
      }
    }
    goto LABEL_19;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xCA,
                           (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                           v12);
  }
  return result;
}
