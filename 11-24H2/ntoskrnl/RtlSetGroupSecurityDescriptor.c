/*
 * XREFs of RtlSetGroupSecurityDescriptor @ 0x140A23FB0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x140471840 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x14048DC70 (RtlCheckTokenCapability.c)
 *     PiAuCheckTokenMembership @ 0x140727EE8 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140728090 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1407282D8 (PiAuGetStateDirectorySecurityObject.c)
 *     CmpCopySaclToVirtualKey @ 0x1407DCB7C (CmpCopySaclToVirtualKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407DCFBC (CmpGenerateAppHiveSecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1408206AC (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140823ED0 (DrvDbGetSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140A6D364 (_CmGetRegKeySecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140C24360 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140C24500 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140C24CDC (PiAuGetDriverDataDirectorySecurityObject.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140C35470 (PspInitializeCpuPartitionsDefaultSd.c)
 *     SepInitSystemDacls @ 0x140C36FC8 (SepInitSystemDacls.c)
 *     SeMakeAnonymousLogonToken @ 0x140C39E0C (SeMakeAnonymousLogonToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140C3A090 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeSystemToken @ 0x140C3A2F0 (SeMakeSystemToken.c)
 *     WmipInitializeSecurity @ 0x140C3CD70 (WmipInitializeSecurity.c)
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
