/*
 * XREFs of ?ExtractMonitorInfo@SearchAppPositionerHelpers@@YA?AUMonitorInfo@@AEBUtagRECT@@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Z @ 0x18018F0B4
 * Callers:
 *     ?ExtractMonitorInfo@SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA?AUMonitorInfo@@AEBUtagRECT@@@Z @ 0x18018F030 (-ExtractMonitorInfo@SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA-AUMonitorInfo@@AEBUtagRECT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetDisplayMonitorInfoForMonitor@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x18005155C (-GetDisplayMonitorInfoForMonitor@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UID.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800566E4 (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18007CC04 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Id@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800C2740 (-Id@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal.c)
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x1801B7678 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?Current@TaskbarLayout@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801CCC38 (-Current@TaskbarLayout@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ?GetShellViewButtonBoundsInRawPixels@?$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_KAEBW4ShellView@Shell@UI@WindowsUdk@3@@Z @ 0x1801CCCB0 (-GetShellViewButtonBoundsInRawPixels@-$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayou.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$check_bool@H@winrt@@YAHHAEBUslim_source_location@impl@0@@Z @ 0x1803D5468 (--$check_bool@H@winrt@@YAHHAEBUslim_source_location@impl@0@@Z.c)
 *     ??$check_bool@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@winrt@@YA?AV?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@V123@AEBUslim_source_location@impl@0@@Z @ 0x1803D5488 (--$check_bool@V-$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@winrt@@YA-AV-$ComPtr@UIServiceProvid.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall SearchAppPositionerHelpers::ExtractMonitorInfo(__int64 a1, const RECT *a2, __int64 **a3)
{
  __int64 *v3; // r12
  __int64 v5; // r14
  HMONITOR v6; // r15
  unsigned int MonitorInfoW; // eax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, SID *, GUID *, __int64 *); // rbx
  unsigned int v10; // eax
  __int64 v11; // rbx
  int (__fastcall *v12)(__int64, HMONITOR, SID *, GUID *, int *); // rdi
  HMONITOR v13; // rdx
  HWND WindowW; // rax
  RECT v15; // xmm0
  int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  float *v20; // rax
  float v21; // xmm2_4
  float v22; // xmm3_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  const char *v25; // r9
  void (__fastcall ***v27)(_QWORD, __int64 *, __int64 *); // [rsp+30h] [rbp-128h] BYREF
  __int64 *v28; // [rsp+38h] [rbp-120h] BYREF
  int v29[2]; // [rsp+40h] [rbp-118h] BYREF
  void (__fastcall ***v30)(_QWORD, __int64 *, __int64 *); // [rsp+48h] [rbp-110h] BYREF
  __int64 v31; // [rsp+50h] [rbp-108h] BYREF
  int v32; // [rsp+58h] [rbp-100h] BYREF
  __int128 v33; // [rsp+60h] [rbp-F8h]
  void (__fastcall ***v34)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp-E8h] BYREF
  void (__fastcall ***v35)(_QWORD, __int64 *, __int64 *); // [rsp+78h] [rbp-E0h] BYREF
  __int64 *v36; // [rsp+80h] [rbp-D8h]
  RECT v37; // [rsp+88h] [rbp-D0h] BYREF
  RECT rcMonitor; // [rsp+A0h] [rbp-B8h] BYREF
  RECT rcWork; // [rsp+B0h] [rbp-A8h]
  __int128 v40; // [rsp+C0h] [rbp-98h] BYREF
  __m256i v41; // [rsp+D0h] [rbp-88h] BYREF
  int v42; // [rsp+F0h] [rbp-68h]
  struct tagMONITORINFO mi; // [rsp+100h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v3 = (__int64 *)a3;
  v5 = a1;
  v36 = (__int64 *)a3;
  v32 = 0;
  v33 = 0LL;
  v28 = *a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v28);
  winrt::check_bool<Microsoft::WRL::ComPtr<IServiceProvider>>(&v37, &v28, &v32);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37.left);
  memset_0(&rcMonitor, 0, 0x54uLL);
  v6 = MonitorFromRect(a2, 1u);
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  v32 = 0;
  v33 = 0LL;
  MonitorInfoW = GetMonitorInfoW(v6, &mi);
  winrt::check_bool<int>(MonitorInfoW, &v32);
  rcMonitor = mi.rcMonitor;
  v31 = 0LL;
  v32 = 0;
  v33 = 0LL;
  v8 = *v3;
  v9 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)*v3 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
  v10 = v9(v8, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v31);
  winrt::check_hresult(&v27, v10, &v32);
  *(_QWORD *)v29 = 0LL;
  v11 = v31;
  v12 = *(int (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v31 + 72LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v29);
  if ( v12(v11, v6, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, v29) < 0 )
  {
    rcWork = mi.rcWork;
    v41.m256i_i32[1] = 3;
    v40 = 0LL;
  }
  else
  {
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    if ( WindowW && GetPropW(WindowW, L"IsAutoHideEnabled") )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(_QWORD, RECT *))(**(_QWORD **)v29 + 152LL))(*(_QWORD *)v29, &v37);
      v15 = v37;
    }
    else
    {
      v15 = mi.rcWork;
    }
    rcWork = v15;
    v41.m256i_i32[1] = 3;
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int8 *))(**(_QWORD **)v29 + 80LL))(*(_QWORD *)v29, &v41.m256i_i8[4]);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x25,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\SearchAppPositionerHelpers.h",
        (const char *)(unsigned int)v16);
    v40 = 0LL;
    v17 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)v29 + 112LL))(*(_QWORD *)v29, &v40);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x27,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\SearchAppPositionerHelpers.h",
        (const char *)(unsigned int)v17);
    LODWORD(v27) = 0;
    v32 = 0;
    v33 = 0LL;
    v18 = (*(__int64 (__fastcall **)(_QWORD, void (__fastcall ****)(_QWORD, __int64 *, __int64 *)))(**(_QWORD **)v29
                                                                                                  + 96LL))(
            *(_QWORD *)v29,
            &v27);
    winrt::check_hresult(&v30, v18, &v32);
    v41.m256i_i8[1] = (_DWORD)v27 != 0;
  }
  v41.m256i_i8[0] = mi.dwFlags == 1;
  v41.m256i_i32[2] = ExperienceManagerUtils::GetPerMonitorDpi((ExperienceManagerUtils *)v6, v13);
  v41.m256i_i32[7] = 1;
  v42 = 1;
  *(_OWORD *)((char *)&v41.m256i_u64[1] + 4) = 0LL;
  try
  {
    winrt::WindowsUdk::UI::Shell::TaskbarLayout::Current();
    winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::GetDisplayMonitorInfoForMonitor(
      &v28,
      &v35,
      (__int64)v6);
    *(_QWORD *)&v37.left = 0LL;
    if ( winrt::Windows::Foundation::operator!=(&v35, &v37) )
      v41.m256i_i32[7] = winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View((__int64 *)&v35);
    *(_QWORD *)&v37.left = 0LL;
    v32 = 0;
    v33 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64 *, HMONITOR, RECT *))(*v28 + 64))(v28, v6, &v37);
    winrt::check_hresult(&v30, v19, &v32);
    v30 = *(void (__fastcall ****)(_QWORD, __int64 *, __int64 *))&v37.left;
    v27 = 0LL;
    if ( winrt::Windows::Foundation::operator!=(&v30, &v27) )
      v42 = winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View((__int64 *)&v30);
    LODWORD(v27) = 1;
    winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayout<winrt::WindowsUdk::UI::Shell::ITaskbarLayout>::GetShellViewButtonBoundsInRawPixels(
      &v28,
      &v34,
      v6,
      &v27);
    *(_QWORD *)&v37.left = 0LL;
    if ( winrt::Windows::Foundation::operator!=(&v34, &v37) )
    {
      v20 = (float *)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
                       (__int64 *)&v34,
                       &v37);
      v21 = *v20;
      v22 = v20[1];
      v23 = v20[2];
      v24 = v20[3];
      v41.m256i_i32[3] = (int)*v20;
      v41.m256i_i32[4] = (int)v22;
      v41.m256i_i32[5] = (int)(float)(v21 + v23);
      v41.m256i_i32[6] = (int)(float)(v22 + v24);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v34);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v30);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v35);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v28);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x54,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\SearchAppPositionerHelpers.h",
      v25);
    v5 = a1;
    v3 = v36;
  }
  v41.m256i_i8[1] = 0;
  *(RECT *)v5 = rcMonitor;
  *(RECT *)(v5 + 16) = rcWork;
  *(_OWORD *)(v5 + 32) = v40;
  *(__m256i *)(v5 + 48) = v41;
  *(_DWORD *)(v5 + 80) = v42;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v29);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v3);
  return v5;
}
