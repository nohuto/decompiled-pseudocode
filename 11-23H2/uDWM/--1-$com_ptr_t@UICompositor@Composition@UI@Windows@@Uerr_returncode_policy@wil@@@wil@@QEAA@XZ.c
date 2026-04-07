/*
 * XREFs of ??1?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007478
 * Callers:
 *     ?ValidateVisual@CWindowBackgroundTreatmentVisual@@UEAAJXZ @ 0x1800073A0 (-ValidateVisual@CWindowBackgroundTreatmentVisual@@UEAAJXZ.c)
 *     ?CreateSolidColorBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@PEAPEAUICompositionBrush@Composition@34@@Z @ 0x180026454 (-CreateSolidColorBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@PEAPEAUICompositionBrush@C.c)
 *     ?Initialize@CCompositor@@IEAAJXZ @ 0x180027E08 (-Initialize@CCompositor@@IEAAJXZ.c)
 *     ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180028220 (-InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x180028C18 (-CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z.c)
 *     ?CreateTextLayout@CDWriteText@@AEAAJXZ @ 0x1800312A0 (-CreateTextLayout@CDWriteText@@AEAAJXZ.c)
 *     ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x18003B810 (-UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ.c)
 *     _CWindowBackgroundTreatmentVisual::ValidateVisual_::_1_::dtor$0 @ 0x180067112 (_CWindowBackgroundTreatmentVisual--ValidateVisual_--_1_--dtor$0.c)
 *     _CGraphicsDeviceManager::CheckDXGIAdapter_::_1_::dtor$0 @ 0x1800676F4 (_CGraphicsDeviceManager--CheckDXGIAdapter_--_1_--dtor$0.c)
 *     _CGraphicsDeviceManager::InitializeGraphicsDevice_::_1_::dtor$0 @ 0x180067760 (_CGraphicsDeviceManager--InitializeGraphicsDevice_--_1_--dtor$0.c)
 *     _CGraphicsDeviceManager::InitializeGraphicsDevice_::_1_::dtor$1 @ 0x180067772 (_CGraphicsDeviceManager--InitializeGraphicsDevice_--_1_--dtor$1.c)
 *     _CGraphicsDeviceManager::InitializeGraphicsDevice_::_1_::dtor$2 @ 0x180067784 (_CGraphicsDeviceManager--InitializeGraphicsDevice_--_1_--dtor$2.c)
 *     _CGraphicsDeviceManager::CheckDXGIAdapter_::_1_::dtor$2 @ 0x180067814 (_CGraphicsDeviceManager--CheckDXGIAdapter_--_1_--dtor$2.c)
 *     _CTopLevelWindow::UpdateCaptionAccentColor_::_1_::dtor$0 @ 0x180067E20 (_CTopLevelWindow--UpdateCaptionAccentColor_--_1_--dtor$0.c)
 *     ??1CCompositor@@MEAA@XZ @ 0x1800AE28C (--1CCompositor@@MEAA@XZ.c)
 *     ??1CGraphicsDeviceManager@@MEAA@XZ @ 0x1800C14C8 (--1CGraphicsDeviceManager@@MEAA@XZ.c)
 *     ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x1800C15B8 (-ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     _CGraphicsDeviceManager::ReleaseGraphicsDevice_::_1_::dtor$0 @ 0x1800C16F7 (_CGraphicsDeviceManager--ReleaseGraphicsDevice_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
