/*
 * XREFs of EtwSetMark @ 0x18015D580
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180046BD0 (RtlNtStatusToDosError.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 */

ULONG __fastcall EtwSetMark(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS v3; // ecx
  ULONG result; // eax

  v3 = NtTraceEvent(a1, 1536LL, a3, a2);
  result = 0;
  if ( v3 )
    return RtlNtStatusToDosError(v3);
  return result;
}
