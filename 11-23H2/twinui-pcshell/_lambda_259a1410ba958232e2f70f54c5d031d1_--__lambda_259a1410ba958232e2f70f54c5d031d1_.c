/*
 * XREFs of _lambda_259a1410ba958232e2f70f54c5d031d1_::__lambda_259a1410ba958232e2f70f54c5d031d1_ @ 0x18020667C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_259a1410ba958232e2f70f54c5d031d1___::_CTaskWrapper__lambda_259a1410ba958232e2f70f54c5d031d1___ @ 0x180206848 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_259a1410ba958232e2f70f54c5d031d1___--_CTask.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x180514450 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18050C510 (--1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_259a1410ba958232e2f70f54c5d031d1_::__lambda_259a1410ba958232e2f70f54c5d031d1_(__int64 *a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::~OnApplicationFrameCommand((TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)(a1 + 5));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 3);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1);
}
