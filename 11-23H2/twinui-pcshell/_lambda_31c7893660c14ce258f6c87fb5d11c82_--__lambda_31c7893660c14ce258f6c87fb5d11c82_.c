/*
 * XREFs of _lambda_31c7893660c14ce258f6c87fb5d11c82_::__lambda_31c7893660c14ce258f6c87fb5d11c82_ @ 0x1802066AC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_31c7893660c14ce258f6c87fb5d11c82___::_CTaskWrapper__lambda_31c7893660c14ce258f6c87fb5d11c82___ @ 0x180206870 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_31c7893660c14ce258f6c87fb5d11c82___--_CTask.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@@Z @ 0x18020AF08 (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@@Z.c)
 * Callees:
 *     ??1OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18050C568 (--1OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_31c7893660c14ce258f6c87fb5d11c82_::__lambda_31c7893660c14ce258f6c87fb5d11c82_(__int64 a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued::~OnInputAppRequestedResizeActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued *)(a1 + 40));
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 24));
}
