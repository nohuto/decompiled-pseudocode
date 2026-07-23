/*
 * XREFs of RtlpAddKnownAce @ 0x18005F780
 * Callers:
 *     RtlDefaultNpAcl @ 0x180065B00 (RtlDefaultNpAcl.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1800663F4 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlAddAccessDeniedAceEx @ 0x18010EEC0 (RtlAddAccessDeniedAceEx.c)
 *     RtlAddAuditAccessAceEx @ 0x1801110A0 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAccessDeniedAce @ 0x1801169A0 (RtlAddAccessDeniedAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x18013C380 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x18013C3E0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x18013C640 (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x18013C680 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlValidSid @ 0x18005FCD0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x18005FD10 (RtlValidAcl.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpAddKnownAce(PACL Acl, unsigned int a2, int a3, int a4, unsigned __int8 *Sid, char a6)
{
  unsigned __int8 v10; // al
  unsigned __int8 AclRevision; // di
  PACL v12; // rcx
  unsigned int i; // edx
  ACL *v14; // rdx
  unsigned __int16 v15; // r8
  __int64 result; // rax
  unsigned int v17; // eax

  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  if ( Acl->AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  v10 = a2;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision <= v10 )
    AclRevision = v10;
  if ( (a3 & 0xFFFFFFE0) == 0 )
    goto LABEL_7;
  if ( a6 == 2 )
  {
    v17 = a3 & 0xFFFFFF20;
  }
  else
  {
    if ( a6 )
      return 3221225485LL;
    v17 = a3 & 0xFFFFFFC0;
  }
  if ( v17 )
    return 3221225485LL;
LABEL_7:
  if ( !RtlValidAcl(Acl) )
    return 3221225591LL;
  v12 = Acl + 1;
  for ( i = 0; i < Acl->AceCount; ++i )
  {
    if ( v12 >= (PACL)((char *)Acl + Acl->AclSize) )
      return 3221225591LL;
    v12 = (PACL)((char *)v12 + v12->AclSize);
  }
  v14 = (PACL)((char *)Acl + Acl->AclSize);
  if ( v12 > v14 )
    v12 = 0LL;
  v15 = 4 * (Sid[1] + 4);
  if ( !v12 || (PACL)((char *)v12 + v15) > v14 )
    return 3221225625LL;
  v12->AclSize = v15;
  v12->Sbz1 = a3;
  v12->AclRevision = a6;
  *(_DWORD *)&v12->AceCount = a4;
  memmove(&v12[1], Sid, 4LL * Sid[1] + 8);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
