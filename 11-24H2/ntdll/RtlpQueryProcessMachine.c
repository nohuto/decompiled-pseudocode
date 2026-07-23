/*
 * XREFs of RtlpQueryProcessMachine @ 0x180113DDC
 * Callers:
 *     RtlpQueryCriticalSectionOwner @ 0x180029F24 (RtlpQueryCriticalSectionOwner.c)
 * Callees:
 *     NtQuerySystemInformationEx @ 0x180162E00 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180164700 (_alloca_probe.c)
 */

__int64 __fastcall RtlpQueryProcessMachine(__int64 a1, _WORD *a2)
{
  ULONG *p_ReturnLength; // rbx
  NTSTATUS v4; // ecx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  void *v7; // rsp
  void *v8; // rsp
  int i; // edx
  __int16 v10; // ax
  ULONG ReturnLength; // [rsp+30h] [rbp+0h] BYREF
  __int64 InputBuffer; // [rsp+38h] [rbp+8h] BYREF
  _BYTE SystemInformation[24]; // [rsp+40h] [rbp+10h] BYREF

  InputBuffer = a1;
  ReturnLength = 20;
  p_ReturnLength = (ULONG *)SystemInformation;
  v4 = NtQuerySystemInformationEx(
         SystemSupportedProcessorArchitectures2,
         &InputBuffer,
         8u,
         SystemInformation,
         0x14u,
         &ReturnLength);
  if ( v4 == -1073741789 )
  {
    v5 = ReturnLength + 15LL;
    if ( v5 <= ReturnLength )
      v5 = 0xFFFFFFFFFFFFFF0LL;
    v6 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
    v7 = alloca(v6);
    v8 = alloca(v6);
    p_ReturnLength = &ReturnLength;
    v4 = NtQuerySystemInformationEx(
           SystemSupportedProcessorArchitectures2,
           &InputBuffer,
           8u,
           &ReturnLength,
           ReturnLength,
           &ReturnLength);
  }
  if ( v4 >= 0 )
  {
    for ( i = 0; LOWORD(p_ReturnLength[i]); ++i )
    {
      if ( (p_ReturnLength[i] & 0x80000) != 0 )
      {
        v10 = p_ReturnLength[i];
        if ( v10 )
        {
          *a2 = v10;
          return (unsigned int)v4;
        }
        break;
      }
    }
    return (unsigned int)-1073741816;
  }
  return (unsigned int)v4;
}
