/*
 * XREFs of RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x1800FB650
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001C620 (RtlNtStatusToDosError.c)
 */

struct _TEB *__fastcall RtlSetLastWin32ErrorAndNtStatusFromNtStatus(NTSTATUS a1)
{
  ULONG v1; // eax

  v1 = RtlNtStatusToDosError(a1);
  return RtlSetLastWin32Error(v1);
}
