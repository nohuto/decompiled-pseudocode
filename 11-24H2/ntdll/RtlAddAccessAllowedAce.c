/*
 * XREFs of RtlAddAccessAllowedAce @ 0x180018E20
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidSid @ 0x1800194A0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1800194E0 (RtlValidAcl.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

NTSTATUS __cdecl RtlAddAccessAllowedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  unsigned __int8 v8; // al
  unsigned __int8 AclRevision; // di
  PACL v10; // rcx
  unsigned int i; // edx
  ACL *v12; // r8
  unsigned __int16 v13; // dx
  NTSTATUS result; // eax

  if ( !RtlValidSid(Sid) )
    return -1073741704;
  if ( Acl->AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  v8 = AceRevision;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision <= v8 )
    AclRevision = v8;
  if ( !RtlValidAcl(Acl) )
    return -1073741705;
  v10 = Acl + 1;
  for ( i = 0; i < Acl->AceCount; ++i )
  {
    if ( v10 >= (PACL)((char *)Acl + Acl->AclSize) )
      return -1073741705;
    v10 = (PACL)((char *)v10 + v10->AclSize);
  }
  v12 = (PACL)((char *)Acl + Acl->AclSize);
  if ( v10 > v12 )
    v10 = 0LL;
  v13 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
  if ( !v10 || (PACL)((char *)v10 + v13) > v12 )
    return -1073741671;
  v10->AclSize = v13;
  *(_WORD *)&v10->AclRevision = 0;
  *(_DWORD *)&v10->AceCount = AccessMask;
  memmove(&v10[1], Sid, 4LL * *((unsigned __int8 *)Sid + 1) + 8);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
