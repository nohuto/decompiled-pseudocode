/*
 * XREFs of _lambda_fc11afed419eac497169c2fc21e58d6f_::__lambda_fc11afed419eac497169c2fc21e58d6f_ @ 0x180292400
 * Callers:
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180292240 (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc11afed419eac497169c2fc21e58d6f___::_CTaskWrapper__lambda_fc11afed419eac497169c2fc21e58d6f___ @ 0x18046C72C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fc11afed419eac497169c2fc21e58d6f___--_CTask.c)
 * Callees:
 *     ??1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802079A4 (--1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_fc11afed419eac497169c2fc21e58d6f_::__lambda_fc11afed419eac497169c2fc21e58d6f_(__int64 a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::~OnInputAppRequestedHideActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued *)(a1 + 24));
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 8));
}
