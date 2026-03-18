/*
 * XREFs of PopGetSessionId @ 0x140A4D0E4
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1404D7ED0 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 */

__int64 PopGetSessionId()
{
  return PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
}
