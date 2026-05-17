/*
 * XREFs of RtlWow64IsWowGuestMachineSupported @ 0x1800F60F0
 * Callers:
 *     <none>
 * Callees:
 *     NtQuerySystemInformationEx @ 0x180164A40 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180166340 (_alloca_probe.c)
 */

__int64 __fastcall RtlWow64IsWowGuestMachineSupported(unsigned __int16 a1, char *a2)
{
  char v2; // bl
  int v3; // r14d
  int v5; // eax
  int v6; // ecx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  void *v10; // rsp
  int i; // r8d
  int v12; // edx
  _DWORD v14[2]; // [rsp+30h] [rbp+0h] BYREF
  __int64 v15; // [rsp+38h] [rbp+8h] BYREF

  v2 = 0;
  v3 = a1;
  v14[0] = 0;
  v15 = 0LL;
  v5 = NtQuerySystemInformationEx(230LL, &v15, 8LL, 0LL, 0, v14);
  v6 = v5;
  if ( v5 == -1073741789 )
  {
    v7 = v14[0] + 15LL;
    if ( v7 <= v14[0] )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
    v9 = alloca(v8);
    v10 = alloca(v8);
    v6 = NtQuerySystemInformationEx(230LL, &v15, 8LL, v14, v14[0], v14);
    if ( v6 >= 0 )
    {
      for ( i = 0; ; ++i )
      {
        v12 = v14[i];
        if ( !(_WORD)v12 )
          break;
        if ( (unsigned __int16)v12 == v3 && (v12 & 0x160000) == 0x120000 )
        {
          v2 = 1;
          break;
        }
      }
      *a2 = v2;
    }
  }
  else if ( v5 >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v6;
}
