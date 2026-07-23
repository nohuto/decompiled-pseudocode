/*
 * XREFs of RtlAddMandatoryAce @ 0x14092AE40
 * Callers:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407CD7FC (CmpGenerateAppHiveSecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140999270 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14099EC00 (IopCreateSecurityDescriptorPerType.c)
 *     SepInitSystemDacls @ 0x140C25CF8 (SepInitSystemDacls.c)
 *     ExpKeyedEventInitialization @ 0x140C326DC (ExpKeyedEventInitialization.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     RtlValidAcl @ 0x14092A320 (RtlValidAcl.c)
 */

NTSTATUS __cdecl RtlAddMandatoryAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        PSID Sid,
        UCHAR AceType,
        ACCESS_MASK AccessMask)
{
  UCHAR v7; // r14
  int v9; // ecx
  UCHAR AclRevision; // si
  PACL v11; // rcx
  unsigned int i; // edx
  ACL *v13; // r8
  USHORT v14; // dx
  NTSTATUS result; // eax

  v7 = AceFlags;
  if ( !Acl )
    return -1073741705;
  if ( AceType != 17 )
    return -1073741811;
  if ( (unsigned __int64)Sid <= 0x7FFFFFFF0000LL || (*(_BYTE *)Sid & 0xF) != 1 || *((_BYTE *)Sid + 1) > 0xFu )
    return -1073741704;
  v9 = *(_DWORD *)((char *)Sid + 2);
  if ( !v9 )
    v9 = *((unsigned __int16 *)Sid + 3) - 4096;
  if ( v9 )
    return -1073741811;
  if ( Acl->AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision <= (unsigned __int8)AceRevision )
    AclRevision = AceRevision;
  if ( (AceFlags & 0xFFFFFFE0) != 0 || (AccessMask & 0xFFFFFFF8) != 0 )
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
  v11->Sbz1 = v7;
  v11->AclRevision = 17;
  *(_DWORD *)&v11->AceCount = AccessMask;
  memmove(&v11[1], Sid, 4LL * *((unsigned __int8 *)Sid + 1) + 8);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
