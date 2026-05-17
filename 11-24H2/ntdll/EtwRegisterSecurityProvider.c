/*
 * XREFs of EtwRegisterSecurityProvider @ 0x18015BE30
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001C5D0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18001C620 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x180165740 (NtTraceControl.c)
 */

__int64 EtwRegisterSecurityProvider()
{
  NTSTATUS v0; // eax
  ULONG v1; // ebx
  ULONG v2; // eax
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v0 = NtTraceControl(24LL, 0LL, 0LL, 0LL, 0, &v4);
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
