/*
 * XREFs of CAsyncCallbackWithLambda__lambda_0d782019e81ae72c6e2822d24dae0a1f___::Invoke @ 0x180501D20
 * Callers:
 *     <none>
 * Callees:
 *     ??$RunningDispatchedWork@AEAY0BH@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXAEAY0BH@$$CBG@Z @ 0x1804F7734 (--$RunningDispatchedWork@AEAY0BH@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXAEAY0BH@$$CB.c)
 *     ?OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z @ 0x180503C88 (-OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_0d782019e81ae72c6e2822d24dae0a1f___::Invoke(__int64 a1)
{
  GamingPosturePositioner *v2; // rbx
  __int64 v3; // rcx
  int v4; // eax

  GamingPosturePositionerTelemetryProvider::RunningDispatchedWork<unsigned short const (&)[23]>((const WCHAR *)a1);
  v2 = *(GamingPosturePositioner **)(a1 + 56);
  v4 = IsGamingFullScreenExperienceActive(v3);
  GamingPosturePositioner::OnGamingPostureChanged(v2, v4);
  return 0LL;
}
