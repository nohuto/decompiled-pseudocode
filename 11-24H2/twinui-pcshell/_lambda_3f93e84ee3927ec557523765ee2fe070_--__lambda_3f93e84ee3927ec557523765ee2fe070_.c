/*
 * XREFs of _lambda_3f93e84ee3927ec557523765ee2fe070_::__lambda_3f93e84ee3927ec557523765ee2fe070_ @ 0x18046C4F4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3f93e84ee3927ec557523765ee2fe070___::_CTaskWrapper__lambda_3f93e84ee3927ec557523765ee2fe070___ @ 0x18046C63C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3f93e84ee3927ec557523765ee2fe070___--_CTask.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@@Z @ 0x180472FC0 (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@@Z.c)
 * Callees:
 *     ??1OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18046CA24 (--1OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_3f93e84ee3927ec557523765ee2fe070_::__lambda_3f93e84ee3927ec557523765ee2fe070_(__int64 a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued::~OnInputAppRequestedResizeActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued *)(a1 + 40));
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 24));
}
