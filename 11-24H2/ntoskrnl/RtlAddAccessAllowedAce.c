/*
 * XREFs of RtlAddAccessAllowedAce @ 0x140911600
 * Callers:
 *     RtlCheckTokenCapability @ 0x1403B5260 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x1403B5770 (RtlCheckTokenMembershipEx.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x1403EAEE8 (SepAppendAceToTokenDefaultDacl.c)
 *     SepInitProcessAuditSd @ 0x140605560 (SepInitProcessAuditSd.c)
 *     WdipAccessCheck @ 0x14064A634 (WdipAccessCheck.c)
 *     ExpPlRunOnceInit @ 0x140653940 (ExpPlRunOnceInit.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140B85708 (ViInitializeLocalSystemDescriptor.c)
 *     IopCreateUmdfDirectory @ 0x140C1E628 (IopCreateUmdfDirectory.c)
 *     IopApplySystemPartitionProt @ 0x140C201A8 (IopApplySystemPartitionProt.c)
 *     PopUmpoInitializeChannel @ 0x140C34578 (PopUmpoInitializeChannel.c)
 *     SshpAlpcInitialize @ 0x140C36544 (SshpAlpcInitialize.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140C375B0 (PspInitializeCpuPartitionsDefaultSd.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140C38078 (PspInitializeSystemPartitionPhase0.c)
 *     SepInitSystemDacls @ 0x140C39108 (SepInitSystemDacls.c)
 *     SeMakeAnonymousLogonToken @ 0x140C3BF64 (SeMakeAnonymousLogonToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140C3C1E8 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeSystemToken @ 0x140C3C448 (SeMakeSystemToken.c)
 *     WmipInitializeSecurity @ 0x140C3EEC0 (WmipInitializeSecurity.c)
 *     ExpKeyedEventInitialization @ 0x140C459EC (ExpKeyedEventInitialization.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlValidAcl @ 0x140910580 (RtlValidAcl.c)
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
