/*
 * XREFs of RtlAllocateAndInitializeSidEx @ 0x140780A1C
 * Callers:
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1407A95B0 (EtwpUserInAdminOrLogUsersGroup.c)
 * Callees:
 *     RtlLengthRequiredSid @ 0x14086B5A0 (RtlLengthRequiredSid.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl RtlAllocateAndInitializeSidEx(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        UCHAR SubAuthorityCount,
        PULONG SubAuthorities,
        PSID *Sid)
{
  __int64 v5; // rdi
  ULONG v8; // eax
  char *Pool2; // rax
  signed __int64 v11; // rcx

  v5 = 2LL;
  v8 = RtlLengthRequiredSid(2u);
  Pool2 = (char *)ExAllocatePool2(0x41uLL, v8, 0x62507452u);
  if ( !Pool2 )
    return -1073741801;
  *Pool2 = 1;
  v11 = Pool2 - (char *)SubAuthorities;
  *(_DWORD *)(Pool2 + 2) = *(_DWORD *)IdentifierAuthority->Value;
  *((_WORD *)Pool2 + 3) = *(_WORD *)&IdentifierAuthority->Value[4];
  Pool2[1] = 2;
  do
  {
    *(PULONG)((char *)SubAuthorities + v11 + 8) = *SubAuthorities;
    ++SubAuthorities;
    --v5;
  }
  while ( v5 );
  *Sid = Pool2;
  return 0;
}
