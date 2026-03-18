/*
 * XREFs of EvaluateMouseEventForCompositionFrameRateBoost @ 0x1400DCE08
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14005081C (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 * Callees:
 *     ?EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionFrameRateBoostCandidateEvent@InputHelper@@@Z @ 0x1400DCE7C (-EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionF.c)
 */

void __fastcall EvaluateMouseEventForCompositionFrameRateBoost(__int64 a1, __int16 a2)
{
  char v3; // di
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1;
  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 3112) )
  {
    v6 = 0LL;
    LODWORD(v6) = 1;
    BYTE10(v6) = v3;
    WORD4(v6) = a2;
    UserSessionState = W32GetUserSessionState(v4);
    CCompositionRefreshRateBooster::EvaluateEventForCompositionFrameRateBoost(
      (CCompositionRefreshRateBooster *)(*(_QWORD *)(UserSessionState + 3112) + 88LL),
      (const struct InputHelper::CompositionFrameRateBoostCandidateEvent *)&v6);
  }
}
