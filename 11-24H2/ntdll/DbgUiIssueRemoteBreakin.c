/*
 * XREFs of DbgUiIssueRemoteBreakin @ 0x180130CA0
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x180130C20 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     RtlWow64GetProcessMachines @ 0x18007C5A0 (RtlWow64GetProcessMachines.c)
 *     RtlpCreateUserThreadEx @ 0x1800A7DD0 (RtlpCreateUserThreadEx.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtQueryInformationProcess @ 0x180160370 (NtQueryInformationProcess.c)
 *     NtQuerySystemInformation @ 0x180160710 (NtQuerySystemInformation.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl DbgUiIssueRemoteBreakin(HANDLE Process)
{
  NTSTATUS result; // eax
  void (__cdecl *v3)(PVOID); // rbx
  int v4; // edi
  int v5; // ebx
  int v6; // [rsp+30h] [rbp-59h]
  __int128 SystemInformation; // [rsp+60h] [rbp-29h] BYREF
  __int64 v8[2]; // [rsp+70h] [rbp-19h] BYREF
  _QWORD ProcessInformation[7]; // [rsp+80h] [rbp-9h] BYREF
  int v10; // [rsp+B8h] [rbp+2Fh]
  USHORT ProcessMachine; // [rsp+F8h] [rbp+6Fh] BYREF
  ULONG v12; // [rsp+100h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+108h] [rbp+7Fh] BYREF

  memset_thunk_772440563353939046(ProcessInformation, 0, 0x40uLL);
  ProcessInformation[0] = 64LL;
  ProcessMachine = 0;
  v12 = 0;
  Handle = 0LL;
  *(_OWORD *)v8 = 0LL;
  SystemInformation = 0LL;
  result = NtQueryInformationProcess(Process, ProcessBasicInformation, ProcessInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    if ( (v10 & 0x200) != 0 )
    {
      v3 = (void (__cdecl *)(PVOID))TrustedAppsRemoteBreakinRoutine;
      if ( !TrustedAppsRemoteBreakinRoutine )
      {
        result = NtQuerySystemInformation(SystemTrustedAppsRuntimeInformation, &SystemInformation, 0x10u, &v12);
        if ( result < 0 )
          return result;
        if ( (SystemInformation & 1) == 0 )
          return -1073741436;
        v3 = (void (__cdecl *)(PVOID))*((_QWORD *)&SystemInformation + 1);
        TrustedAppsRemoteBreakinRoutine = *((_QWORD *)&SystemInformation + 1);
      }
    }
    else
    {
      v3 = DbgUiRemoteBreakin;
    }
    v4 = 66;
    if ( RtlWow64GetProcessMachines(Process, &ProcessMachine, 0LL) >= 0 && !ProcessMachine )
      v4 = 98;
    v5 = RtlpCreateUserThreadEx(
           Process,
           0LL,
           v4,
           0,
           0LL,
           0x4000uLL,
           v6,
           (PUSER_THREAD_START_ROUTINE)v3,
           0LL,
           &Handle,
           v8);
    if ( v5 >= 0 )
      NtClose(Handle);
    return v5;
  }
  return result;
}
