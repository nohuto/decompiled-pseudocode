/*
 * XREFs of PopGetSessionId @ 0x140A47388
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1404D01C0 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 */

__int64 PopGetSessionId()
{
  return PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
}
