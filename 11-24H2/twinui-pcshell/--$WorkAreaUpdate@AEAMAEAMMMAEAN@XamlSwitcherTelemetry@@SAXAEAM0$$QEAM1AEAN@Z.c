/*
 * XREFs of ??$WorkAreaUpdate@AEAMAEAMMMAEAN@XamlSwitcherTelemetry@@SAXAEAM0$$QEAM1AEAN@Z @ 0x1801F8EA8
 * Callers:
 *     TaskViewFrame::UpdateWorkAreaAsync$_ResumeCoro$1 @ 0x180285FD0 (TaskViewFrame--UpdateWorkAreaAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?WorkAreaUpdate_@XamlSwitcherTelemetry@@QEAAXMMMMN@Z @ 0x18011ACB4 (-WorkAreaUpdate_@XamlSwitcherTelemetry@@QEAAXMMMMN@Z.c)
 *     ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x18029B8A0 (-IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z @ 0x18029B8E0 (-get@-$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z.c)
 */

void __fastcall XamlSwitcherTelemetry::WorkAreaUpdate<float &,float &,float,float,double &>(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        double *a5)
{
  __int64 v9; // rcx
  XamlSwitcherTelemetry *v10; // rcx

  if ( XamlSwitcherTelemetry::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    wil::details::static_lazy<XamlSwitcherTelemetry>::get(
      v9,
      _lambda_2520381e1860fe6008a618d103f3de1f_::_lambda_invoker_cdecl_);
    XamlSwitcherTelemetry::WorkAreaUpdate_(v10, *a1, *a2, *a3, *a4, *a5);
  }
}
