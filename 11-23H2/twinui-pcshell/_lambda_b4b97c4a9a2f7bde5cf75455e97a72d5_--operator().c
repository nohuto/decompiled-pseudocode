/*
 * XREFs of _lambda_b4b97c4a9a2f7bde5cf75455e97a72d5_::operator() @ 0x180236F2C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_b4b97c4a9a2f7bde5cf75455e97a72d5__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x1802482F0 (std--_Func_impl_no_alloc__lambda_b4b97c4a9a2f7bde5cf75455e97a72d5__void_winrt--Wind_ea_1802482F0.c)
 * Callees:
 *     ?IsDashboardVisible@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18005A34C (-IsDashboardVisible@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RevokeProcessesForAnimation@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBI@3@@Z @ 0x180189C20 (-RevokeProcessesForAnimation@-$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGes.c)
 *     ?DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJXZ @ 0x1801BDCB0 (-DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ @ 0x180418798 (-GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ.c)
 *     ?GetForInputSite@InputGestureManager@Input@Internal@UI@Windows@winrt@@SA@AEBUInputSite@23456@@Z @ 0x18041881C (-GetForInputSite@InputGestureManager@Input@Internal@UI@Windows@winrt@@SA@AEBUInputSite@23456@@Z.c)
 *     ??$DashboardInteracted@Uguid@winrt@@IAEA_NPEBGPEBGAEAY0BG@$$CBGAEBQEBG@DashboardManagerTelemetry@@SAX$$QEAUguid@winrt@@$$QEAIAEA_N$$QEAPEBG3AEAY0BG@$$CBGAEBQEBG@Z @ 0x1806938C0 (--$DashboardInteracted@Uguid@winrt@@IAEA_NPEBGPEBGAEAY0BG@$$CBGAEBQEBG@DashboardManagerTelemetry.c)
 *     ??$try_as@UIDashboardExtension6@Dashboard@Shell@UI@WindowsUdk@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x180694A84 (--$try_as@UIDashboardExtension6@Dashboard@Shell@UI@WindowsUdk@winrt@@@IUnknown@Foundation@Window.c)
 *     ?GetWidgetsAppProcessId@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension6@UDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180696E98 (-GetWidgetsAppProcessId@-$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension6@UDashboardE.c)
 *     ?value@?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEGBAAEBW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@XZ @ 0x180698FF0 (-value@-$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEGBAAEBW4Das.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_b4b97c4a9a2f7bde5cf75455e97a72d5_::operator()(
        winrt::Windows::Internal::Shell::implementation::DashboardManager **a1,
        IUnknown **a2)
{
  const char *v2; // r9
  winrt::Windows::Internal::Shell::implementation::DashboardManager **v3; // rbx
  IUnknown **v4; // rdi
  int v5; // eax
  HRESULT v6; // eax
  unsigned int *v7; // rdx
  __int8 v8; // r14
  __int8 v9; // r15
  __int8 v10; // r12
  __int8 v11; // r13
  __int8 v12; // al
  __int8 v13; // cl
  __int8 v14; // r8
  __int16 v15; // r9
  __int16 v16; // r10
  IUnknown *v17; // rcx
  struct IUnknownVtbl *lpVtbl; // rax
  int v19; // eax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  char IsDashboardVisible; // [rsp+40h] [rbp-78h] BYREF
  int WidgetsAppProcessId; // [rsp+44h] [rbp-74h] BYREF
  IUnknown **v24; // [rsp+48h] [rbp-70h] BYREF
  char v25; // [rsp+50h] [rbp-68h]
  __int8 v26; // [rsp+51h] [rbp-67h]
  __int8 v27; // [rsp+52h] [rbp-66h]
  __int8 v28; // [rsp+53h] [rbp-65h]
  __int8 v29; // [rsp+54h] [rbp-64h]
  char v30; // [rsp+55h] [rbp-63h]
  char v31; // [rsp+56h] [rbp-62h]
  char v32; // [rsp+57h] [rbp-61h]
  _QWORD *v33; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v34[2]; // [rsp+60h] [rbp-58h] BYREF
  __m128i v35; // [rsp+70h] [rbp-48h] BYREF
  __m128i v36; // [rsp+80h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  try
  {
    v4 = a2;
    v3 = a1;
    v36.m128i_i64[0] = (__int64)a1;
    v24 = a2;
    IsDashboardVisible = 0;
    IsDashboardVisible = winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardVisible(*a1);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x7F8,
      (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      v2);
    v3 = (winrt::Windows::Internal::Shell::implementation::DashboardManager **)v36.m128i_i64[0];
    v4 = v24;
  }
  if ( *((_BYTE *)v3 + 96) )
  {
    v5 = winrt::Windows::Internal::Shell::implementation::DashboardManager::DisableWindowHardeningPolicy();
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7FC,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)(unsigned int)v5);
    v6 = CoAllowSetForegroundWindow(*v4, 0LL);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7FD,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)(unsigned int)v6);
  }
  v7 = (unsigned int *)std::optional<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType>::value(v3 + 3);
  v8 = *((_BYTE *)v3 + 17);
  v9 = *((_BYTE *)v3 + 18);
  v10 = *((_BYTE *)v3 + 19);
  v11 = *((_BYTE *)v3 + 20);
  v12 = *((_BYTE *)v3 + 21);
  v13 = *((_BYTE *)v3 + 22);
  v14 = *((_BYTE *)v3 + 23);
  v15 = *((_WORD *)v3 + 7);
  v16 = *((_WORD *)v3 + 6);
  v36.m128i_i32[0] = *((_DWORD *)v3 + 2);
  v36.m128i_i16[2] = v16;
  v36.m128i_i16[3] = v15;
  v36.m128i_i8[8] = *((_BYTE *)v3 + 16);
  v36.m128i_i8[9] = v8;
  v36.m128i_i8[10] = v9;
  v36.m128i_i8[11] = v10;
  v36.m128i_i8[12] = v11;
  v36.m128i_i8[13] = v12;
  v36.m128i_i8[14] = v13;
  v36.m128i_i8[15] = v14;
  v17 = *v4;
  lpVtbl = (*v4)->lpVtbl;
  v35 = v36;
  v19 = ((__int64 (__fastcall *)(IUnknown *, __m128i *, _QWORD))lpVtbl[2].Release)(v17, &v35, *v7);
  if ( v19 < 0 )
    winrt::throw_hresult((unsigned int)v19);
  winrt::Windows::Foundation::IUnknown::try_as<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension6>(v4, &v36);
  if ( v36.m128i_i64[0] )
  {
    winrt::Windows::UI::Internal::Input::InputSite::GetForCurrentProcess();
    winrt::Windows::UI::Internal::Input::InputGestureManager::GetForInputSite((const struct winrt::Windows::UI::Internal::Input::InputSite *)&v33);
    WidgetsAppProcessId = winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension6<winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::GetWidgetsAppProcessId(v4);
    v35.m128i_i64[0] = (__int64)&WidgetsAppProcessId;
    v35.m128i_i32[2] = 1;
    winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::RevokeProcessesForAnimation(
      (__int64 *)&v33,
      &v35);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v33);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v34);
  }
  v20 = v3 + 8;
  if ( (unsigned __int64)v3[11] >= 8 )
    v20 = (_QWORD *)*v20;
  v34[0] = v20;
  v21 = v3 + 4;
  if ( (unsigned __int64)v3[7] >= 8 )
    v21 = (_QWORD *)*v21;
  v33 = v21;
  WidgetsAppProcessId = *(_DWORD *)std::optional<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType>::value(v3 + 3);
  v24 = (IUnknown **)v3[1];
  v25 = *((_BYTE *)v3 + 16);
  v26 = v8;
  v27 = v9;
  v28 = v10;
  v29 = v11;
  v30 = *((_BYTE *)v3 + 21);
  v31 = *((_BYTE *)v3 + 22);
  v32 = *((_BYTE *)v3 + 23);
  DashboardManagerTelemetry::DashboardInteracted<winrt::guid,unsigned int,bool &,unsigned short const *,unsigned short const *,unsigned short const (&)[22],unsigned short const * const &>(
    (unsigned int)&v24,
    (unsigned int)&WidgetsAppProcessId,
    (unsigned int)&IsDashboardVisible,
    (unsigned int)&v33,
    (__int64)v34);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v36);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v4);
}
