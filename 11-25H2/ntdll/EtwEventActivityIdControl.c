/*
 * XREFs of EtwEventActivityIdControl @ 0x180046A50
 * Callers:
 *     EtwEventWriteStartScenario @ 0x1800CC1C0 (EtwEventWriteStartScenario.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180046B80 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180046BD0 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x180166CD0 (NtTraceControl.c)
 */

__int64 __fastcall EtwEventActivityIdControl(int a1, _GUID *a2)
{
  ULONG v2; // ebx
  NTSTATUS v3; // eax
  ULONG v4; // eax
  __int64 result; // rax
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  _GUID ActivityId; // xmm1

  v2 = 0;
  if ( a2 )
  {
    if ( a1 == 2 )
    {
      NtCurrentTeb()->ActivityId = *a2;
      return v2;
    }
    v6 = a1 - 1;
    if ( !v6 )
    {
      result = 0LL;
      *a2 = NtCurrentTeb()->ActivityId;
      return result;
    }
    v7 = v6 - 2;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
      {
        ActivityId = NtCurrentTeb()->ActivityId;
        NtCurrentTeb()->ActivityId = *a2;
        result = 0LL;
        *a2 = ActivityId;
        return result;
      }
      if ( v8 != 1 )
      {
        v3 = -1073741811;
        goto LABEL_7;
      }
      *a2 = NtCurrentTeb()->ActivityId;
    }
    v3 = NtTraceControl(12LL, 0LL, 0LL);
    if ( !v3 )
      return v2;
LABEL_7:
    v4 = RtlNtStatusToDosError(v3);
    v2 = v4;
    if ( v4 )
      RtlSetLastWin32Error(v4);
    return v2;
  }
  return 87LL;
}
