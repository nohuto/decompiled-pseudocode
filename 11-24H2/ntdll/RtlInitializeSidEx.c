/*
 * XREFs of RtlInitializeSidEx @ 0x180019A20
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180019CF0 (RtlCheckTokenMembershipEx.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS RtlInitializeSidEx(PSID Sid, PSID_IDENTIFIER_AUTHORITY IdentifierAuthority, UCHAR SubAuthorityCount, ...)
{
  UCHAR *v3; // rdx
  _DWORD *v4; // rax
  int v5; // ecx
  UCHAR v7; // [rsp+30h] [rbp+18h] BYREF

  v7 = SubAuthorityCount;
  if ( SubAuthorityCount > 0xFu )
    return -1073741811;
  *((_BYTE *)Sid + 1) = SubAuthorityCount;
  *(_BYTE *)Sid = 1;
  *(_SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = *IdentifierAuthority;
  if ( SubAuthorityCount )
  {
    v3 = &v7;
    v4 = (char *)Sid + 8;
    *(_QWORD *)&SubAuthorityCount = SubAuthorityCount;
    do
    {
      v5 = *((_DWORD *)v3 + 2);
      v3 += 8;
      *v4++ = v5;
      *(_QWORD *)&SubAuthorityCount = SubAuthorityCount - 1LL;
    }
    while ( SubAuthorityCount );
  }
  return 0;
}
