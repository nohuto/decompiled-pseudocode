/*
 * XREFs of RtlAddAccessAllowedAceEx @ 0x1409170C0
 * Callers:
 *     PiAuCreateLocalSystemSecurityObject @ 0x140C132D0 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140C13470 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140C13C4C (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     RtlCopySid @ 0x1408A5010 (RtlCopySid.c)
 *     RtlValidSid @ 0x140918DF0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x14092A320 (RtlValidAcl.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedAceEx(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PSID Sid)
{
  NTSTATUS v9; // ebx
  UCHAR AclRevision; // cl
  UCHAR v12; // al
  UCHAR v13; // si
  PACL v14; // rdx
  unsigned int i; // ecx
  ACL *v16; // r8
  USHORT v17; // cx

  v9 = 0;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  AclRevision = Acl->AclRevision;
  if ( AceRevision > 4 || AclRevision > 4u )
    return -1073741735;
  v12 = AceRevision;
  v13 = Acl->AclRevision;
  if ( AclRevision <= v12 )
    v13 = v12;
  if ( (AceFlags & 0xFFFFFFE0) != 0 && (AceFlags & 0xFFFFFFC0) != 0 )
    return -1073741811;
  if ( !RtlValidAcl(Acl) )
    return -1073741705;
  v14 = Acl + 1;
  for ( i = 0; i < Acl->AceCount; ++i )
  {
    if ( v14 >= (PACL)((char *)Acl + Acl->AclSize) )
      return -1073741705;
    v14 = (PACL)((char *)v14 + v14->AclSize);
  }
  v16 = (PACL)((char *)Acl + Acl->AclSize);
  if ( v14 > v16 )
    v14 = 0LL;
  v17 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
  if ( !v14 || (PACL)((char *)v14 + v17) > v16 )
    return -1073741671;
  v14->AclSize = v17;
  v14->Sbz1 = AceFlags;
  v14->AclRevision = 0;
  *(_DWORD *)&v14->AceCount = AccessMask;
  RtlCopySid(4 * *((unsigned __int8 *)Sid + 1) + 8, &v14[1], Sid);
  ++Acl->AceCount;
  Acl->AclRevision = v13;
  return v9;
}
