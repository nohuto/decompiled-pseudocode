/*
 * XREFs of RtlSetGroupSecurityDescriptor @ 0x140A19640
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x140472DB0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x14048E220 (RtlCheckTokenCapability.c)
 *     PiAuCheckTokenMembership @ 0x14071BF68 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14071C110 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14071C358 (PiAuGetStateDirectorySecurityObject.c)
 *     CmpCopySaclToVirtualKey @ 0x1407CD3BC (CmpCopySaclToVirtualKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407CD7FC (CmpGenerateAppHiveSecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1408107AC (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1408140A8 (DrvDbGetSecurityDescriptor.c)
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

NTSTATUS __stdcall RtlSetGroupSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID Group,
        BOOLEAN GroupDefaulted)
{
  __int16 v3; // ax
  __int16 v4; // ax

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v3 = *((_WORD *)SecurityDescriptor + 1);
  if ( v3 < 0 )
    return -1073741703;
  *((_QWORD *)SecurityDescriptor + 2) = 0LL;
  if ( Group )
    *((_QWORD *)SecurityDescriptor + 2) = Group;
  v4 = v3 & 0xFFFD;
  *((_WORD *)SecurityDescriptor + 1) = v4;
  if ( GroupDefaulted )
    *((_WORD *)SecurityDescriptor + 1) = v4 | 2;
  return 0;
}
