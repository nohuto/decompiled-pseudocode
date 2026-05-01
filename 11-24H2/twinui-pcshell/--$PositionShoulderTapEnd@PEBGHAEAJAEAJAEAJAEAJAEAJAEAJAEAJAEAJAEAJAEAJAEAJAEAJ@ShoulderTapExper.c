/*
 * XREFs of ??$PositionShoulderTapEnd@PEBGHAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG$$QEAHAEAJ22222222222@Z @ 0x18038BF1C
 * Callers:
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x18038CB18 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsEnabled@ShoulderTapExperienceManagerTelemetry@@SA_NE_K@Z @ 0x18038C7B8 (-IsEnabled@ShoulderTapExperienceManagerTelemetry@@SA_NE_K@Z.c)
 *     ?PositionShoulderTapEnd_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBGHHHHHHHHHHHHH@Z @ 0x18038CF58 (-PositionShoulderTapEnd_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBGHHHHHHHHHHHHH@Z.c)
 *     ?get@?$static_lazy@VShoulderTapExperienceManagerTelemetry@@@details@wil@@QEAAPEAVShoulderTapExperienceManagerTelemetry@@P6AXXZ@Z @ 0x18038DA94 (-get@-$static_lazy@VShoulderTapExperienceManagerTelemetry@@@details@wil@@QEAAPEAVShoulderTapExpe.c)
 */

void __fastcall ShoulderTapExperienceManagerTelemetry::PositionShoulderTapEnd<unsigned short const *,int,long &,long &,long &,long &,long &,long &,long &,long &,long &,long &,long &,long &>(
        const unsigned __int16 **a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        int *a6,
        int *a7,
        int *a8,
        int *a9,
        int *a10,
        int *a11,
        int *a12,
        int *a13,
        int *a14)
{
  __int64 v18; // rcx

  if ( ShoulderTapExperienceManagerTelemetry::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    wil::details::static_lazy<ShoulderTapExperienceManagerTelemetry>::get(
      v18,
      _lambda_43b277c613f9e9ea449b850c5995e33f_::_lambda_invoker_cdecl_);
    ShoulderTapExperienceManagerTelemetry::PositionShoulderTapEnd_(
      (ShoulderTapExperienceManagerTelemetry *)(unsigned int)*a5,
      *a1,
      *a2,
      *a3,
      *a4,
      *a5,
      *a6,
      *a7,
      *a8,
      *a9,
      *a10,
      *a11,
      *a12,
      *a13,
      *a14);
  }
}
