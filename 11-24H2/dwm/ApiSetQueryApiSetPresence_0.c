/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x140005E77
 * Callers:
 *     IsChangeWindowMessageFilterExPresent @ 0x1400058D8 (IsChangeWindowMessageFilterExPresent.c)
 *     IsRegisterHotKeyPresent @ 0x1400059B8 (IsRegisterHotKeyPresent.c)
 *     IsWerReportCreatePresent @ 0x140005BE4 (IsWerReportCreatePresent.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x140005C80 (IsDWMGhostHandleGhostMsgPresent.c)
 *     IsImmDisableIMEPresent @ 0x140005D98 (IsImmDisableIMEPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
