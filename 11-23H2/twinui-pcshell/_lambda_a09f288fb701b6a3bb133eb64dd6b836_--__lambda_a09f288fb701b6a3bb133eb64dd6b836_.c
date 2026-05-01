/*
 * XREFs of _lambda_a09f288fb701b6a3bb133eb64dd6b836_::__lambda_a09f288fb701b6a3bb133eb64dd6b836_ @ 0x18020678C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a09f288fb701b6a3bb133eb64dd6b836___::_CTaskWrapper__lambda_a09f288fb701b6a3bb133eb64dd6b836___ @ 0x180206960 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a09f288fb701b6a3bb133eb64dd6b836___--_CTask.c)
 *     ?GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV?$function@$$A6AJPEBG@Z@std@@@Z @ 0x18050FEF8 (-GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV-$function@$$A6AJPEBG@Z@st.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ??1GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802DA95A (--1GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_a09f288fb701b6a3bb133eb64dd6b836_::__lambda_a09f288fb701b6a3bb133eb64dd6b836_(
        __int64 *a1,
        __int64 a2)
{
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)(a1 + 42),
    a2);
  TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::~GetDefautInputAppIdAndContinue((TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue *)(a1 + 2));
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
}
