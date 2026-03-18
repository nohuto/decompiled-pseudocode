/*
 * XREFs of UserSetLastStatus @ 0x140011300
 * Callers:
 *     NtUserGetDpiForMonitor @ 0x140010FF0 (NtUserGetDpiForMonitor.c)
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 */

__int64 __fastcall UserSetLastStatus(NTSTATUS Status)
{
  NTSTATUS v2; // ebx
  __int64 result; // rax
  ULONG v4; // eax

  if ( (Status & 0x1FFF0000) == 0x3F0000 || (Status & 0x1FFF0000) == 0x3E0000 )
  {
    v2 = 0;
    if ( Status < 0 )
      v2 = -1073741823;
  }
  else
  {
    v2 = Status;
  }
  result = KeIsAttachedProcess();
  if ( !(_BYTE)result )
  {
    LODWORD(KeGetPcr()->NtTib.Self[83].ArbitraryUserPointer) = Status;
    if ( PsGetCurrentProcessWow64Process() )
      HIDWORD(KeGetPcr()->NtTib.Self[200].Self) = Status;
    v4 = RtlNtStatusToDosError(v2);
    return UserSetLastError(v4);
  }
  return result;
}
