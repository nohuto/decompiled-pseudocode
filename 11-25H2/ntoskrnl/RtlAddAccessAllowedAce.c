/*
 * XREFs of RtlAddAccessAllowedAce @ 0x1409A6F20
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x14036B568 (SepAppendAceToTokenDefaultDacl.c)
 *     RtlCheckTokenMembershipEx @ 0x140472DB0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x14048E220 (RtlCheckTokenCapability.c)
 *     SepInitProcessAuditSd @ 0x1405FBBC4 (SepInitProcessAuditSd.c)
 *     WdipAccessCheck @ 0x1406400B4 (WdipAccessCheck.c)
 *     ExpPlRunOnceInit @ 0x140649340 (ExpPlRunOnceInit.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140B73728 (ViInitializeLocalSystemDescriptor.c)
 *     IopCreateUmdfDirectory @ 0x140C0B414 (IopCreateUmdfDirectory.c)
 *     IopApplySystemPartitionProt @ 0x140C0D000 (IopApplySystemPartitionProt.c)
 *     PopUmpoInitializeChannel @ 0x140C21334 (PopUmpoInitializeChannel.c)
 *     SshpAlpcInitialize @ 0x140C23138 (SshpAlpcInitialize.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140C241A4 (PspInitializeCpuPartitionsDefaultSd.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140C24C6C (PspInitializeSystemPartitionPhase0.c)
 *     SepInitSystemDacls @ 0x140C25CF8 (SepInitSystemDacls.c)
 *     SeMakeAnonymousLogonToken @ 0x140C28B3C (SeMakeAnonymousLogonToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140C28DC0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeSystemToken @ 0x140C29020 (SeMakeSystemToken.c)
 *     WmipInitializeSecurity @ 0x140C2BA90 (WmipInitializeSecurity.c)
 *     ExpKeyedEventInitialization @ 0x140C326DC (ExpKeyedEventInitialization.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     RtlValidAcl @ 0x14092A320 (RtlValidAcl.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  UCHAR AclRevision; // bp
  NTSTATUS result; // eax
  PACL v9; // rcx
  unsigned int i; // edx
  ACL *v11; // r8
  USHORT v12; // dx

  if ( (unsigned __int64)Sid <= 0x7FFFFFFF0000LL || (*(_BYTE *)Sid & 0xF) != 1 || *((_BYTE *)Sid + 1) > 0xFu )
    return -1073741704;
  AclRevision = Acl->AclRevision;
  if ( AceRevision > 4 || AclRevision > 4u )
    return -1073741735;
  if ( AclRevision <= (unsigned __int8)AceRevision )
    AclRevision = AceRevision;
  if ( !RtlValidAcl(Acl) )
    return -1073741705;
  v9 = Acl + 1;
  for ( i = 0; i < Acl->AceCount; ++i )
  {
    if ( v9 >= (PACL)((char *)Acl + Acl->AclSize) )
      return -1073741705;
    v9 = (PACL)((char *)v9 + v9->AclSize);
  }
  v11 = (PACL)((char *)Acl + Acl->AclSize);
  if ( v9 > v11 )
    v9 = 0LL;
  v12 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
  if ( !v9 || (PACL)((char *)v9 + v12) > v11 )
    return -1073741671;
  v9->AclSize = v12;
  *(_WORD *)&v9->AclRevision = 0;
  *(_DWORD *)&v9->AceCount = AccessMask;
  memmove(&v9[1], Sid, 4LL * *((unsigned __int8 *)Sid + 1) + 8);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
