/*
 * XREFs of RtlSetOwnerSecurityDescriptor @ 0x1409682F0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x140472DB0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x14048E220 (RtlCheckTokenCapability.c)
 *     PiAuCheckTokenMembership @ 0x14071BF68 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14071C110 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14071C358 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140774824 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolTakeOwnership @ 0x140774CC8 (RtlpSysVolTakeOwnership.c)
 *     CMFCreateSecurityDescriptor @ 0x1407B3370 (CMFCreateSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x1407CD3BC (CmpCopySaclToVirtualKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407CD7FC (CmpGenerateAppHiveSecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1408107AC (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1408140A8 (DrvDbGetSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x1409680C8 (BiCreateKeySecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140A6AB54 (_CmGetRegKeySecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140C132D0 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140C13470 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140C13C4C (PiAuGetDriverDataDirectorySecurityObject.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140C241A4 (PspInitializeCpuPartitionsDefaultSd.c)
 *     SepInitSystemDacls @ 0x140C25CF8 (SepInitSystemDacls.c)
 *     SeMakeAnonymousLogonToken @ 0x140C28B3C (SeMakeAnonymousLogonToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140C28DC0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeSystemToken @ 0x140C29020 (SeMakeSystemToken.c)
 *     WmipInitializeSecurity @ 0x140C2BA90 (WmipInitializeSecurity.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlSetOwnerSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID Owner,
        BOOLEAN OwnerDefaulted)
{
  __int16 v3; // ax
  __int16 v4; // ax

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v3 = *((_WORD *)SecurityDescriptor + 1);
  if ( v3 < 0 )
    return -1073741703;
  *((_QWORD *)SecurityDescriptor + 1) = 0LL;
  if ( Owner )
    *((_QWORD *)SecurityDescriptor + 1) = Owner;
  v4 = v3 & 0xFFFE;
  *((_WORD *)SecurityDescriptor + 1) = v4;
  if ( OwnerDefaulted )
    *((_WORD *)SecurityDescriptor + 1) = v4 | 1;
  return 0;
}
