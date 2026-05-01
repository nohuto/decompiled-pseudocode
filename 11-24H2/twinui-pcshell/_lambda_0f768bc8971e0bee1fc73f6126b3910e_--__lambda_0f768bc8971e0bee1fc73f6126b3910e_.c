/*
 * XREFs of _lambda_0f768bc8971e0bee1fc73f6126b3910e_::__lambda_0f768bc8971e0bee1fc73f6126b3910e_ @ 0x180397B34
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0f768bc8971e0bee1fc73f6126b3910e___::_CTaskWrapper__lambda_0f768bc8971e0bee1fc73f6126b3910e___ @ 0x180397C08 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0f768bc8971e0bee1fc73f6126b3910e___--_CTask.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x18039825C (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ @ 0x180397D24 (--1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_0f768bc8971e0bee1fc73f6126b3910e_::__lambda_0f768bc8971e0bee1fc73f6126b3910e_(__int64 *a1)
{
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)(a1 + 4));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
