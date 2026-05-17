/*
 * XREFs of RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x1800FD880
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180046BD0 (RtlNtStatusToDosError.c)
 */

struct _TEB *__fastcall RtlSetLastWin32ErrorAndNtStatusFromNtStatus(NTSTATUS a1)
{
  ULONG v1; // eax

  v1 = RtlNtStatusToDosError(a1);
  return RtlSetLastWin32Error(v1);
}
