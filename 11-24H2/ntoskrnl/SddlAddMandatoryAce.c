/*
 * XREFs of SddlAddMandatoryAce @ 0x140911D60
 * Callers:
 *     LocalGetAclForString @ 0x140869D60 (LocalGetAclForString.c)
 * Callees:
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlValidSid @ 0x14086B530 (RtlValidSid.c)
 *     RtlCopySid @ 0x1408E7870 (RtlCopySid.c)
 *     RtlValidAcl @ 0x140910580 (RtlValidAcl.c)
 */

__int64 __fastcall SddlAddMandatoryAce(PACL Acl, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  int v9; // ecx
  UCHAR AclRevision; // bp
  PACL v11; // rbx
  unsigned int i; // ecx
  ACL *v13; // r15
  USHORT v14; // ax
  ULONG v15; // eax

  if ( !Acl )
    return 3221225591LL;
  if ( !RtlValidSid((PSID)a4) )
    return 3221225592LL;
  v9 = *(_DWORD *)(a4 + 2);
  if ( !v9 )
    v9 = *(unsigned __int16 *)(a4 + 6) - 4096;
  if ( v9 )
    return 3221225485LL;
  if ( Acl->AclRevision > 4u )
    return 3221225561LL;
  AclRevision = 2;
  if ( Acl->AclRevision > 2u )
    AclRevision = Acl->AclRevision;
  if ( (a3 & 0xFFFFFFE0) != 0 || (a6 & 0xFFFFFFF8) != 0 )
    return 3221225485LL;
  if ( !RtlValidAcl(Acl) )
    return 3221225591LL;
  v11 = Acl + 1;
  for ( i = 0; i < Acl->AceCount; ++i )
  {
    if ( v11 >= (PACL)((char *)Acl + Acl->AclSize) )
      return 3221225591LL;
    v11 = (PACL)((char *)v11 + v11->AclSize);
  }
  v13 = (PACL)((char *)Acl + Acl->AclSize);
  if ( v11 > v13 )
    v11 = 0LL;
  v14 = RtlLengthSid((PSID)a4) + 8;
  if ( !v11 || (PACL)((char *)v11 + v14) > v13 )
    return 3221225625LL;
  v11->Sbz1 = a3;
  v11->AclRevision = 17;
  v11->AclSize = v14;
  *(_DWORD *)&v11->AceCount = a6;
  v15 = RtlLengthSid((PSID)a4);
  RtlCopySid(v15, &v11[1], (PSID)a4);
  Acl->AclRevision = AclRevision;
  ++Acl->AceCount;
  return 0LL;
}
