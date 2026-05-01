/*
 * XREFs of ??0GamingFallbackWindow@@QEAA@PEAVGamingPosturePositioner@@@Z @ 0x1804F85E8
 * Callers:
 *     ??0GamingPosturePositioner@@QEAA@XZ @ 0x1804F8838 (--0GamingPosturePositioner@@QEAA@XZ.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A5D64 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D25C0 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??$emplace@VActivityThreadWatcher@wil@@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVActivityThreadWatcher@wil@@$$QEAV23@@Z @ 0x18032A9E0 (--$emplace@VActivityThreadWatcher@wil@@@-$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVAct.c)
 *     ??1?$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ @ 0x18032CFA4 (--1-$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x180335858 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ??$ConstructedFallbackWindow@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@@Z @ 0x1804F4A80 (--$ConstructedFallbackWindow@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEA.c)
 *     ?WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x180507228 (-WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA-AVActivityThreadWatcher@wil@@PE.c)
 */

// Hidden C++ exception states: #wind=2
GamingFallbackWindow *__fastcall GamingFallbackWindow::GamingFallbackWindow(
        GamingFallbackWindow *this,
        struct GamingPosturePositioner *a2)
{
  __int64 *v4; // rdi
  __int64 v5; // rax
  const char *v6; // r9
  __int64 WindowInBand; // rax
  signed int Error; // eax
  char IsEnabled; // al
  HWND v10; // rcx
  const char *v11; // r9
  int v13; // [rsp+20h] [rbp-E0h]
  WNDCLASSEXW v14; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v15[96]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v16[80]; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  *(_QWORD *)this = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,std::tuple<IImeContextMenuExperienceManager>>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)this + 2) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<GamingFallbackWindow>::`vftable'{for `winrt::impl::producers_base<GamingFallbackWindow,std::tuple<IInspectable>>'};
  *((_QWORD *)this + 1) = &winrt::impl::heap_implements<GamingFallbackWindow>::`vftable'{for `winrt::impl::root_implements<GamingFallbackWindow,IInspectable>'};
  v4 = (__int64 *)((char *)this + 24);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v15[80] = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    v5 = GamingPosturePositionerTelemetryProvider::WatchCurrentThread(v16, "GamingFallbackWindow::ctor");
    std::optional<wil::ActivityThreadWatcher>::emplace<wil::ActivityThreadWatcher>((__int64)v15, v5);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v16);
  }
  *((_QWORD *)this + 4) = a2;
  v14.cbSize = 80;
  memset_0(&v14.style, 0, 0x4CuLL);
  v14.style = 512;
  v14.lpfnWndProc = (WNDPROC)GamingFallbackWindow::FallbackWndProc;
  v14.hInstance = &_ImageBase;
  v14.lpszClassName = L"GamingFallbackWindow";
  v14.cbWndExtra = 8;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    if ( !RegisterClassExW(&v14) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xEB2,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
        v6);
  }
  else
  {
    RegisterClassExW(&v14);
  }
  WindowInBand = CreateWindowInBand(
                   136315008LL,
                   v14.lpszClassName,
                   0LL,
                   0x80000000LL,
                   0,
                   0,
                   0,
                   0,
                   0LL,
                   0LL,
                   &_ImageBase,
                   this,
                   1);
  *v4 = WindowInBand;
  if ( WindowInBand )
    Error = 0;
  else
    Error = ResultFromKnownLastError();
  if ( Error < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xEC5,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)Error,
      v13);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl);
  v10 = (HWND)*v4;
  if ( IsEnabled )
  {
    if ( !SetPropW(v10, L"UIA_WindowVisibilityOverridden", HANDLE_FLAG_PROTECT_FROM_CLOSE) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xECC,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
        v11);
    GamingPosturePositionerTelemetryProvider::ConstructedFallbackWindow<HWND__ * &>(v4);
  }
  else
  {
    SetPropW(v10, L"UIA_WindowVisibilityOverridden", HANDLE_FLAG_PROTECT_FROM_CLOSE);
  }
  std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::~_Optional_destruct_base<wil::ActivityThreadWatcher,0>((wil::ActivityThreadWatcher *)v15);
  return this;
}
