/*
 * XREFs of ?EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionFrameRateBoostCandidateEvent@InputHelper@@@Z @ 0x1400DCE7C
 * Callers:
 *     EvaluateEventForCompositionFrameRateBoost @ 0x1400DCDB0 (EvaluateEventForCompositionFrameRateBoost.c)
 *     EvaluateMouseEventForCompositionFrameRateBoost @ 0x1400DCE08 (EvaluateMouseEventForCompositionFrameRateBoost.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x140204168 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 * Callees:
 *     ?BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z @ 0x14018FFDC (-BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CCompositionRefreshRateBooster::EvaluateEventForCompositionFrameRateBoost(
        CCompositionRefreshRateBooster *this,
        const struct InputHelper::CompositionFrameRateBoostCandidateEvent *a2)
{
  __int64 v2; // rdx
  _DWORD *v3; // r8

  if ( *((_BYTE *)this + 40) )
  {
    if ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)a2 == 1 )
      {
        if ( (*((_WORD *)a2 + 4) & 0xC00) == 0 )
        {
          if ( !*((_BYTE *)a2 + 10) )
            return;
          v2 = 0LL;
          goto LABEL_13;
        }
      }
      else if ( *(_DWORD *)a2 != 2 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 628LL);
        return;
      }
LABEL_12:
      v2 = 1LL;
LABEL_13:
      CCompositionRefreshRateBooster::BoostRefreshRateForInput(this, v2);
      return;
    }
    v3 = (_DWORD *)*((_QWORD *)a2 + 1);
    if ( (*v3 == 2 || *v3 == 3) && (v3[3] & 4) != 0 )
      goto LABEL_12;
  }
}
