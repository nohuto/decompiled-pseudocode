/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x14091B2A0
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x1404037E0 (AdtpBuildAccessReasonAuditString.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14071C110 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14071C358 (PiAuGetStateDirectorySecurityObject.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x140796D88 (WmipSaveGuidSecurityDescriptor.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1408093D4 (_CmSetInstallerClassRegPropWorker.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1408107AC (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x140813FC4 (DrvDbGetRegistrarSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1408140A8 (DrvDbGetSecurityDescriptor.c)
 *     ObpSetObjectAuditInfo @ 0x140919544 (ObpSetObjectAuditInfo.c)
 *     ObSetSecurityDescriptorInfo @ 0x140919920 (ObSetSecurityDescriptorInfo.c)
 *     ExpWnfLookupPermanentName @ 0x14091BC30 (ExpWnfLookupPermanentName.c)
 *     ExpWnfRegisterPermanentName @ 0x14091C378 (ExpWnfRegisterPermanentName.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14094D4D0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _CmSetDeviceRegPropWorker @ 0x140951084 (_CmSetDeviceRegPropWorker.c)
 *     _PnpValidatePropertyData @ 0x1409548B4 (_PnpValidatePropertyData.c)
 *     BiCreateKeySecurityDescriptor @ 0x1409680C8 (BiCreateKeySecurityDescriptor.c)
 *     IopUpdateSecureDeviceClassState @ 0x14099C75C (IopUpdateSecureDeviceClassState.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1409B3B74 (WmipGetGuidSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140A6AB54 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140A77500 (_PnpGetPropertiesSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140C132D0 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140C13470 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140C13C4C (PiAuGetDriverDataDirectorySecurityObject.c)
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
