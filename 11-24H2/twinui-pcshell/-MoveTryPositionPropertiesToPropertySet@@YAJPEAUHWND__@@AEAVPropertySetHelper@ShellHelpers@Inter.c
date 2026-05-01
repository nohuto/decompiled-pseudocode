/*
 * XREFs of ?MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Internal@Windows@@@Z @ 0x1802F8AEC
 * Callers:
 *     _lambda_a5b8d4cd5e95e3c20f6ae71426157a21_::operator() @ 0x1802F63F8 (_lambda_a5b8d4cd5e95e3c20f6ae71426157a21_--operator().c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1802FCC30 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18003EE68 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180123324 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CheckCapabilityFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEBGPEA_N@Z @ 0x1801F74E4 (-CheckCapabilityFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEBGPEA_N@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _lambda_3a9e679f41fabe06be00bfd1589ed9cc_::operator() @ 0x1802F60E0 (_lambda_3a9e679f41fabe06be00bfd1589ed9cc_--operator().c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MoveTryPositionPropertiesToPropertySet(
        HWND a1,
        struct Windows::Internal::ShellHelpers::PropertySetHelper *a2)
{
  bool *v3; // r9
  __int64 v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned int PropW; // ebx
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // r8
  unsigned int v12; // ebx
  __int64 v13; // r8
  unsigned int v14; // ebx
  __int64 v15; // r8
  unsigned int v16; // ebx
  __int64 v17; // r8
  unsigned __int16 v19; // [rsp+20h] [rbp-50h] BYREF
  HWND hWnd; // [rsp+28h] [rbp-48h] BYREF
  HWND *p_hWnd; // [rsp+30h] [rbp-40h] BYREF
  char v22; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v24; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  hWnd = a1;
  if ( (unsigned int)GetPropW(a1, L"TryPositionView") )
  {
    p_hWnd = &hWnd;
    v22 = 1;
    LOBYTE(v19) = 0;
    if ( (int)CallerIdentity::CheckCapabilityFromWindow((CallerIdentity *)hWnd, (HWND)&stru_180792B88, &v19, v3) >= 0
      && (_BYTE)v19 )
    {
      v24 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView", 0x10u, 0xFu);
      v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(a2, (__int64)v24, v4, 1);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 454LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v5);
        v22 = 0;
        lambda_3a9e679f41fabe06be00bfd1589ed9cc_::operator()(&p_hWnd);
        return v6;
      }
      PropW = (unsigned int)GetPropW(hWnd, L"TryPositionView.Left");
      v24 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Left", 0x15u, 0x14u);
      v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v24, v9, PropW);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 458LL;
        goto LABEL_16;
      }
      v10 = (unsigned int)GetPropW(hWnd, L"TryPositionView.Top");
      v24 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Top", 0x14u, 0x13u);
      v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v24, v11, v10);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 462LL;
        goto LABEL_16;
      }
      v12 = (unsigned int)GetPropW(hWnd, L"TryPositionView.Right");
      v24 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"TryPositionView.Right",
        0x16u,
        0x15u);
      v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v24, v13, v12);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 466LL;
        goto LABEL_16;
      }
      v14 = (unsigned int)GetPropW(hWnd, L"TryPositionView.Bottom");
      v24 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"TryPositionView.Bottom",
        0x17u,
        0x16u);
      v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v24, v15, v14);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 470LL;
        goto LABEL_16;
      }
      v16 = (unsigned int)GetPropW(hWnd, L"TryPositionView.Flags");
      v24 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"TryPositionView.Flags",
        0x16u,
        0x15u);
      v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v24, v17, v16);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 474LL;
        goto LABEL_16;
      }
    }
    v22 = 0;
    lambda_3a9e679f41fabe06be00bfd1589ed9cc_::operator()(&p_hWnd);
  }
  return 0LL;
}
