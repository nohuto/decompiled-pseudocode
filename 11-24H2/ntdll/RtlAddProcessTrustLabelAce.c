/*
 * XREFs of RtlAddProcessTrustLabelAce @ 0x180107530
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidSid @ 0x1800194A0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1800194E0 (RtlValidAcl.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x1800C0400 (RtlIsValidProcessTrustLabelSid.c)
 *     RtlCopySid @ 0x1800C0750 (RtlCopySid.c)
 */

NTSTATUS __cdecl RtlAddProcessTrustLabelAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        PSID ProcessTrustLabelSid,
        UCHAR AceType,
        ACCESS_MASK AccessMask)
{
  unsigned __int8 AclRevision; // bp
  PACL v11; // rdx
  unsigned int i; // ecx
  ACL *v13; // r9
  unsigned __int16 v14; // cx
  NTSTATUS result; // eax

  if ( !Acl || !RtlValidAcl(Acl) )
    return -1073741705;
  if ( AceType != 20 )
    return -1073741811;
  if ( !RtlValidSid(ProcessTrustLabelSid) )
    return -1073741704;
  if ( !RtlIsValidProcessTrustLabelSid(ProcessTrustLabelSid) )
    return -1073741811;
  if ( Acl->AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision <= AceRevision )
    AclRevision = AceRevision;
  if ( (AceFlags & 0xFFFFFFE0) != 0 || (AccessMask & 0xFF000000) != 0 )
    return -1073741811;
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
  v14 = 4 * (*((unsigned __int8 *)ProcessTrustLabelSid + 1) + 4);
  if ( !v11 || (PACL)((char *)v11 + v14) > v13 )
    return -1073741671;
  v11->AclSize = v14;
  *(_DWORD *)&v11->AceCount = AccessMask;
  v11->Sbz1 = AceFlags;
  v11->AclRevision = 20;
  RtlCopySid(4 * *((unsigned __int8 *)ProcessTrustLabelSid + 1) + 8, &v11[1], ProcessTrustLabelSid);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
