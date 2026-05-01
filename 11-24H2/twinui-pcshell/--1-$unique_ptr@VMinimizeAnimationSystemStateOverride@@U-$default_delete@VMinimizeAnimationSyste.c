/*
 * XREFs of ??1?$unique_ptr@VMinimizeAnimationSystemStateOverride@@U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@@std@@QEAA@XZ @ 0x1802CE854
 * Callers:
 *     ??1MultitaskingViewGestureHandler@@UEAA@XZ @ 0x180072510 (--1MultitaskingViewGestureHandler@@UEAA@XZ.c)
 *     _lambda_abbb930ddb92e06fa07b01ae54ef43e0_::operator() @ 0x18049CE0C (_lambda_abbb930ddb92e06fa07b01ae54ef43e0_--operator().c)
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x1804AA5D8 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 *     _MultitaskingViewGestureHandler::MultitaskingViewGestureHandler_::_1_::dtor$14 @ 0x1806D3DA9 (_MultitaskingViewGestureHandler--MultitaskingViewGestureHandler_--_1_--dtor$14.c)
 *     __lambda_abbb930ddb92e06fa07b01ae54ef43e0_::operator()_::_1_::dtor$0 @ 0x1806EE47B (__lambda_abbb930ddb92e06fa07b01ae54ef43e0_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@QEBAXPEAVMinimizeAnimationSystemStateOverride@@@Z @ 0x18049CEAC (--R-$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@QEBAXPEAVMinimizeAnimationSyste.c)
 */

__int64 __fastcall std::unique_ptr<MinimizeAnimationSystemStateOverride>::~unique_ptr<MinimizeAnimationSystemStateOverride>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<MinimizeAnimationSystemStateOverride>::operator()();
  return result;
}
