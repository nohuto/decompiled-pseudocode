/*
 * XREFs of RtlGetAce @ 0x14040BC40
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14040B494 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     ObpGetDosDevicesProtection @ 0x1407439DC (ObpGetDosDevicesProtection.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14075229C (PopCreateHiberFileSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140783AD4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407DD214 (CmpHiveRootSecurityDescriptor.c)
 *     LocalGetAclForString @ 0x140865750 (LocalGetAclForString.c)
 *     SepAppendAceToTokenObjectAcl @ 0x14090F590 (SepAppendAceToTokenObjectAcl.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14099C6D0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     ObInitSystem @ 0x140C612B4 (ObInitSystem.c)
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
