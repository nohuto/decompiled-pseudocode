/*
 * XREFs of ??$AppLaunched@W4Location@PerfTrack@@PEBG@AppLaunchTelemetry@PerfTrack@@SAX$$QEAW4Location@1@$$QEAPEBG@Z @ 0x1803A7F70
 * Callers:
 *     ?LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x1803A9920 (-LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?AppLaunched_@AppLaunchTelemetry@PerfTrack@@QEAAXW4Location@2@PEBG@Z @ 0x1803A90F4 (-AppLaunched_@AppLaunchTelemetry@PerfTrack@@QEAAXW4Location@2@PEBG@Z.c)
 *     ?get@?$static_lazy@VAppLaunchTelemetry@PerfTrack@@@details@wil@@QEAAPEAVAppLaunchTelemetry@PerfTrack@@P6AXXZ@Z @ 0x1803AA09C (-get@-$static_lazy@VAppLaunchTelemetry@PerfTrack@@@details@wil@@QEAAPEAVAppLaunchTelemetry@PerfT.c)
 */

__int64 __fastcall PerfTrack::AppLaunchTelemetry::AppLaunched<enum PerfTrack::Location,unsigned short const *>(
        unsigned int *a1,
        _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  _DWORD *v6; // r8
  __int64 v7; // rcx

  result = wil::details::static_lazy<PerfTrack::AppLaunchTelemetry>::get(
             a1,
             _lambda_15efdcdc02dcce07b3179f5b4d1fe0a3_::_lambda_invoker_cdecl_);
  v6 = *(_DWORD **)(result + 8);
  if ( v6 )
  {
    if ( *v6 )
    {
      wil::details::static_lazy<PerfTrack::AppLaunchTelemetry>::get(
        v5,
        _lambda_15efdcdc02dcce07b3179f5b4d1fe0a3_::_lambda_invoker_cdecl_);
      return PerfTrack::AppLaunchTelemetry::AppLaunched_(v7, *a1, *a2);
    }
  }
  return result;
}
