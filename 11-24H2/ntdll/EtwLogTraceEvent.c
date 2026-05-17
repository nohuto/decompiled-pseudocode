/*
 * XREFs of EtwLogTraceEvent @ 0x1800E58D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001C620 (RtlNtStatusToDosError.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 */

ULONG __fastcall EtwLogTraceEvent(int a1, unsigned __int16 *a2)
{
  ULONG result; // eax

  if ( !a2 )
    return 87;
  if ( (a1 & 0x1000000) != 0 )
    return EtwpTraceUmEvent(a1, a2, 0x30u, -1072431104);
  result = NtTraceEvent((unsigned __int16)a1, 256LL, 48LL, a2);
  if ( result )
    return RtlNtStatusToDosError(result);
  return result;
}
