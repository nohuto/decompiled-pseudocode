/*
 * XREFs of EtwRegisterSecurityProvider @ 0x18015D3E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x180046B80 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180046BD0 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x180166CD0 (NtTraceControl.c)
 */

ULONG EtwRegisterSecurityProvider(void)
{
  NTSTATUS v0; // eax
  ULONG v1; // ebx
  LONG v2; // eax
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  ReturnLength = 0;
  v0 = NtTraceControl(EtwRegisterSecurityProv, 0LL, 0, 0LL, 0, &ReturnLength);
  if ( !v0 )
    return 0;
  v2 = RtlNtStatusToDosError(v0);
  v1 = v2;
  if ( v2 )
    RtlSetLastWin32Error(v2);
  return v1;
}
