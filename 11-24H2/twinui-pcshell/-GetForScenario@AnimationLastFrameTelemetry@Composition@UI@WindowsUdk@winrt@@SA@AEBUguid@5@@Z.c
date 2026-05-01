/*
 * XREFs of ?GetForScenario@AnimationLastFrameTelemetry@Composition@UI@WindowsUdk@winrt@@SA@AEBUguid@5@@Z @ 0x180471DDC
 * Callers:
 *     _anonymous_namespace_::StartAnimationTelemetryForInputViewKeyMoment @ 0x1802B5C80 (_anonymous_namespace_--StartAnimationTelemetryForInputViewKeyMoment.c)
 * Callees:
 *     ??R_lambda_c6eead5922142ea911cef51d7f7bcdf9_@@QEBA@AEBUISnapLayoutManagerStatics2@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1802CA0CC (--R_lambda_c6eead5922142ea911cef51d7f7bcdf9_@@QEBA@AEBUISnapLayoutManagerStatics2@Shell@UI@Windo.c)
 *     ??$call@AEAV_lambda_12f5bf833773a01a30ff4e031defbf2b_@@@?$factory_cache_entry@UAnimationLastFrameTelemetry@Composition@UI@WindowsUdk@winrt@@UIAnimationLastFrameTelemetryStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_12f5bf833773a01a30ff4e031defbf2b_@@@Z @ 0x180469F68 (--$call@AEAV_lambda_12f5bf833773a01a30ff4e031defbf2b_@@@-$factory_cache_entry@UAnimationLastFram.c)
 */

const struct winrt::guid *__fastcall winrt::WindowsUdk::UI::Composition::AnimationLastFrameTelemetry::GetForScenario(
        const struct winrt::guid *a1,
        __int128 *a2)
{
  __int128 *v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v5 = &qword_1808CBB68;
  _InterlockedIncrement64(&qword_1808CBB68);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::AnimationLastFrameTelemetry,winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics> )
  {
    _lambda_c6eead5922142ea911cef51d7f7bcdf9_::operator()(
      &v4,
      a1,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::AnimationLastFrameTelemetry,winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics>);
    _InterlockedDecrement64(&qword_1808CBB68);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CBB68);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Composition::AnimationLastFrameTelemetry,winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics>::call<_lambda_12f5bf833773a01a30ff4e031defbf2b_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      a1,
      &v4);
  }
  return a1;
}
