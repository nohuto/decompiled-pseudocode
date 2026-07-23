/*
 * XREFs of RtlAddProcessTrustLabelAce @ 0x140918E20
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x14036A3B0 (SepSetProcessTrustLabelAceForToken.c)
 *     RtlpNewSecurityObject @ 0x140927AA0 (RtlpNewSecurityObject.c)
 *     SeMakeSystemToken @ 0x140C29020 (SeMakeSystemToken.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1403616D0 (RtlIsValidProcessTrustLabelSid.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     RtlValidSid @ 0x140918DF0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x14092A320 (RtlValidAcl.c)
 */

NTSTATUS __cdecl RtlAddProcessTrustLabelAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        PSID ProcessTrustLabelSid,
        UCHAR AceType,
        ACCESS_MASK AccessMask)
{
  ULONG AclRevision; // eax
  UCHAR v11; // bp
  PACL v12; // rcx
  unsigned int i; // edx
  ACL *v14; // r9
  USHORT v15; // dx
  NTSTATUS result; // eax

  if ( !Acl || !RtlValidAcl(Acl) )
    return -1073741705;
  if ( AceType != 20 )
    return -1073741811;
  if ( !RtlValidSid(ProcessTrustLabelSid) )
    return -1073741704;
  if ( !RtlIsValidProcessTrustLabelSid(ProcessTrustLabelSid) )
    return -1073741811;
  AclRevision = Acl->AclRevision;
  if ( (unsigned __int8)AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  v11 = Acl->AclRevision;
  if ( AclRevision <= AceRevision )
    v11 = AceRevision;
  if ( (AceFlags & 0xFFFFFFE0) != 0 || (AccessMask & 0xFF000000) != 0 )
    return -1073741811;
  v12 = Acl + 1;
  for ( i = 0; i < Acl->AceCount; ++i )
  {
    if ( v12 >= (PACL)((char *)Acl + Acl->AclSize) )
      return -1073741705;
    v12 = (PACL)((char *)v12 + v12->AclSize);
  }
  v14 = (PACL)((char *)Acl + Acl->AclSize);
  if ( v12 > v14 )
    v12 = 0LL;
  v15 = 4 * (*((unsigned __int8 *)ProcessTrustLabelSid + 1) + 4);
  if ( !v12 || (PACL)((char *)v12 + v15) > v14 )
    return -1073741671;
  v12->AclSize = v15;
  *(_DWORD *)&v12->AceCount = AccessMask;
  v12->Sbz1 = AceFlags;
  v12->AclRevision = 20;
  memmove(&v12[1], ProcessTrustLabelSid, 4LL * *((unsigned __int8 *)ProcessTrustLabelSid + 1) + 8);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = v11;
  return result;
}
