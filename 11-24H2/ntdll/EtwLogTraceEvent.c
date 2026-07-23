/*
 * XREFs of EtwLogTraceEvent @ 0x1800E0D80
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180049020 (RtlNtStatusToDosError.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 */

ULONG __fastcall EtwLogTraceEvent(int a1, unsigned __int16 *a2)
{
  ULONG result; // eax

  if ( !a2 )
    return 87;
  if ( (a1 & 0x1000000) != 0 )
    return EtwpTraceUmEvent(a1, a2, 0x30u, -1072431104);
  result = NtTraceEvent((HANDLE)(unsigned __int16)a1, 0x100u, 0x30u, a2);
  if ( result )
    return RtlNtStatusToDosError(result);
  return result;
}
