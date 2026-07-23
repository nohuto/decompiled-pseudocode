/*
 * XREFs of RtlAddAccessAllowedAceEx @ 0x180018110
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidSid @ 0x1800194A0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1800194E0 (RtlValidAcl.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

NTSTATUS __cdecl RtlAddAccessAllowedAceEx(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PSID Sid)
{
  unsigned __int8 v9; // al
  unsigned __int8 AclRevision; // di
  PACL v11; // rcx
  unsigned int i; // edx
  ACL *v13; // rdx
  unsigned __int16 v14; // r8
  NTSTATUS result; // eax

  if ( !RtlValidSid(Sid) )
    return -1073741704;
  if ( Acl->AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  v9 = AceRevision;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision <= v9 )
    AclRevision = v9;
  if ( (AceFlags & 0xFFFFFFE0) != 0 && (AceFlags & 0xFFFFFFC0) != 0 )
    return -1073741811;
  if ( !RtlValidAcl(Acl) )
    return -1073741705;
  v11 = Acl + 1;
  for ( i = 0; i < Acl->AceCount; ++i )
  {
    if ( v11 >= (PACL)((char *)Acl + Acl->AclSize) )
      return -1073741705;
    v11 = (PACL)((char *)v11 + v11->AclSize);
  }
  v13 = (PACL)((char *)Acl + Acl->AclSize);
  if ( v11 > v13 )
    v11 = 0LL;
  v14 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
  if ( !v11 || (PACL)((char *)v11 + v14) > v13 )
    return -1073741671;
  v11->AclSize = v14;
  v11->Sbz1 = AceFlags;
  v11->AclRevision = 0;
  *(_DWORD *)&v11->AceCount = AccessMask;
  memmove(&v11[1], Sid, 4LL * *((unsigned __int8 *)Sid + 1) + 8);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
