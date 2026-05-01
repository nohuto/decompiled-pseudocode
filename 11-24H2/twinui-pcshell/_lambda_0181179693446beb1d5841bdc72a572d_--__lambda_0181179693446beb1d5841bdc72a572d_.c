/*
 * XREFs of _lambda_0181179693446beb1d5841bdc72a572d_::__lambda_0181179693446beb1d5841bdc72a572d_ @ 0x18046C46C
 * Callers:
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18017A500 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0181179693446beb1d5841bdc72a572d___::_CTaskWrapper__lambda_0181179693446beb1d5841bdc72a572d___ @ 0x18046C5C4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0181179693446beb1d5841bdc72a572d___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18021C65C (--1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_0181179693446beb1d5841bdc72a572d_::__lambda_0181179693446beb1d5841bdc72a572d_(__int64 *a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::~OnApplicationFrameCommand((TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)(a1 + 5));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 3);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
