/*
 * XREFs of EvaluateEventForCompositionFrameRateBoost @ 0x1400DCDB0
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x140187B70 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionFrameRateBoostCandidateEvent@InputHelper@@@Z @ 0x1400DCE7C (-EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionF.c)
 */

void __fastcall EvaluateEventForCompositionFrameRateBoost(__int64 a1)
{
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 3112) )
  {
    v3 = 0LL;
    LODWORD(v3) = 2;
    UserSessionState = W32GetUserSessionState(v1);
    CCompositionRefreshRateBooster::EvaluateEventForCompositionFrameRateBoost(
      (CCompositionRefreshRateBooster *)(*(_QWORD *)(UserSessionState + 3112) + 88LL),
      (const struct InputHelper::CompositionFrameRateBoostCandidateEvent *)&v3);
  }
}
