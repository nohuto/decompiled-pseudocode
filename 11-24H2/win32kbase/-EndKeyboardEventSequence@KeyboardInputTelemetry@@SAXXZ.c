/*
 * XREFs of ?EndKeyboardEventSequence@KeyboardInputTelemetry@@SAXXZ @ 0x1400C0B98
 * Callers:
 *     HandleDeferredInput @ 0x1400C06B0 (HandleDeferredInput.c)
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1400C0E4C (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 * Callees:
 *     ?_EndKeyboardEventSequence@KeyboardInputTelemetry@@AEAAXXZ @ 0x1400C0C5C (-_EndKeyboardEventSequence@KeyboardInputTelemetry@@AEAAXXZ.c)
 */

void __fastcall KeyboardInputTelemetry::EndKeyboardEventSequence(__int64 a1)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1);
  KeyboardInputTelemetry::_EndKeyboardEventSequence((KeyboardInputTelemetry *)(UserSessionState + 14512));
}
