/*
 * XREFs of _lambda_b534361c50cb4958853f48f5e7b1e06a_::__lambda_b534361c50cb4958853f48f5e7b1e06a_ @ 0x18003A1E4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b534361c50cb4958853f48f5e7b1e06a___::_CTaskWrapper__lambda_b534361c50cb4958853f48f5e7b1e06a___ @ 0x18003985C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b534361c50cb4958853f48f5e7b1e06a___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1Reactivate@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18003A1B8 (--1Reactivate@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 */

HRESULT __fastcall lambda_b534361c50cb4958853f48f5e7b1e06a_::__lambda_b534361c50cb4958853f48f5e7b1e06a_(__int64 a1)
{
  HRESULT result; // eax

  SingleViewExperienceTelemetry::Reactivate::~Reactivate((SingleViewExperienceTelemetry::Reactivate *)(a1 + 40));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 32));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 24));
  result = WindowsDeleteString(*(HSTRING *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
