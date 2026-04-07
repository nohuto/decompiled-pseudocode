/*
 * XREFs of ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18010CD38
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18001AF70 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x18002E7F0 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@22PEAX_K@Z @ 0x1800EB9F8 (-RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@.c)
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800F3C24 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_JointResizeIcons@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F9BD0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_JointResizeIcons@@@details@wil@@QEAAX_NW4.c)
 *     ??$as@UITransitionManagerNativePrivate@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionManagerNativePrivate@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180108508 (--$as@UITransitionManagerNativePrivate@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Window.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowList::TransitionBitmap(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_TRANSITIONBITMAP *a2,
        const struct _REMOTE_PORT_VIEW *a3)
{
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebp
  int v8; // eax
  int v9; // eax
  int v10; // r8d
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall ***v14)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+88h] [rbp+20h] BYREF

  v14 = (__int64 (__fastcall ***)(_QWORD, __int64 *, __int64 *))this;
  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = -2147467259;
  if ( *(_QWORD *)((char *)a2 + 4) )
  {
    v8 = 0;
    if ( *((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12) >= 0 )
      v8 = *((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12);
    if ( v8 > 0 )
    {
      v9 = 0;
      if ( *((_DWORD *)a2 + 15) - *((_DWORD *)a2 + 13) >= 0 )
        v9 = *((_DWORD *)a2 + 15) - *((_DWORD *)a2 + 13);
      if ( v9 > 0 && a3->ViewSize && a3->ViewBase )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_JointResizeIcons>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_JointResizeIcons>::GetImpl'::`2'::impl,
          1u,
          v5,
          v6);
        v10 = *((_DWORD *)a2 + 3);
        if ( (unsigned int)(v10 - 95) <= 7 )
        {
          winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent((winrt::Udwm::Transitions::implementation::TransitionManager *)&v14);
          winrt::impl::as<Udwm::Transitions::ITransitionManagerNativePrivate,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
            &v15,
            v14);
          v12 = v15;
          v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, PVOID, SIZE_T))(*(_QWORD *)v15 + 56LL))(
                 v15,
                 *(_QWORD *)((char *)a2 + 4),
                 (char *)a2 + 48,
                 a3->ViewBase,
                 a3->ViewSize);
          if ( v12 )
            winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(&v15);
          if ( v14 )
            winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
          if ( v7 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x14E1u);
        }
        else
        {
          v11 = CTransitionVisualController::RegisterTransitionBitmap(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24),
                  *(_QWORD *)((char *)a2 + 4),
                  v10,
                  (_DWORD *)a2 + 12,
                  (_OWORD *)a2 + 1,
                  (__int128 *)a2 + 2,
                  a3->ViewBase,
                  a3->ViewSize);
          v7 = v11;
          if ( v11 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x14EDu);
        }
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return (unsigned int)v7;
}
