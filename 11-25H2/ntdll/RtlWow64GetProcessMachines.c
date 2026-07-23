/*
 * XREFs of RtlWow64GetProcessMachines @ 0x1800696C0
 * Callers:
 *     LdrpGetModuleName @ 0x18006A990 (LdrpGetModuleName.c)
 *     DbgUiIssueRemoteBreakin @ 0x180134550 (DbgUiIssueRemoteBreakin.c)
 * Callees:
 *     NtQuerySystemInformationEx @ 0x180165FD0 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1801678D0 (_alloca_probe.c)
 */

NTSTATUS __cdecl RtlWow64GetProcessMachines(HANDLE ProcessHandle, PUSHORT ProcessMachine, PUSHORT NativeMachine)
{
  __int64 v3; // rbx
  int v6; // r9d
  USHORT v7; // dx
  USHORT v8; // cx
  NTSTATUS result; // eax
  ULONG *p_ReturnLength; // r14
  ULONG v11; // r8d
  bool v12; // zf
  struct _TEB *v13; // rcx
  __int64 WowTebOffset; // rax
  _WORD *v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  ULONG ReturnLength; // [rsp+30h] [rbp+0h] BYREF
  HANDLE InputBuffer; // [rsp+38h] [rbp+8h] BYREF
  _BYTE SystemInformation[24]; // [rsp+40h] [rbp+10h] BYREF

  LODWORD(v3) = 0;
  InputBuffer = ProcessHandle;
  v6 = 0;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    if ( !NtCurrentTeb()->WowTebOffset )
    {
      v7 = 0;
      v8 = -31132;
      goto LABEL_4;
    }
    v13 = NtCurrentTeb();
    WowTebOffset = v13->WowTebOffset;
    if ( (int)WowTebOffset < 0 )
      v13 = (struct _TEB *)((char *)v13 + WowTebOffset);
    if ( (_DWORD)v13 == LODWORD(v13->NtTib.SubSystemTib) )
      v15 = (_WORD *)LODWORD(v13->glDispatchTable[137]);
    else
      v15 = v13->TlsSlots[10];
    if ( v15 )
    {
      v7 = v15[17];
      if ( v7 )
      {
        v8 = v15[16];
        if ( v8 )
          goto LABEL_4;
      }
    }
  }
  ReturnLength = 20;
  p_ReturnLength = (ULONG *)SystemInformation;
  v6 = NtQuerySystemInformationEx(
         SystemSupportedProcessorArchitectures2,
         &InputBuffer,
         8u,
         SystemInformation,
         0x14u,
         &ReturnLength);
  if ( v6 == -1073741789 )
  {
    v16 = ReturnLength + 15LL;
    if ( v16 <= ReturnLength )
      v16 = 0xFFFFFFFFFFFFFF0LL;
    v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
    v18 = alloca(v17);
    v19 = alloca(v17);
    p_ReturnLength = &ReturnLength;
    v6 = NtQuerySystemInformationEx(
           SystemSupportedProcessorArchitectures2,
           &InputBuffer,
           8u,
           &ReturnLength,
           ReturnLength,
           &ReturnLength);
  }
  if ( v6 < 0 )
    return v6;
  v11 = *p_ReturnLength;
  v7 = 0;
  v8 = 0;
  while ( (_WORD)v11 )
  {
    if ( (v11 & 0x80000) != 0 )
    {
      v12 = (v11 & 0x40000) == 0;
      if ( (v11 & 0x40000) != 0 )
        goto LABEL_13;
      if ( (v11 & 0x100000) != 0 )
        v7 = v11;
    }
    v12 = (v11 & 0x40000) == 0;
LABEL_13:
    if ( v12 )
      LOWORD(v11) = v8;
    v3 = (unsigned int)(v3 + 1);
    v8 = v11;
    v11 = p_ReturnLength[v3];
  }
LABEL_4:
  *ProcessMachine = v7;
  result = v6;
  if ( NativeMachine )
    *NativeMachine = v8;
  return result;
}
