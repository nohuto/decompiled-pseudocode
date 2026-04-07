/*
 * XREFs of ??1?$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B064
 * Callers:
 *     ??_ECMicaSystemBackdropVisual@@UEAAPEAXI@Z @ 0x18000ABD0 (--_ECMicaSystemBackdropVisual@@UEAAPEAXI@Z.c)
 *     ??1CStoryboard@@UEAA@XZ @ 0x18000B030 (--1CStoryboard@@UEAA@XZ.c)
 *     ?Initialize@CCompositionEffectCache@@AEAAJXZ @ 0x180025FDC (-Initialize@CCompositionEffectCache@@AEAAJXZ.c)
 *     ?Create@CCompositor@@SAJPEAPEAV1@@Z @ 0x180027B00 (-Create@CCompositor@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180028220 (-InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z @ 0x1800309E4 (-SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z.c)
 *     ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x18003B810 (-UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ.c)
 *     _CDesktopManager::CDesktopManager_::_1_::dtor$1 @ 0x18006763C (_CDesktopManager--CDesktopManager_--_1_--dtor$1.c)
 *     _CCompositionEffectCache::Initialize_::_1_::dtor$0 @ 0x1800676E2 (_CCompositionEffectCache--Initialize_--_1_--dtor$0.c)
 *     _CCompositor::Create_::_1_::dtor$0 @ 0x18006774E (_CCompositor--Create_--_1_--dtor$0.c)
 *     _CGraphicsDeviceManager::InitializeGraphicsDevice_::_1_::dtor$3 @ 0x180067796 (_CGraphicsDeviceManager--InitializeGraphicsDevice_--_1_--dtor$3.c)
 *     _CSystemBackdropVisual::SetState_::_1_::dtor$0 @ 0x180067C4A (_CSystemBackdropVisual--SetState_--_1_--dtor$0.c)
 *     _CTopLevelWindow::UpdateCaptionAccentColor_::_1_::dtor$1 @ 0x180067E40 (_CTopLevelWindow--UpdateCaptionAccentColor_--_1_--dtor$1.c)
 *     ??1CCompositionEffectCache@@QEAA@XZ @ 0x1800ACE24 (--1CCompositionEffectCache@@QEAA@XZ.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800B36AC (--1CDesktopManager@@EEAA@XZ.c)
 *     ??1CDisplayAnimatedVisual@@MEAA@XZ @ 0x1800B6FD8 (--1CDisplayAnimatedVisual@@MEAA@XZ.c)
 *     ??1CGraphicsDeviceManager@@MEAA@XZ @ 0x1800C14C8 (--1CGraphicsDeviceManager@@MEAA@XZ.c)
 *     ??1CScreenRotation@@MEAA@XZ @ 0x1800D6820 (--1CScreenRotation@@MEAA@XZ.c)
 *     ??_GCSystemBackdropVisual@@UEAAPEAXI@Z @ 0x1800E32F0 (--_GCSystemBackdropVisual@@UEAAPEAXI@Z.c)
 *     ??1ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F4760 (--1ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA.c)
 *     ?GetDesktopCompositor@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCCompositor@@@Z @ 0x1801016C0 (-GetDesktopCompositor@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCCompos.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
