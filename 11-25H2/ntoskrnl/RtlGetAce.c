/*
 * XREFs of RtlGetAce @ 0x1404044D0
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140403D20 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     ObpGetDosDevicesProtection @ 0x1407379BC (ObpGetDosDevicesProtection.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407461D8 (PopCreateHiberFileSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140774824 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407CDA54 (CmpHiveRootSecurityDescriptor.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1408A43D0 (SepAppendAceToTokenObjectAcl.c)
 *     LocalGetAclForString @ 0x140917620 (LocalGetAclForString.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14094D4D0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     ObInitSystem @ 0x140C4FF98 (ObInitSystem.c)
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
