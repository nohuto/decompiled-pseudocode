/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1400063B7
 * Callers:
 *     IsChangeWindowMessageFilterExPresent @ 0x140005E18 (IsChangeWindowMessageFilterExPresent.c)
 *     IsRegisterHotKeyPresent @ 0x140005EF8 (IsRegisterHotKeyPresent.c)
 *     IsWerReportCreatePresent @ 0x140006124 (IsWerReportCreatePresent.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x1400061C0 (IsDWMGhostHandleGhostMsgPresent.c)
 *     IsImmDisableIMEPresent @ 0x1400062D8 (IsImmDisableIMEPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
