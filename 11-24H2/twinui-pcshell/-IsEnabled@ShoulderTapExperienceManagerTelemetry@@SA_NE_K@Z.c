/*
 * XREFs of ?IsEnabled@ShoulderTapExperienceManagerTelemetry@@SA_NE_K@Z @ 0x18038C7B8
 * Callers:
 *     ??$PositionShoulderTapEnd@PEBGHAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG$$QEAHAEAJ22222222222@Z @ 0x18038BF1C (--$PositionShoulderTapEnd@PEBGHAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@ShoulderTapExper.c)
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x18038CB18 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 *     ?ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z @ 0x18038D770 (-ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VShoulderTapExperienceManagerTelemetry@@@details@wil@@QEAAPEAVShoulderTapExperienceManagerTelemetry@@P6AXXZ@Z @ 0x18038DA94 (-get@-$static_lazy@VShoulderTapExperienceManagerTelemetry@@@details@wil@@QEAAPEAVShoulderTapExpe.c)
 */

char __fastcall ShoulderTapExperienceManagerTelemetry::IsEnabled(__int64 a1)
{
  __int64 v1; // rax
  char v2; // r9
  _DWORD *v3; // rcx

  v1 = wil::details::static_lazy<ShoulderTapExperienceManagerTelemetry>::get(
         a1,
         _lambda_43b277c613f9e9ea449b850c5995e33f_::_lambda_invoker_cdecl_);
  v2 = 0;
  v3 = *(_DWORD **)(v1 + 8);
  if ( v3 && *v3 )
    return tlgKeywordOn((__int64)v3, 0LL) != 0;
  return v2;
}
