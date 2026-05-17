/*
 * XREFs of EtwRegisterSecurityProvider @ 0x18015D3E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x180046B80 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180046BD0 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x180166CD0 (NtTraceControl.c)
 */

__int64 EtwRegisterSecurityProvider()
{
  NTSTATUS v0; // eax
  ULONG v1; // ebx
  ULONG v2; // eax

  v0 = NtTraceControl(24LL, 0LL, 0LL);
  if ( v0 )
  {
    v2 = RtlNtStatusToDosError(v0);
    v1 = v2;
    if ( v2 )
      RtlSetLastWin32Error(v2);
  }
  else
  {
    return 0;
  }
  return v1;
}
