/*
 * XREFs of ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x18008C524
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180090650 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x1800187EC (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800434E0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18004BD48 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18004BFEC (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ @ 0x18004C1CC (-unconditional_release_ref@-$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ.c)
 *     ??$make@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18004D318 (--$make@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA-A_PXZ.c)
 *     ??0WindowMoveResizeCrossfadeTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18009AC5C (--0WindowMoveResizeCrossfadeTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x1800E699C (--$_Try_emplace@AEBQEAUHWND__@@$$V@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UITransition@Transitions@.c)
 *     ??$as@UITransitionStateNativePrivate@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionStateNativePrivate@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800E6B10 (--$as@UITransitionStateNativePrivate@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@win.c)
 *     ?EnsureWorkAreaChangeTransitionRemoved@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x1800E6DE0 (-EnsureWorkAreaChangeTransitionRemoved@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__.c)
 *     ?PreTransition@?$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBW4ShellTransitionType@Transitions@Udwm@3@AEBUTransitionState@563@@Z @ 0x1800E7094 (-PreTransition@-$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Udwm::Transitions::TransitionManager::OnMoveResizeInitiatedFromWorkAreaChange(
        winrt::Udwm::Transitions::TransitionManager *this,
        HWND a2)
{
  struct CWindowData *WindowDataByHwnd; // rax
  struct CWindowData *v4; // rdi
  CTopLevelWindow3D *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  _BYTE v8[8]; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v9[24]; // [rsp+28h] [rbp-18h] BYREF
  HWND v10; // [rsp+68h] [rbp+28h] BYREF
  __int64 v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  v10 = a2;
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                       a2);
  v4 = WindowDataByHwnd;
  if ( WindowDataByHwnd )
  {
    v5 = (CTopLevelWindow3D *)*((_QWORD *)WindowDataByHwnd + 56);
    if ( v5 )
    {
      if ( CTopLevelWindow3D::ShouldShowTransition(v5) )
      {
        winrt::Udwm::Transitions::TransitionManager::EnsureWorkAreaChangeTransitionRemoved(this, v10);
        winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition::WindowMoveResizeCrossfadeTransition((winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition *)v8);
        v6 = std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransition,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransition>>,0>>::_Try_emplace<HWND__ * const &,>(
               (char *)this + 64,
               v9,
               &v10);
        winrt::Windows::Foundation::IUnknown::operator=(
          (winrt::Windows::Foundation::IUnknown *)(*(_QWORD *)v6 + 24LL),
          (winrt::Windows::Foundation::IUnknown *)v8);
        winrt::make<winrt::Udwm::Transitions::implementation::TransitionState,>(&v12);
        winrt::impl::as<ITransitionStateNativePrivate,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
          &v11,
          v12);
        v7 = v11;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 48LL))(v11, *((_QWORD *)v4 + 56));
        if ( v7 )
          winrt::com_ptr<IBitmapManager>::unconditional_release_ref(&v11);
        LODWORD(v11) = 7;
        winrt::impl::consume_Udwm_Transitions_ITransition<winrt::Udwm::Transitions::ITransition>::PreTransition(
          v8,
          &v11,
          &v12);
        *(_BYTE *)(*((_QWORD *)v4 + 56) + 251LL) = 1;
        winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)&v12);
        winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)v8);
      }
    }
  }
}
