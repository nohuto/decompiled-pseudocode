/*
 * XREFs of RtlAddMandatoryAce @ 0x1800C05A0
 * Callers:
 *     RtlpNewSecurityObject @ 0x1800C0E40 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlValidSid @ 0x1800194A0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1800194E0 (RtlValidAcl.c)
 *     RtlCopySid @ 0x1800C0750 (RtlCopySid.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlAddMandatoryAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        PSID Sid,
        UCHAR AceType,
        ACCESS_MASK AccessMask)
{
  int v10; // ecx
  NTSTATUS result; // eax
  ACL *v12; // r8
  PACL v13; // rdx
  unsigned __int16 v14; // cx
  unsigned __int8 v15; // al
  bool v16; // cc
  unsigned __int8 AclRevision; // si
  unsigned int i; // ecx

  if ( !Acl )
    return -1073741705;
  if ( AceType != 17 )
    return -1073741811;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  v10 = *(_DWORD *)((char *)Sid + 2);
  if ( !v10 )
    v10 = *((unsigned __int16 *)Sid + 3) - 4096;
  if ( v10 )
    return -1073741811;
  if ( Acl->AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  v15 = AceRevision;
  v16 = Acl->AclRevision <= (unsigned __int8)AceRevision;
  AclRevision = Acl->AclRevision;
  if ( v16 )
    AclRevision = v15;
  if ( (AceFlags & 0xFFFFFFE0) != 0 || (AccessMask & 0xFFFFFFF8) != 0 )
    return -1073741811;
  if ( !RtlValidAcl(Acl) )
    return -1073741705;
  v13 = Acl + 1;
  for ( i = 0; i < Acl->AceCount; ++i )
  {
    if ( v13 >= (PACL)((char *)Acl + Acl->AclSize) )
      return -1073741705;
    v13 = (PACL)((char *)v13 + v13->AclSize);
  }
  v12 = (PACL)((char *)Acl + Acl->AclSize);
  if ( v13 > v12 )
    v13 = 0LL;
  v14 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
  if ( !v13 || (PACL)((char *)v13 + v14) > v12 )
    return -1073741671;
  v13->AclSize = v14;
  v13->Sbz1 = AceFlags;
  v13->AclRevision = 17;
  *(_DWORD *)&v13->AceCount = AccessMask;
  RtlCopySid(4 * *((unsigned __int8 *)Sid + 1) + 8, &v13[1], Sid);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
