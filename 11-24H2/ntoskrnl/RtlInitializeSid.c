/*
 * XREFs of RtlInitializeSid @ 0x1409E3B60
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x14046B090 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlInitializeSidEx @ 0x140471BB0 (RtlInitializeSidEx.c)
 *     WdipAccessCheck @ 0x14064C074 (WdipAccessCheck.c)
 *     PiAuAllocateAndInitializeSid @ 0x140727DA0 (PiAuAllocateAndInitializeSid.c)
 *     PiAuCheckClientInteractive @ 0x140727E24 (PiAuCheckClientInteractive.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14075229C (PopCreateHiberFileSecurityDescriptor.c)
 *     RtlGetAppContainerParent @ 0x140780C20 (RtlGetAppContainerParent.c)
 *     InitializeSidLookupTable @ 0x140796510 (InitializeSidLookupTable.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14079B1BC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     NtSetUuidSeed @ 0x1407C0E20 (NtSetUuidSeed.c)
 *     CMFCreateSecurityDescriptor @ 0x1407C187C (CMFCreateSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407DBFE8 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407DD214 (CmpHiveRootSecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1408206AC (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140823ED0 (DrvDbGetSecurityDescriptor.c)
 *     RtlCapabilityCheck @ 0x140A62840 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140A62BCC (RtlpCapabilityCheckSystemCapability.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A8BE6C (_SysCtxRegOpenCurrentUserKey.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140AA0B18 (ExpFirmwareAccessAppContainerCheck.c)
 *     IopCreateUmdfDirectory @ 0x140C1C5E8 (IopCreateUmdfDirectory.c)
 *     PopCreateTimebrokerServiceSid @ 0x140C2D120 (PopCreateTimebrokerServiceSid.c)
 *     PopNetInitialize @ 0x140C31EF4 (PopNetInitialize.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140C35470 (PspInitializeCpuPartitionsDefaultSd.c)
 *     SepVariableInitialization @ 0x140C37920 (SepVariableInitialization.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140C4A618 (CmpInitializeTrustedInstallerSid.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlInitializeSid(PSID Sid, PSID_IDENTIFIER_AUTHORITY IdentifierAuthority, UCHAR SubAuthorityCount)
{
  if ( SubAuthorityCount > 0xFu )
    return -1073741811;
  *((_BYTE *)Sid + 1) = SubAuthorityCount;
  *(_BYTE *)Sid = 1;
  *(struct _SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = *IdentifierAuthority;
  return 0;
}
