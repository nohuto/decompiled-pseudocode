/*
 * XREFs of DbgUiIssueRemoteBreakin @ 0x180134550
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x1801344D0 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     RtlWow64GetProcessMachines @ 0x1800696C0 (RtlWow64GetProcessMachines.c)
 *     RtlpCreateUserThreadEx @ 0x1800B4FC0 (RtlpCreateUserThreadEx.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtQueryInformationProcess @ 0x180163540 (NtQueryInformationProcess.c)
 *     NtQuerySystemInformation @ 0x1801638E0 (NtQuerySystemInformation.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall DbgUiIssueRemoteBreakin(HANDLE ProcessHandle)
{
  NTSTATUS result; // eax
  __int64 (__fastcall *v3)(); // rbx
  int v4; // edi
  int v5; // ebx
  __int64 v6; // [rsp+30h] [rbp-59h]
  __int128 SystemInformation; // [rsp+60h] [rbp-29h] BYREF
  __int128 v8; // [rsp+70h] [rbp-19h] BYREF
  _QWORD ProcessInformation[7]; // [rsp+80h] [rbp-9h] BYREF
  int v10; // [rsp+B8h] [rbp+2Fh]
  __int16 v11; // [rsp+F8h] [rbp+6Fh] BYREF
  ULONG v12; // [rsp+100h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+108h] [rbp+7Fh] BYREF

  memset_thunk_772440563353939046(ProcessInformation, 0, 0x40uLL);
  ProcessInformation[0] = 64LL;
  v11 = 0;
  v12 = 0;
  Handle = 0LL;
  v8 = 0LL;
  SystemInformation = 0LL;
  result = NtQueryInformationProcess(ProcessHandle, ProcessBasicInformation, ProcessInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    if ( (v10 & 0x200) != 0 )
    {
      v3 = (__int64 (__fastcall *)())TrustedAppsRemoteBreakinRoutine;
      if ( !TrustedAppsRemoteBreakinRoutine )
      {
        result = NtQuerySystemInformation(SystemTrustedAppsRuntimeInformation, &SystemInformation, 0x10u, &v12);
        if ( result < 0 )
          return result;
        if ( (SystemInformation & 1) == 0 )
          return -1073741436;
        v3 = (__int64 (__fastcall *)())*((_QWORD *)&SystemInformation + 1);
        TrustedAppsRemoteBreakinRoutine = *((_QWORD *)&SystemInformation + 1);
      }
    }
    else
    {
      v3 = DbgUiRemoteBreakin;
    }
    v4 = 66;
    if ( (int)RtlWow64GetProcessMachines((__int64)ProcessHandle, &v11, 0LL) >= 0 && !v11 )
      v4 = 98;
    v5 = RtlpCreateUserThreadEx((__int64)ProcessHandle, 0LL, v4, 0, 0LL, 0x4000LL, v6, (__int64)v3, 0LL, &Handle, &v8);
    if ( v5 >= 0 )
      NtClose(Handle);
    return v5;
  }
  return result;
}
