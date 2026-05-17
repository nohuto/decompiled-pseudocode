/*
 * XREFs of EtwReplyNotification @ 0x180111A80
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800443B0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180046BD0 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x180166CD0 (NtTraceControl.c)
 */

__int64 __fastcall EtwReplyNotification(__int64 a1)
{
  unsigned int v1; // ebx
  NTSTATUS v2; // eax

  v1 = 0;
  v2 = NtTraceControl(18LL, a1, *(unsigned int *)(a1 + 4));
  if ( v2 )
    return RtlNtStatusToDosError(v2);
  return v1;
}
