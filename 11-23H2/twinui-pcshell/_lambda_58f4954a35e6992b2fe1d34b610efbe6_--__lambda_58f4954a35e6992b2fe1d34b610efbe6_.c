/*
 * XREFs of _lambda_58f4954a35e6992b2fe1d34b610efbe6_::__lambda_58f4954a35e6992b2fe1d34b610efbe6_ @ 0x180206704
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_58f4954a35e6992b2fe1d34b610efbe6___::_CTaskWrapper__lambda_58f4954a35e6992b2fe1d34b610efbe6___ @ 0x1802068E8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_58f4954a35e6992b2fe1d34b610efbe6___--_CTask.c)
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1802DBE70 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802DA986 (--1OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_58f4954a35e6992b2fe1d34b610efbe6_::__lambda_58f4954a35e6992b2fe1d34b610efbe6_(__int64 *a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::~OnApplicationChromeOffsetsChanged((TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged *)(a1 + 3));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1);
}
