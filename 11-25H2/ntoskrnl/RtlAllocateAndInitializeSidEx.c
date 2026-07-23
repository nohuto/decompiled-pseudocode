/*
 * XREFs of RtlAllocateAndInitializeSidEx @ 0x14077189C
 * Callers:
 *     EtwpUserInAdminOrLogUsersGroup @ 0x14079A0A0 (EtwpUserInAdminOrLogUsersGroup.c)
 * Callees:
 *     RtlLengthRequiredSid @ 0x140918FE0 (RtlLengthRequiredSid.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl RtlAllocateAndInitializeSidEx(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        UCHAR SubAuthorityCount,
        PULONG SubAuthorities,
        PSID *Sid)
{
  __int64 v5; // rdi
  char *Pool2; // rax
  signed __int64 v10; // rcx

  v5 = 2LL;
  RtlLengthRequiredSid(2u);
  Pool2 = (char *)ExAllocatePool2(0x41uLL);
  if ( !Pool2 )
    return -1073741801;
  *Pool2 = 1;
  v10 = Pool2 - (char *)SubAuthorities;
  *(_DWORD *)(Pool2 + 2) = *(_DWORD *)IdentifierAuthority->Value;
  *((_WORD *)Pool2 + 3) = *(_WORD *)&IdentifierAuthority->Value[4];
  Pool2[1] = 2;
  do
  {
    *(PULONG)((char *)SubAuthorities + v10 + 8) = *SubAuthorities;
    ++SubAuthorities;
    --v5;
  }
  while ( v5 );
  *Sid = Pool2;
  return 0;
}
