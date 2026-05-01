/*
 * XREFs of ??1?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAA@XZ @ 0x1802CD384
 * Callers:
 *     _CloneTitleBarConfiguration_::_1_::dtor$0 @ 0x1806CDB05 (_CloneTitleBarConfiguration_--_1_--dtor$0.c)
 *     _wil::MakeAndInitializeOrThrow_ApplicationViewTitlebarConfiguration__::_1_::dtor$0 @ 0x1806CDB17 (_wil--MakeAndInitializeOrThrow_ApplicationViewTitlebarConfiguration__--_1_--dtor$0.c)
 *     _CDesktopPositioner::_CreateTitlebarConfiguration_::_1_::dtor$0 @ 0x1806CDB9E (_CDesktopPositioner--_CreateTitlebarConfiguration_--_1_--dtor$0.c)
 *     _FullScreenPositionerHelpers::CreateTitlebarConfiguration_::_1_::dtor$0 @ 0x1806DFE7B (_FullScreenPositionerHelpers--CreateTitlebarConfiguration_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::~ComPtr<ApplicationViewTitlebarConfiguration>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(a1);
}
