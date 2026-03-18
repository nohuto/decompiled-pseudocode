/*
 * XREFs of RtlSetSystemBootStatusEx @ 0x140A753E0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x140A75404 (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall RtlSetSystemBootStatusEx(__int64 a1, unsigned int a2)
{
  return RtlpSystemBootStatusRequest(32LL, a1, a2);
}
