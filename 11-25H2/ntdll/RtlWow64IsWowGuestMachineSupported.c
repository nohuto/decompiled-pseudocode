/*
 * XREFs of RtlWow64IsWowGuestMachineSupported @ 0x1800F7C70
 * Callers:
 *     <none>
 * Callees:
 *     NtQuerySystemInformationEx @ 0x180165FD0 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1801678D0 (_alloca_probe.c)
 */

NTSTATUS __cdecl RtlWow64IsWowGuestMachineSupported(USHORT NativeMachine, PBOOLEAN IsWowGuestMachineSupported)
{
  BOOLEAN v2; // bl
  int v3; // r14d
  NTSTATUS v5; // eax
  int v6; // ecx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  void *v10; // rsp
  int i; // r8d
  ULONG v12; // edx
  ULONG SystemInformation[2]; // [rsp+30h] [rbp+0h] BYREF
  __int64 InputBuffer; // [rsp+38h] [rbp+8h] BYREF

  v2 = 0;
  v3 = NativeMachine;
  SystemInformation[0] = 0;
  InputBuffer = 0LL;
  v5 = NtQuerySystemInformationEx(SystemSupportedProcessorArchitectures2, &InputBuffer, 8u, 0LL, 0, SystemInformation);
  v6 = v5;
  if ( v5 == -1073741789 )
  {
    v7 = SystemInformation[0] + 15LL;
    if ( v7 <= SystemInformation[0] )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
    v9 = alloca(v8);
    v10 = alloca(v8);
    v6 = NtQuerySystemInformationEx(
           SystemSupportedProcessorArchitectures2,
           &InputBuffer,
           8u,
           SystemInformation,
           SystemInformation[0],
           SystemInformation);
    if ( v6 >= 0 )
    {
      for ( i = 0; ; ++i )
      {
        v12 = SystemInformation[i];
        if ( !(_WORD)v12 )
          break;
        if ( (unsigned __int16)v12 == v3 && (v12 & 0x160000) == 0x120000 )
        {
          v2 = 1;
          break;
        }
      }
      *IsWowGuestMachineSupported = v2;
    }
  }
  else if ( v5 >= 0 )
  {
    return -1073741823;
  }
  return v6;
}
