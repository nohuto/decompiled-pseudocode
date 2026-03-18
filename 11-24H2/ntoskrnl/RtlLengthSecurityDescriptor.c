/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x14085A2E0
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x14040AF54 (AdtpBuildAccessReasonAuditString.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140728090 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1407282D8 (PiAuGetStateDirectorySecurityObject.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x1407A6158 (WmipSaveGuidSecurityDescriptor.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1408192D4 (_CmSetInstallerClassRegPropWorker.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1408206AC (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x140823DEC (DrvDbGetRegistrarSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140823ED0 (DrvDbGetSecurityDescriptor.c)
 *     ObSetSecurityDescriptorInfo @ 0x1408588B0 (ObSetSecurityDescriptorInfo.c)
 *     ExpWnfLookupPermanentName @ 0x14085ACA8 (ExpWnfLookupPermanentName.c)
 *     BiCreateKeySecurityDescriptor @ 0x14085C904 (BiCreateKeySecurityDescriptor.c)
 *     ObpSetObjectAuditInfo @ 0x140867674 (ObpSetObjectAuditInfo.c)
 *     _PnpValidatePropertyData @ 0x1408B8DD0 (_PnpValidatePropertyData.c)
 *     _CmSetDeviceRegPropWorker @ 0x140990F90 (_CmSetDeviceRegPropWorker.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14099C6D0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     IopUpdateSecureDeviceClassState @ 0x1409A1648 (IopUpdateSecureDeviceClassState.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1409CBEF4 (WmipGetGuidSecurityDescriptor.c)
 *     ExpWnfRegisterPermanentName @ 0x140A64B40 (ExpWnfRegisterPermanentName.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140A6D364 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140A79378 (_PnpGetPropertiesSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140C24360 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140C24500 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140C24CDC (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v1; // r8
  ULONG result; // eax
  __int64 v4; // rcx
  char *v5; // rcx
  __int64 v6; // rcx
  char *v7; // rcx
  __int64 v8; // rcx
  char *v9; // rcx
  __int64 v10; // rcx
  char *v11; // rcx

  v1 = *((_WORD *)SecurityDescriptor + 1);
  result = ((v1 >> 31) & 0xFFFFFFEC) + 40;
  if ( v1 >= 0 )
  {
    v5 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v4 = *((unsigned int *)SecurityDescriptor + 1);
    if ( !(_DWORD)v4 )
      goto LABEL_7;
    v5 = (char *)SecurityDescriptor + v4;
  }
  if ( v5 )
    result += (4 * (unsigned __int8)v5[1] + 11) & 0xFFFFFFFC;
  if ( v1 >= 0 )
  {
    v7 = (char *)*((_QWORD *)SecurityDescriptor + 2);
    goto LABEL_9;
  }
LABEL_7:
  v6 = *((unsigned int *)SecurityDescriptor + 2);
  if ( !(_DWORD)v6 )
    goto LABEL_11;
  v7 = (char *)SecurityDescriptor + v6;
LABEL_9:
  if ( v7 )
    result += (4 * (unsigned __int8)v7[1] + 11) & 0xFFFFFFFC;
LABEL_11:
  if ( (v1 & 4) == 0 )
    goto LABEL_17;
  if ( v1 >= 0 )
  {
    v9 = (char *)*((_QWORD *)SecurityDescriptor + 4);
  }
  else
  {
    v8 = *((unsigned int *)SecurityDescriptor + 4);
    if ( !(_DWORD)v8 )
      goto LABEL_17;
    v9 = (char *)SecurityDescriptor + v8;
  }
  if ( v9 )
    result += (*((unsigned __int16 *)v9 + 1) + 3) & 0xFFFFFFFC;
LABEL_17:
  if ( (v1 & 0x10) == 0 )
    return result;
  if ( v1 >= 0 )
  {
    v11 = (char *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v10 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v10 )
      return result;
    v11 = (char *)SecurityDescriptor + v10;
  }
  if ( v11 )
    result += (*((unsigned __int16 *)v11 + 1) + 3) & 0xFFFFFFFC;
  return result;
}
