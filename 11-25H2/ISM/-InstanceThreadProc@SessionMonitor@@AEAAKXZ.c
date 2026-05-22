/*
 * XREFs of ?InstanceThreadProc@SessionMonitor@@AEAAKXZ @ 0x180085F68
 * Callers:
 *     ?ThreadProc@SessionMonitor@@CAKPEAX@Z @ 0x1800A5DB0 (-ThreadProc@SessionMonitor@@CAKPEAX@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180033A5C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180092B78 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??$start@V?$tip_test@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@0@XZ @ 0x1800A403C (--$start@V-$tip_test@V-$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@t.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A4314 (--1-$com_ptr_t@V-$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@Uerr_ret.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1800A43B4 (--1-$test_data_control@V-$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@1@XZ @ 0x1800A45B4 (--C-$tip_test@V-$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@tip2@@QE.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DL42009416@@@details@wil@@QEAA_NXZ @ 0x1800A5DBC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DL42009416@@@details@wil@@QEAA_NX.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1800A5F60 (-complete@-$tip_test@V-$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@t.c)
 */

__int64 __fastcall SessionMonitor::InstanceThreadProc(SessionMonitor *this)
{
  struct SessionMonitor *v1; // rbx
  const char *v2; // r9
  HWND Window; // rax
  const char *v4; // r9
  wil::details *v5; // rax
  const char *v6; // r9
  DWORD v7; // eax
  signed int LastError; // ebx
  bool v9; // sf
  bool v10; // sf
  HMODULE ModuleHandleW; // rax
  int X; // [rsp+20h] [rbp-E0h]
  HANDLE Handles[2]; // [rsp+60h] [rbp-A0h] BYREF
  MSG Msg; // [rsp+70h] [rbp-90h] BYREF
  WNDCLASSW hInstance; // [rsp+A0h] [rbp-60h] BYREF
  tagWNDCLASSW WndClass; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]
  SessionMonitor *v19; // [rsp+170h] [rbp+70h] BYREF
  wil::details *v20; // [rsp+178h] [rbp+78h] BYREF
  char v21; // [rsp+180h] [rbp+80h] BYREF
  __int64 v22; // [rsp+188h] [rbp+88h] BYREF

  v19 = this;
  v1 = SessionMonitor::_instance;
  v22 = 0LL;
  memset_0(&hInstance, 0, sizeof(hInstance));
  memset_0(&WndClass, 0, sizeof(WndClass));
  hInstance.lpfnWndProc = (WNDPROC)SessionMonitor::WndProc;
  hInstance.cbWndExtra = 8;
  hInstance.hInstance = GetModuleHandleW(0LL);
  hInstance.lpszClassName = L"SessionMonitorWindow";
  if ( !GetClassInfoW(hInstance.hInstance, L"SessionMonitorWindow", &WndClass) && !RegisterClassW(&hInstance) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xB9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\sessionmonitor.cpp",
      v2);
  Window = CreateWindowExW(
             0,
             hInstance.lpszClassName,
             &WindowName,
             0,
             0,
             0,
             0,
             0,
             HWND_MESSAGE,
             0LL,
             hInstance.hInstance,
             0LL);
  *(_QWORD *)v1 = Window;
  if ( !Window )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xC8,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\sessionmonitor.cpp",
      v4);
  if ( WTSRegisterSessionNotification(Window, 0) )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DL42009416>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DL42009416>::GetImpl'::`2'::impl) )
    {
      tip2::start<tip2::tip_test<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>>(&v19);
      tip2::tip_test<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>::complete(&v19);
      wil::com_ptr_t<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>,wil::err_returncode_policy>(&v19);
    }
  }
  else if ( GetLastError() == 1702 || GetLastError() == 1722 )
  {
    v20 = 0LL;
    v5 = (wil::details *)OpenEventW(0x100000u, 0, L"Global\\TermSrvReadyEvent");
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      &v20,
      v5);
    if ( !v20 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xD4,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\sessionmonitor.cpp",
        v6);
    Handles[0] = v20;
    Handles[1] = *((HANDLE *)v1 + 3);
    v7 = WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF);
    if ( v7 )
    {
      if ( v7 != 1 )
      {
        if ( v7 != -1 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x108,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\sessionmonitor.cpp",
            (const char *)0x8000FFFFLL,
            X);
        LastError = GetLastError();
        if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DL42009416>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DL42009416>::GetImpl'::`2'::impl) )
        {
          v9 = LastError < 0;
          if ( LastError > 0 )
          {
            LastError = (unsigned __int16)LastError | 0x80070000;
            v9 = LastError < 0;
          }
          if ( v9 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0xE8,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\sessionmonitor.cpp",
              (const char *)(unsigned int)LastError,
              X);
          goto LABEL_23;
        }
        tip2::start<tip2::tip_test<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>>(&v19);
        *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>::operator->(
                                &v19,
                                &v21)
                 + 264LL) = 1;
        goto LABEL_20;
      }
    }
    else if ( !WTSRegisterSessionNotification(*(HWND *)v1, 0) )
    {
      LastError = GetLastError();
      if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DL42009416>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DL42009416>::GetImpl'::`2'::impl) )
      {
        v10 = LastError < 0;
        if ( LastError > 0 )
        {
          LastError = (unsigned __int16)LastError | 0x80070000;
          v10 = LastError < 0;
        }
        if ( v10 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xFE,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\sessionmonitor.cpp",
            (const char *)(unsigned int)LastError,
            X);
        goto LABEL_23;
      }
      tip2::start<tip2::tip_test<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>>(&v19);
      *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>::operator->(
                              &v19,
                              &v21)
               + 265LL) = 1;
LABEL_20:
      tip2::test_data_control<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>::~test_data_control<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>(&v21);
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>::operator->(
                               &v19,
                               &v21)
                + 268LL) = LastError;
      tip2::test_data_control<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>::~test_data_control<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>(&v21);
      tip2::tip_test<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>::complete(&v19);
      wil::com_ptr_t<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>,wil::err_returncode_policy>(&v19);
    }
LABEL_23:
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(&v20);
  }
  memset(&Msg, 0, sizeof(Msg));
  while ( GetMessageW(&Msg, 0LL, 0, 0) )
    DispatchMessageW(&Msg);
  ModuleHandleW = GetModuleHandleW(0LL);
  UnregisterClassW(L"SessionMonitorWindow", ModuleHandleW);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(&v22);
  return 0LL;
}
