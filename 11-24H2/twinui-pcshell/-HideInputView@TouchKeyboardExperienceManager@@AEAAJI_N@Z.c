/*
 * XREFs of ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x1800ABA14
 * Callers:
 *     ?HideAllInputViews@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1801A82FC (-HideAllInputViews@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     _lambda_fc11afed419eac497169c2fc21e58d6f_::operator() @ 0x18046F208 (_lambda_fc11afed419eac497169c2fc21e58d6f_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x1800803D4 (-SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1800ABEA0 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJI_N0@Z @ 0x1800ABFC8 (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJI_N0@Z.c)
 *     ?IsAppDefaultView@KBViewInfo@@QEAA_NXZ @ 0x1800AC204 (-IsAppDefaultView@KBViewInfo@@QEAA_NXZ.c)
 *     ?UnboostPriority@KBViewInfo@@QEAAXXZ @ 0x1800AD698 (-UnboostPriority@KBViewInfo@@QEAAXXZ.c)
 *     ?UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z @ 0x18018DC14 (-UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z.c)
 *     ??$StoryboardCompleted@AEAU?$atomic@I@std@@_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU?$atomic@I@std@@$$QEA_N1@Z @ 0x18018DE04 (--$StoryboardCompleted@AEAU-$atomic@I@std@@_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU-.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z @ 0x1801D9404 (-IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x1801FFF34 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     _anonymous_namespace_::StringifyApplicationState @ 0x180207324 (_anonymous_namespace_--StringifyApplicationState.c)
 *     ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x18021056C (-AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z.c)
 *     _anonymous_namespace_::IsAnimationEnabled @ 0x18021097C (_anonymous_namespace_--IsAnimationEnabled.c)
 *     ?ComputePrimaryViewAnimationDurations@AnimationCoordinationHelper@KeyboardHosting@@SA?AV?$tuple@II@std@@_N0AEBUtagRECT@@@Z @ 0x180232E50 (-ComputePrimaryViewAnimationDurations@AnimationCoordinationHelper@KeyboardHosting@@SA-AV-$tuple@.c)
 *     ?GetInputAppState@TouchKeyboardExperienceManager@@AEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x18028F06C (-GetInputAppState@TouchKeyboardExperienceManager@@AEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x180292538 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 *     ?NotifyPrimaryViewAnimationStarting@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@I@Z @ 0x1802B3EF0 (-NotifyPrimaryViewAnimationStarting@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@I@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C4CCC (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ??$PrimaryViewAnimationStarting@_NAEBI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_NAEBI@Z @ 0x1802C7D74 (--$PrimaryViewAnimationStarting@_NAEBI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_NAEBI@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$HideAnimationRejected@AEAIPEBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI$$QEAPEBG@Z @ 0x18046899C (--$HideAnimationRejected@AEAIPEBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI$$QEAPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::HideInputView(
        TouchKeyboardExperienceManager *this,
        __int64 a2,
        char a3)
{
  unsigned int v4; // r12d
  int ViewInfo; // ebx
  __int64 v7; // rdx
  KBViewInfo *v9; // r14
  unsigned int InputAppState; // eax
  const struct tagRECT *v11; // rdx
  __int128 *v12; // rcx
  __int128 v13; // xmm0
  const struct tagRECT *v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // ebx
  int v17; // eax
  char v18; // al
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, __int64 *); // rbx
  __int64 v21; // rdx
  int v22; // eax
  char v23; // al
  bool v24; // r8
  bool IsAppDefaultView; // al
  __int64 v26; // rcx
  bool v27; // zf
  __int64 (__fastcall *v28)(__int64, __int64); // rax
  char v29; // [rsp+20h] [rbp-49h] BYREF
  char v30; // [rsp+21h] [rbp-48h] BYREF
  char v31; // [rsp+22h] [rbp-47h] BYREF
  char v32; // [rsp+23h] [rbp-46h] BYREF
  _BYTE v33[4]; // [rsp+24h] [rbp-45h] BYREF
  __int64 v34; // [rsp+28h] [rbp-41h] BYREF
  KBViewInfo *v35[2]; // [rsp+30h] [rbp-39h] BYREF
  HWND hwnd; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v37; // [rsp+48h] [rbp-21h] BYREF
  __int64 v38; // [rsp+50h] [rbp-19h] BYREF
  unsigned int v39[2]; // [rsp+58h] [rbp-11h] BYREF
  __int128 v40; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT v41; // [rsp+70h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = a2;
  LODWORD(v34) = a2;
  *(_OWORD *)v35 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(this, a2, v35);
  if ( ViewInfo < 0 )
  {
    v7 = 1394LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
LABEL_4:
    if ( v35[1] )
      std::_Ref_count_base::_Decref(v35[1]);
    return (unsigned int)ViewInfo;
  }
  v9 = v35[0];
  if ( !*((_DWORD *)v35[0] + 39) || !(unsigned __int8)anonymous_namespace_::IsAnimationEnabled() )
    goto LABEL_11;
  InputAppState = TouchKeyboardExperienceManager::GetInputAppState(this);
  if ( InputAppState != 1 )
  {
    hwnd = (HWND)anonymous_namespace_::StringifyApplicationState(InputAppState);
    TouchKeyboardExperienceTelemetryLogger::HideAnimationRejected<unsigned int &,unsigned short const *>(&v34, &hwnd);
LABEL_11:
    ViewInfo = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v9 + 1) + 40LL))(*((_QWORD *)v9 + 1), 1LL);
    if ( ViewInfo < 0 )
    {
      v7 = 1408LL;
      goto LABEL_3;
    }
    TouchKeyboardExperienceManager::SetViewInfoCloakAndReportVisibilityChanged(this, v9, 1u);
    v23 = *((_BYTE *)this + 937);
    *((_BYTE *)this + 937) = 0;
    if ( v23 )
    {
      v32 = 1;
      v33[0] = 0;
      TouchKeyboardExperienceTelemetryLogger::StoryboardCompleted<std::atomic<unsigned int> &,bool,bool>(
        (char *)this + 932,
        v33,
        &v32);
      TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(
        this,
        *((_DWORD *)this + 233),
        L"Hide",
        0);
    }
    goto LABEL_39;
  }
  if ( *((_DWORD *)this + 153) == *((_DWORD *)v9 + 26) )
  {
    v41 = 0LL;
    v40 = 0LL;
    if ( KeyboardHosting::IsRectNull((KBViewInfo *)((char *)v9 + 136), v11) )
      v13 = *(_OWORD *)((char *)v9 + 120);
    else
      v13 = *v12;
    v40 = v13;
    if ( !(unsigned __int8)std::_Atomic_storage<bool,1>::load((char *)this + 937)
      || *((_DWORD *)this + 233) != *((_DWORD *)v35[0] + 26)
      || !KeyboardHosting::IsRectNull((KeyboardHosting *)&v40, v14) )
    {
      KeyboardHosting::AnimationCoordinationHelper::ComputePrimaryViewAnimationDurations(v39, 0LL, v15, &v40);
      v16 = v39[0];
      v37 = v39[0];
      v29 = 0;
      TouchKeyboardExperienceTelemetryLogger::PrimaryViewAnimationStarting<bool,unsigned int const &>(&v29, &v37);
      v17 = KeyboardHosting::TabTipAdapter::NotifyPrimaryViewAnimationStarting(
              *((KeyboardHosting::TabTipAdapter **)this + 73),
              &v41,
              v16);
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5A3,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v17);
    }
    v18 = *((_BYTE *)this + 936);
    *((_BYTE *)this + 936) = 0;
    if ( v18 )
    {
      v38 = 0LL;
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 104, &v38);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v38);
      v30 = 1;
      v31 = 1;
      TouchKeyboardExperienceTelemetryLogger::StoryboardCompleted<std::atomic<unsigned int> &,bool,bool>(
        (char *)this + 932,
        &v31,
        &v30);
      TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(
        this,
        *((_DWORD *)this + 233),
        L"Show",
        0);
    }
    ViewInfo = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 101) + 96LL))(*((_QWORD *)this + 101));
    if ( ViewInfo < 0 )
    {
      v7 = 1455LL;
      goto LABEL_3;
    }
    ViewInfo = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 101) + 80LL))(
                 *((_QWORD *)this + 101),
                 1000LL,
                 0LL);
    if ( ViewInfo < 0 )
    {
      v7 = 1456LL;
      goto LABEL_3;
    }
    *((_BYTE *)this + 938) = 1;
    *((_BYTE *)this + 937) = 1;
    _InterlockedExchange((volatile __int32 *)this + 233, *((_DWORD *)this + 153));
LABEL_39:
    v9 = v35[0];
    v4 = v34;
    goto LABEL_40;
  }
  v34 = 0LL;
  v19 = *((_QWORD *)v9 + 1);
  v20 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
  ViewInfo = v20(v19, &v34);
  if ( ViewInfo < 0 )
  {
    v21 = 1465LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
    goto LABEL_4;
  }
  hwnd = 0LL;
  ViewInfo = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v34 + 24LL))(v34, &hwnd);
  if ( ViewInfo < 0 )
  {
    v21 = 1467LL;
    goto LABEL_31;
  }
  v22 = TouchKeyboardExperienceManager::AnimateInputView(this, v9, hwnd, 0);
  if ( v22 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5BC,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v22);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
LABEL_40:
  TouchKeyboardExperienceManager::FireInputPaneHidingEvent(this, v4, 0);
  *(_OWORD *)((char *)v9 + 120) = 0LL;
  *(_OWORD *)((char *)v9 + 136) = 0LL;
  if ( a3 )
  {
    ViewInfo = TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(this, v4, v24, 1);
    if ( ViewInfo < 0 )
    {
      v7 = 1484LL;
      goto LABEL_3;
    }
  }
  IsAppDefaultView = KBViewInfo::IsAppDefaultView(v9);
  v26 = *(_QWORD *)v9;
  v27 = !IsAppDefaultView;
  v28 = *(__int64 (__fastcall **)(__int64, __int64))(**(_QWORD **)v9 + 344LL);
  if ( v27 )
  {
    ViewInfo = v28(v26, 1LL);
    if ( ViewInfo < 0 )
    {
      v7 = 1497LL;
      goto LABEL_3;
    }
  }
  else
  {
    ViewInfo = v28(v26, 3LL);
    if ( ViewInfo < 0 )
    {
      v7 = 1491LL;
      goto LABEL_3;
    }
  }
  if ( *((_BYTE *)v9 + 154) )
  {
    SingleViewLightDismissHelper::UnregisterWithLightDismiss((TouchKeyboardExperienceManager *)((char *)this + 592));
    *((_DWORD *)this + 152) = -1;
  }
  KBViewInfo::UnboostPriority(v9);
  if ( v35[1] )
    std::_Ref_count_base::_Decref(v35[1]);
  return 0LL;
}
