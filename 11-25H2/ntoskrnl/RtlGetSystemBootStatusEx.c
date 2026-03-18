/*
 * XREFs of RtlGetSystemBootStatusEx @ 0x140773B40
 * Callers:
 *     PopCheckShutdownMarker @ 0x140C1C5B4 (PopCheckShutdownMarker.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x140A72DB4 (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall RtlGetSystemBootStatusEx(__int64 a1, unsigned int a2)
{
  return RtlpSystemBootStatusRequest(31LL, a1, a2);
}
