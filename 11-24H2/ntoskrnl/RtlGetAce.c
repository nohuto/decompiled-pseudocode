/*
 * XREFs of RtlGetAce @ 0x140404120
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140403974 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     ObpGetDosDevicesProtection @ 0x14074190C (ObpGetDosDevicesProtection.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407505BC (PopCreateHiberFileSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140783A04 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407DD764 (CmpHiveRootSecurityDescriptor.c)
 *     LocalGetAclForString @ 0x140869D60 (LocalGetAclForString.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1408E6CE0 (SepAppendAceToTokenObjectAcl.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1409CEE40 (PiDevCfgGetKeySecurityDescriptor.c)
 *     ObInitSystem @ 0x140C63408 (ObInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetAce(PACL Acl, ULONG AceIndex, PVOID *Ace)
{
  PACL v4; // r9
  ULONG i; // edx
  ACL *v6; // rax

  if ( (unsigned __int8)(Acl->AclRevision - 2) > 2u || AceIndex >= Acl->AceCount )
    return -1073741811;
  v4 = Acl + 1;
  for ( i = 0; ; ++i )
  {
    *Ace = v4;
    v6 = (PACL)((char *)Acl + Acl->AclSize);
    if ( i >= AceIndex )
      break;
    if ( v4 >= v6 )
      return -1073741811;
    v4 = (PACL)((char *)v4 + v4->AclSize);
  }
  if ( v4 >= v6 )
    return -1073741811;
  else
    return 0;
}
