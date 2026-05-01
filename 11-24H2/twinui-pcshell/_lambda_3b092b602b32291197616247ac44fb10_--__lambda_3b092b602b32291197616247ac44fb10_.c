/*
 * XREFs of _lambda_3b092b602b32291197616247ac44fb10_::__lambda_3b092b602b32291197616247ac44fb10_ @ 0x18046C4C4
 * Callers:
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1800837E0 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3b092b602b32291197616247ac44fb10___::_CTaskWrapper__lambda_3b092b602b32291197616247ac44fb10___ @ 0x18046C614 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3b092b602b32291197616247ac44fb10___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180083D0C (--1OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_3b092b602b32291197616247ac44fb10_::__lambda_3b092b602b32291197616247ac44fb10_(__int64 *a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::~OnApplicationFramePositionChanged((TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *)(a1 + 3));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
