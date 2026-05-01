/*
 * XREFs of _lambda_e77611733156e07a25f619698f3ee1ef_::__lambda_e77611733156e07a25f619698f3ee1ef_ @ 0x1801F3374
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___::_CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___ @ 0x1801F334C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___--_CTask.c)
 * Callees:
 *     ??1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ @ 0x180086D38 (--1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_e77611733156e07a25f619698f3ee1ef_::__lambda_e77611733156e07a25f619698f3ee1ef_(__int64 *a1)
{
  CFramePresentationTelemetry::SetSystemVisual::~SetSystemVisual((CFramePresentationTelemetry::SetSystemVisual *)(a1 + 4));
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
