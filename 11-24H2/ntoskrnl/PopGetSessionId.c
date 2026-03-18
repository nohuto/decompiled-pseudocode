/*
 * XREFs of PopGetSessionId @ 0x140A505D8
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1404D6D70 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 */

__int64 PopGetSessionId()
{
  return PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
}
