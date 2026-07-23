/*
 * XREFs of RtlpValidLabelSubjectContext @ 0x1800E831C
 * Callers:
 *     RtlpSetSecurityObject @ 0x1800E6AA0 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlSidDominates @ 0x1800DD780 (RtlSidDominates.c)
 *     NtQueryInformationToken @ 0x180163640 (NtQueryInformationToken.c)
 *     ZwPrivilegeCheck @ 0x180165A50 (ZwPrivilegeCheck.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

char __fastcall RtlpValidLabelSubjectContext(HANDLE ClientToken, _DWORD *Sid2, char a3, NTSTATUS *a4)
{
  _DWORD *v6; // rbx
  NTSTATUS v8; // eax
  _DWORD *v9; // rax
  NTSTATUS v10; // eax
  BOOLEAN Dominates[4]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ReturnLength; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h]
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD Sid2a[20]; // [rsp+60h] [rbp-A0h] BYREF
  PSID TokenInformation[12]; // [rsp+B0h] [rbp-50h] BYREF

  ReturnLength = 0;
  Dominates[0] = 0;
  Sid2a[0] = 257;
  Sid2a[1] = 0x10000000;
  Sid2a[2] = 0x2000;
  v6 = Sid2a;
  if ( Sid2 )
    v6 = Sid2;
  v8 = NtQueryInformationToken(ClientToken, 0x19u, TokenInformation, 0x54u, &ReturnLength);
  *a4 = v8;
  if ( v8 < 0 )
    return 0;
  if ( (a3 & 8) != 0 )
  {
    if ( RtlSidDominates(v6, Sid2a, Dominates) < 0 )
      return 0;
    v9 = v6;
    v6 = Sid2a;
    if ( Dominates[0] )
      v6 = v9;
  }
  v10 = RtlSidDominates(TokenInformation[0], v6, Dominates);
  *a4 = v10;
  if ( v10 < 0 )
    return 0;
  if ( !Dominates[0] )
  {
    RequiredPrivileges.Privilege[0].Attributes = 0;
    v15 = 32LL;
    RequiredPrivileges.Privilege[0].Luid = (_LUID)32LL;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    if ( !(ZwPrivilegeCheck(ClientToken, &RequiredPrivileges, Dominates) >= 0 ? Dominates[0] : 0) )
    {
      *a4 = -1073740730;
      return 0;
    }
  }
  return 1;
}
