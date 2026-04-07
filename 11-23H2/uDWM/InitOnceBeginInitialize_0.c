/*
 * XREFs of InitOnceBeginInitialize_0 @ 0x18005D66A
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_7c6f95392d1fa211f578d6d8eb47d107_@@CA@XZ @ 0x18010FF90 (-_lambda_invoker_cdecl_@_lambda_7c6f95392d1fa211f578d6d8eb47d107_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_830a858705f438bc5eb56dc5316ebd68_@@CA@XZ @ 0x18010FFE0 (-_lambda_invoker_cdecl_@_lambda_830a858705f438bc5eb56dc5316ebd68_@@CA@XZ.c)
 *     ??$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTelemetry@ScalingCompatTelemetry@@SAXAEAW4AppType@1@AEAI1@Z @ 0x180110034 (--$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTe.c)
 *     ?IsEnabled@CScalingCompatTelemetry@ScalingCompatTelemetry@@SA_NE_K@Z @ 0x180110354 (-IsEnabled@CScalingCompatTelemetry@ScalingCompatTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x180110558 (-get@-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall InitOnceBeginInitialize_0(LPINIT_ONCE lpInitOnce, DWORD dwFlags, PBOOL fPending, LPVOID *lpContext)
{
  return InitOnceBeginInitialize(lpInitOnce, dwFlags, fPending, lpContext);
}
