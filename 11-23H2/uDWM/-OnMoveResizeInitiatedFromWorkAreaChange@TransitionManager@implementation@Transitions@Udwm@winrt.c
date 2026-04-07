/*
 * XREFs of ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAX_K@Z @ 0x1800FDFD8
 * Callers:
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIAnimationsTransitionManager@Private@345@@impl@winrt@@UEAAH_K@Z @ 0x1800FDF80 (-OnMoveResizeInitiatedFromWorkAreaChange@-$produce@UTransitionManager@implementation@Transitions.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800152B0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ??$make@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18001CC7C (--$make@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18002044C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x18004DFF4 (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D84DC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800F3C24 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 *     ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x1800FBE20 (--$_Try_emplace@AEBQEAUHWND__@@$$V@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UITransitionHandler@Trans.c)
 *     ??$make@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1800FC2D4 (--$make@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA-A_PXZ.c)
 *     ?EnsureWorkAreaChangeTransitionRemoved@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAX_K@Z @ 0x1800FD0E8 (-EnsureWorkAreaChangeTransitionRemoved@TransitionManager@implementation@Transitions@Udwm@winrt@@.c)
 *     ?PreTransition@?$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBW4ShellTransition@Transitions@Udwm@3@AEBUTransitionState@563@@Z @ 0x1800FE300 (-PreTransition@-$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udw.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Udwm::Transitions::implementation::TransitionManager::OnMoveResizeInitiatedFromWorkAreaChange(
        winrt::Udwm::Transitions::implementation::TransitionManager *this,
        HWND a2)
{
  struct CWindowData *WindowDataByHwnd; // rax
  struct CWindowData *v5; // rsi
  CTopLevelWindow3D *v6; // rcx
  __int64 v7; // rax
  __int64 (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v9; // rdi
  signed int v10; // eax
  __int64 v11[2]; // [rsp+20h] [rbp-20h] BYREF
  HWND v12[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+68h] [rbp+28h] BYREF
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, __int64 *, __int64 *); // [rsp+78h] [rbp+38h] BYREF

  v12[0] = a2;
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                       a2);
  v5 = WindowDataByHwnd;
  if ( WindowDataByHwnd )
  {
    v6 = (CTopLevelWindow3D *)*((_QWORD *)WindowDataByHwnd + 56);
    if ( v6 )
    {
      if ( CTopLevelWindow3D::ShouldShowTransition(v6) )
      {
        winrt::Udwm::Transitions::implementation::TransitionManager::EnsureWorkAreaChangeTransitionRemoved(
          this,
          (__int64)a2);
        winrt::make<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler,>(&v14);
        v7 = std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::_Try_emplace<HWND__ * const &,>(
               (char *)this + 120,
               (__int64)v11,
               (unsigned __int8 *)v12);
        winrt::Windows::Foundation::IUnknown::operator=(
          (winrt::Windows::Foundation::IUnknown *)(*(_QWORD *)v7 + 24LL),
          (winrt::Windows::Foundation::IUnknown *)&v14);
        winrt::make<winrt::Udwm::Transitions::implementation::TransitionState,>((__int64 *)&v15);
        v8 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v15;
        if ( v15 )
        {
          v13 = 0LL;
          v10 = (**v15)(v15, &winrt::impl::guid_v<Udwm::Transitions::ITransitionStateNativePrivate>, &v13);
          if ( v10 < 0 )
            winrt::throw_hresult(v10);
          v9 = v13;
          v11[0] = v13;
        }
        else
        {
          v11[0] = 0LL;
          v9 = 0LL;
        }
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 48LL))(v9, *((_QWORD *)v5 + 56));
        if ( v9 )
          winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(v11);
        LODWORD(v13) = 7;
        winrt::impl::consume_Udwm_Transitions_ITransitionHandler<winrt::Udwm::Transitions::ITransitionHandler>::PreTransition(
          &v14,
          &v13,
          &v15);
        *(_BYTE *)(*((_QWORD *)v5 + 56) + 299LL) = 1;
        if ( v8 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
        if ( v14 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
      }
    }
  }
}
