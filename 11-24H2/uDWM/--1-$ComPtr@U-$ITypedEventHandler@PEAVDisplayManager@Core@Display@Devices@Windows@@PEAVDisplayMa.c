/*
 * XREFs of ??1?$ComPtr@U?$ITypedEventHandler@PEAVDisplayManager@Core@Display@Devices@Windows@@PEAVDisplayManagerDisabledEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800873D0
 * Callers:
 *     _CAccentAcrylicBlurBehind::EnsureNoiseSurfaceBrush_::_1_::dtor$0 @ 0x1800F71EC (_CAccentAcrylicBlurBehind--EnsureNoiseSurfaceBrush_--_1_--dtor$0.c)
 *     _CAnalogCompositorManager::CAnalogCompositorManager_::_1_::dtor$0 @ 0x1800F7775 (_CAnalogCompositorManager--CAnalogCompositorManager_--_1_--dtor$0.c)
 *     _CAnalogCompositorManager::InitializeDisplayManager_::_1_::dtor$2 @ 0x1800F8207 (_CAnalogCompositorManager--InitializeDisplayManager_--_1_--dtor$2.c)
 *     _CAnalogCompositorManager::InitializeDisplayManager_::_1_::dtor$3 @ 0x1800F8219 (_CAnalogCompositorManager--InitializeDisplayManager_--_1_--dtor$3.c)
 *     _CAnalogCompositorManager::InitializeDisplayManager_::_1_::dtor$4 @ 0x1800F822B (_CAnalogCompositorManager--InitializeDisplayManager_--_1_--dtor$4.c)
 *     _CAnalogCompositorManager::InitializeDisplayManager_::_1_::dtor$5 @ 0x1800F823D (_CAnalogCompositorManager--InitializeDisplayManager_--_1_--dtor$5.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Devices::Display::Core::DisplayManager *,Windows::Devices::Display::Core::DisplayManagerDisabledEventArgs *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Devices::Display::Core::DisplayManager *,Windows::Devices::Display::Core::DisplayManagerDisabledEventArgs *>>(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
