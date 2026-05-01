/*
 * XREFs of ?ShowExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x1802C74C0
 * Callers:
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800E4500 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1800AF724 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B3FB8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x1800E5D14 (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z @ 0x180206294 (-SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028BA2C (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180295BCC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?ControlCenterLaunchSkippedDueToShellNotReady@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ @ 0x1802CDE44 (-ControlCenterLaunchSkippedDueToShellNotReady@ControlCenterTelemetry@ControlCenterUITelemetry@@S.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18037339C (--1-$com_ptr_t@V-$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@Uerr_returncode.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1803733EC (--1-$test_data_control@V-$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@@tip2@@.c)
 *     _lambda_7cda3902acab0021de222adf02ff166b_::operator_void_(__cdecl_)(_TP_CALLBACK_INSTANCE___void____TP_TIMER__) @ 0x180373760 (_lambda_7cda3902acab0021de222adf02ff166b_--operator_void_(__cdecl_)(_TP_CALLBACK_INSTANCE___void.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@@1@XZ @ 0x180373770 (--C-$tip_test@V-$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$.c)
 *     ?ControlCenterLaunchSkippedDueToPolicy@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ @ 0x18037413C (-ControlCenterLaunchSkippedDueToPolicy@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ.c)
 *     ?ControlCenterPage_PrelaunchFailed@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ @ 0x1803741E4 (-ControlCenterPage_PrelaunchFailed@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ.c)
 *     ?IsControlCenterDisabledByPolicy@CControlCenterExperienceManager@@AEAA_NXZ @ 0x180375118 (-IsControlCenterDisabledByPolicy@CControlCenterExperienceManager@@AEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180377350 (-ensure_data@-$tip_test@V-$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@@tip2@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::ShowExperience(CControlCenterExperienceManager *this)
{
  _QWORD *v2; // rax
  CControlCenterExperienceManager *v3; // rcx
  unsigned int v4; // edi
  void (__stdcall *v5)(PTP_CALLBACK_INSTANCE, PVOID, PTP_TIMER); // rax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v7; // eax
  __int64 v8; // rdx
  char v9; // al
  __int128 v11; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v13; // [rsp+40h] [rbp+10h] BYREF
  char v14; // [rsp+48h] [rbp+18h] BYREF

  if ( *((_DWORD *)this + 40) != 2 )
  {
    v13 = 0LL;
    v2 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_ControlCenterDisabledTest,_tip_ControlCenterDisabledTest>>::ensure_data(&v13);
    tip2::details::shared_data<1,0,0>::start(*v2 + 8LL, &v11);
    if ( CControlCenterExperienceManager::IsControlCenterDisabledByPolicy(v3) )
    {
      *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_ControlCenterDisabledTest,_tip_ControlCenterDisabledTest>>::operator->(
                              &v13,
                              &v14)
               + 272LL) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_ControlCenterDisabledTest,_tip_ControlCenterDisabledTest>>::~test_data_control<tip2::details::merged_data<_tip_ControlCenterDisabledTest,_tip_ControlCenterDisabledTest>>(&v14);
      *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_ControlCenterDisabledTest,_tip_ControlCenterDisabledTest>>::operator->(
                              &v13,
                              &v14)
               + 273LL) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_ControlCenterDisabledTest,_tip_ControlCenterDisabledTest>>::~test_data_control<tip2::details::merged_data<_tip_ControlCenterDisabledTest,_tip_ControlCenterDisabledTest>>(&v14);
      ControlCenterUITelemetry::ControlCenterTelemetry::ControlCenterLaunchSkippedDueToPolicy();
      ControlCenterUITelemetry::ControlCenterTelemetry::ControlCenterLaunchSkippedDueToPolicy();
      v4 = -2147023636;
LABEL_16:
      wil::com_ptr_t<tip2::details::merged_data<_tip_ControlCenterDisabledTest,_tip_ControlCenterDisabledTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_ControlCenterDisabledTest,_tip_ControlCenterDisabledTest>,wil::err_returncode_policy>(&v13);
      return v4;
    }
    if ( !*((_BYTE *)this + 444) )
    {
      ControlCenterUITelemetry::ControlCenterTelemetry::ControlCenterLaunchSkippedDueToShellNotReady();
      v4 = -2147418113;
      goto LABEL_16;
    }
    if ( !*((_QWORD *)this + 80) )
    {
      v5 = (void (__stdcall *)(PTP_CALLBACK_INSTANCE, PVOID, PTP_TIMER))lambda_7cda3902acab0021de222adf02ff166b_::operator_void____cdecl____TP_CALLBACK_INSTANCE___void____TP_TIMER___();
      ThreadpoolTimer = CreateThreadpoolTimer(v5, this, 0LL);
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
        (struct _TP_TIMER **)this + 80,
        ThreadpoolTimer);
      ThreadpoolHelpers::SetRelativeThreadpoolTimerInMilliseconds(
        *((ThreadpoolHelpers **)this + 80),
        (struct _TP_TIMER *)0x2710,
        0);
    }
    if ( *((_QWORD *)this + 18) )
    {
      v7 = CControlCenterExperienceManager::PositionView(this);
      v4 = v7;
      if ( v7 < 0 )
      {
        v8 = 1142LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v7);
        goto LABEL_16;
      }
    }
    if ( *((_BYTE *)this + 763) )
    {
      *((_BYTE *)this + 763) = 0;
      ControlCenterUITelemetry::ControlCenterTelemetry::ControlCenterPage_PrelaunchFailed();
    }
    v9 = *((_BYTE *)this + 761);
    *((_BYTE *)this + 761) = 1;
    v7 = CSingleViewShellExperience::Show(
           (__int64)this + 120,
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)(v9 == 0));
    v4 = v7;
    if ( v7 < 0 )
    {
      v8 = 1155LL;
      goto LABEL_15;
    }
    if ( v13 )
      tip2::details::shared_data<1,0,0>::complete_without_lock(v13 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_ControlCenterDisabledTest,_tip_ControlCenterDisabledTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_ControlCenterDisabledTest,_tip_ControlCenterDisabledTest>,wil::err_returncode_policy>(&v13);
  }
  return 0LL;
}
