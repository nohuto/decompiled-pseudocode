/*
 * XREFs of ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1801958CC
 * Callers:
 *     ?InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180195820 (-InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     _lambda_a469c2389bb8dc71f832d95fbc03d5e0_::operator() @ 0x18046E9FC (_lambda_a469c2389bb8dc71f832d95fbc03d5e0_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003ED20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z @ 0x1800846F8 (-SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z.c)
 *     ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x1800AC018 (-InitializeIds@KBViewInfo@@QEAAXXZ.c)
 *     ?IsAppDefaultView@KBViewInfo@@QEAA_NXZ @ 0x1800AC204 (-IsAppDefaultView@KBViewInfo@@QEAA_NXZ.c)
 *     ?Default@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x18018CF88 (-Default@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ.c)
 *     ?CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAA?AV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@XZ @ 0x1801EC718 (-CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAA-AV-$ComPtr@UIApplicationFrameWrapper.c)
 *     ?InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAA?AV?$ComPtr@UIApplicationFrameTitleBar@@@WRL@Microsoft@@PEAUIApplicationFrameWrapper@@@Z @ 0x1801F2580 (-InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAA-AV-$ComPtr@UIApplica.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029721C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1802CAD00 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::InitializeViewInfoIfNeeded(
        TouchKeyboardExperienceManager *this,
        struct KBViewInfo *a2)
{
  winrt::hstring *v4; // rax
  const WCHAR *v5; // rbx
  const WCHAR *StringRawBuffer; // rax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v7; // rdx
  HWND v8; // rax
  unsigned int v9; // ebx
  __int64 v11; // rcx
  unsigned int v12; // eax
  int v13; // eax
  int v14; // eax
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64 *); // rdi
  int v18; // eax
  __int64 v19; // rdx
  HRESULT v20; // eax
  int bIgnoreCase; // [rsp+20h] [rbp-30h]
  const char *v22; // [rsp+28h] [rbp-28h]
  volatile signed __int32 *v23; // [rsp+30h] [rbp-20h] BYREF
  volatile signed __int32 *v24; // [rsp+38h] [rbp-18h] BYREF
  HWND hwnd[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int pvAttribute; // [rsp+88h] [rbp+38h] BYREF
  __int64 v28; // [rsp+90h] [rbp+40h] BYREF
  __int64 v29; // [rsp+98h] [rbp+48h] BYREF

  if ( !*((_BYTE *)a2 + 32) )
  {
    KBViewInfo::InitializeIds(a2);
    v4 = (winrt::hstring *)winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes::Default(&v23);
    v5 = winrt::hstring::c_str(v4);
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)a2 + 14), 0LL);
    LODWORD(v5) = CompareStringOrdinal(StringRawBuffer, -1, v5, -1, 1);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v23);
    if ( (_DWORD)v5 == 2 )
      TouchKeyboardExperienceManager::SetPrimaryViewId(this, *((_DWORD *)a2 + 26));
    if ( !*((_BYTE *)a2 + 33) && *((_QWORD *)a2 + 14) )
    {
      if ( !KBViewInfo::IsAppDefaultView(a2) )
      {
        v8 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*(ExperienceManagerUtils **)a2, v7);
        if ( v8 && !SetPropW(v8, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
        {
          v9 = -2147467259;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1451,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)0x80004005LL);
          return v9;
        }
        TouchKeyboardExperienceManager::CreateAppFrameWrapper(this, &v28);
        TouchKeyboardExperienceManager::InitializeChromeOptionsAndGetTitleBar(v11, &v24, v28);
        v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 48LL))(v28, 3LL);
        *((_BYTE *)a2 + 35) = wil::details::in1diag3::Log_IfFailedMsg(
                                retaddr,
                                (void *)0x1459,
                                (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                                (const char *)v12,
                                (int)"SetWindowBand() failed",
                                v22) >= 0;
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 104LL))(v28, *(_QWORD *)a2);
        if ( v13 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x145A,
            (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v13,
            bIgnoreCase);
        v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)a2 + 520LL))(*(_QWORD *)a2, 1LL);
        if ( v14 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x145D,
            (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v14,
            bIgnoreCase);
        v15 = v24;
        if ( *((volatile signed __int32 **)a2 + 2) != v24 )
        {
          v23 = v24;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
          v23 = (volatile signed __int32 *)*((_QWORD *)a2 + 2);
          *((_QWORD *)a2 + 2) = v15;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
        }
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)a2 + 1, &v28);
        v29 = 0LL;
        v16 = v28;
        v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 32LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
        v18 = v17(v16, &v29);
        v9 = v18;
        if ( v18 < 0 )
        {
          v19 = 5220LL;
LABEL_19:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v18);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
          return v9;
        }
        hwnd[0] = 0LL;
        v18 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v29 + 24LL))(v29, hwnd);
        v9 = v18;
        if ( v18 < 0 )
        {
          v19 = 5222LL;
          goto LABEL_19;
        }
        pvAttribute = 1;
        v20 = DwmSetWindowAttribute(hwnd[0], 0x404u, &pvAttribute, 4u);
        if ( v20 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1468,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v20);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
      }
      *((_BYTE *)a2 + 33) = 1;
    }
  }
  return 0LL;
}
