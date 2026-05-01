/*
 * XREFs of ?ShowSnapBarOnMonitor@SnapFlyoutHost@@AEAAXUPoint@Foundation@Windows@winrt@@@Z @ 0x180272A2C
 * Callers:
 *     SnapFlyoutHost::ShowSnapBarOnMonitorAsync$_ResumeCoro$1 @ 0x180272C50 (SnapFlyoutHost--ShowSnapBarOnMonitorAsync$_ResumeCoro$1.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::Foundation::Point___lambda_95fe7ae5c51dffe541392b6a2acce5a3___::Invoke @ 0x1805B3330 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_1805B3330.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800C6394 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??$SnapBar_ShowSnapBarOnMonitor@AEBMAEBM@SnapFlyoutTelemetry@@SAXAEBM0@Z @ 0x1800E943C (--$SnapBar_ShowSnapBarOnMonitor@AEBMAEBM@SnapFlyoutTelemetry@@SAXAEBM0@Z.c)
 *     ?Run@?$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIImmersiveShellThreadDispatcherCallback@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18011590C (-Run@-$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIIm.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??$_Find_lower_bound@PEAUHWND__@@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@1@AEBQEAUHWND__@@@Z @ 0x1801B0FE8 (--$_Find_lower_bound@PEAUHWND__@@@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UExeData@@U-$less@PEAUHWND.c)
 *     ?GetVisibleSnapBar@SnapFlyoutHost@@AEAA?AUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@XZ @ 0x180271914 (-GetVisibleSnapBar@SnapFlyoutHost@@AEAA-AUSnapFlyoutInstance@SnapComponent@Shell@Internal@Window.c)
 *     ?InternalShowBar@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@PEAUHMONITOR__@@@Z @ 0x180271E40 (-InternalShowBar@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@P.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetActiveControl@WindowDragInputProvider@@QEAAXUIControlWindow@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x1802CD624 (-SetActiveControl@WindowDragInputProvider@@QEAAXUIControlWindow@SnapComponent@Shell@Internal@Win.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1805B4BFC (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SnapFlyoutHost::ShowSnapBarOnMonitor(__int64 a1, __int64 a2)
{
  const char *v3; // r9
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // rbx
  void (__fastcall ***v5)(_QWORD, __int64 *, __int64 *); // rax
  HMONITOR v6; // r14
  HMONITOR v7; // rax
  unsigned __int64 v8; // rsi
  unsigned int v9; // eax
  char v10; // r14
  _QWORD *v11; // r10
  __int64 v12; // r14
  __int64 *v13; // rbx
  void (__fastcall ***v14)(_QWORD, __int64 *, POINT *); // rcx
  __int64 v15; // [rsp+20h] [rbp-30h] BYREF
  RTL_SRWLOCK *v16; // [rsp+28h] [rbp-28h] BYREF
  HMONITOR v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  __int128 v19; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  POINT pt; // [rsp+90h] [rbp+40h] BYREF
  void (__fastcall ***v22)(_QWORD, __int64 *, __int64 *); // [rsp+98h] [rbp+48h] BYREF

  v15 = a2;
  SnapFlyoutTelemetry::SnapBar_ShowSnapBarOnMonitor<float const &,float const &>((int *)&v15, (int *)&v15 + 1);
  SnapFlyoutHost::GetVisibleSnapBar(a1, (__int64 *)&v22);
  pt = 0LL;
  if ( !winrt::Windows::Foundation::operator==(&v22, &pt) )
  {
    v4 = v22;
    if ( v22 )
      v5 = v22 - 2;
    else
      v5 = 0LL;
    v6 = (HMONITOR)v5[45];
    if ( !v6 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x3EB,
        (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
        v3);
    pt.x = (int)*(float *)&v15;
    pt.y = (int)*((float *)&v15 + 1);
    v7 = MonitorFromPoint(pt, 0);
    v8 = (unsigned __int64)v7;
    v17 = v7;
    if ( v7 && v6 != v7 )
    {
      LODWORD(v18) = 0;
      v19 = 0LL;
      v9 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64 *, __int64 *)))(*v4)[7])(v4);
      winrt::check_hresult(&pt, v9, &v18);
      v10 = 1;
      Microsoft::WRL::Wrappers::SRWLock::LockShared(&v16, (RTL_SRWLOCK *)(a1 + 176));
      std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Find_lower_bound<HWND__ *>(
        (__int64 *)(a1 + 144),
        &v18,
        &v17);
      if ( !*(_BYTE *)(*((_QWORD *)&v19 + 1) + 25LL)
        && v8 >= *(_QWORD *)(*((_QWORD *)&v19 + 1) + 32LL)
        && *((_QWORD *)&v19 + 1) != *v11 )
      {
        v12 = *(_QWORD *)(a1 + 112);
        v13 = (__int64 *)(*((_QWORD *)&v19 + 1) + 40LL);
        v14 = *(void (__fastcall ****)(_QWORD, __int64 *, POINT *))(*((_QWORD *)&v19 + 1) + 40LL);
        pt = 0LL;
        if ( v14 )
          (**v14)(v14, &winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>, &pt);
        WindowDragInputProvider::SetActiveControl(v12, &pt);
        v10 = 0;
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
          &v16,
          0LL);
        winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::Run(v13);
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v16);
      if ( v10 )
        SnapFlyoutHost::InternalShowBar(a1, *(_QWORD *)(a1 + 128), *(_DWORD *)(a1 + 120), v8);
    }
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
}
