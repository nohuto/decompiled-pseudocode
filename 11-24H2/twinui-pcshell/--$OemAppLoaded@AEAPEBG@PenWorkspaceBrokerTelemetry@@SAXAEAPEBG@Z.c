/*
 * XREFs of ??$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z @ 0x1803F188C
 * Callers:
 *     ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x1803F33AC (-LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z.c)
 * Callees:
 *     ?OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z @ 0x1803F3A5C (-OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z.c)
 *     ?get@?$static_lazy@VPenWorkspaceBrokerTelemetry@@@details@wil@@QEAAPEAVPenWorkspaceBrokerTelemetry@@P6AXXZ@Z @ 0x1803F4C74 (-get@-$static_lazy@VPenWorkspaceBrokerTelemetry@@@details@wil@@QEAAPEAVPenWorkspaceBrokerTelemet.c)
 */

void __fastcall PenWorkspaceBrokerTelemetry::OemAppLoaded<unsigned short const * &>(const unsigned __int16 **a1)
{
  __int64 v2; // rcx
  _DWORD *v3; // r8
  PenWorkspaceBrokerTelemetry *v4; // rcx

  v3 = *(_DWORD **)(wil::details::static_lazy<PenWorkspaceBrokerTelemetry>::get(
                      a1,
                      _lambda_147e36a80022279d49a89264b6535513_::_lambda_invoker_cdecl_)
                  + 8);
  if ( v3 )
  {
    if ( *v3 )
    {
      wil::details::static_lazy<PenWorkspaceBrokerTelemetry>::get(
        v2,
        _lambda_147e36a80022279d49a89264b6535513_::_lambda_invoker_cdecl_);
      PenWorkspaceBrokerTelemetry::OemAppLoaded_(v4, *a1);
    }
  }
}
