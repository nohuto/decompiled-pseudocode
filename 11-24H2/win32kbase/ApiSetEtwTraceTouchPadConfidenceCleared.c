/*
 * XREFs of ApiSetEtwTraceTouchPadConfidenceCleared @ 0x140193A00
 * Callers:
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1400F2A44 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 * Callees:
 *     EtwTraceTouchPadConfidenceCleared @ 0x1401492F0 (EtwTraceTouchPadConfidenceCleared.c)
 */

__int64 __fastcall ApiSetEtwTraceTouchPadConfidenceCleared(int a1, int a2, int a3)
{
  return EtwTraceTouchPadConfidenceCleared(a1, a2, a3);
}
