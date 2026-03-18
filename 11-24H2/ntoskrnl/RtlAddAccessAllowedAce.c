/*
 * XREFs of RtlAddAccessAllowedAce @ 0x1409A7460
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x140364418 (SepAppendAceToTokenDefaultDacl.c)
 *     RtlCheckTokenMembershipEx @ 0x140471840 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x14048DC70 (RtlCheckTokenCapability.c)
 *     SepInitProcessAuditSd @ 0x140607F04 (SepInitProcessAuditSd.c)
 *     WdipAccessCheck @ 0x14064C074 (WdipAccessCheck.c)
 *     ExpPlRunOnceInit @ 0x140655240 (ExpPlRunOnceInit.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140B83708 (ViInitializeLocalSystemDescriptor.c)
 *     IopCreateUmdfDirectory @ 0x140C1C5E8 (IopCreateUmdfDirectory.c)
 *     IopApplySystemPartitionProt @ 0x140C1E168 (IopApplySystemPartitionProt.c)
 *     PopUmpoInitializeChannel @ 0x140C32438 (PopUmpoInitializeChannel.c)
 *     SshpAlpcInitialize @ 0x140C34404 (SshpAlpcInitialize.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140C35470 (PspInitializeCpuPartitionsDefaultSd.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140C35F38 (PspInitializeSystemPartitionPhase0.c)
 *     SepInitSystemDacls @ 0x140C36FC8 (SepInitSystemDacls.c)
 *     SeMakeAnonymousLogonToken @ 0x140C39E0C (SeMakeAnonymousLogonToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140C3A090 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeSystemToken @ 0x140C3A2F0 (SeMakeSystemToken.c)
 *     WmipInitializeSecurity @ 0x140C3CD70 (WmipInitializeSecurity.c)
 *     ExpKeyedEventInitialization @ 0x140C43A94 (ExpKeyedEventInitialization.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     RtlValidAcl @ 0x14091CB10 (RtlValidAcl.c)
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
  if ( !RtlValidAcl((__int64)Acl) )
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
