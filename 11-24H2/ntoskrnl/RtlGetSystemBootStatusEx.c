/*
 * XREFs of RtlGetSystemBootStatusEx @ 0x140782D20
 * Callers:
 *     PopCheckShutdownMarker @ 0x140C2F7D4 (PopCheckShutdownMarker.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x140A6F8A4 (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall RtlGetSystemBootStatusEx(__int64 a1, unsigned int a2)
{
  return RtlpSystemBootStatusRequest(31LL, a1, a2);
}
