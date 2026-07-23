/*
 * XREFs of RtlValidSecurityDescriptor @ 0x140919740
 * Callers:
 *     AdtpIsSDValidSelfRelative @ 0x14068C17C (AdtpIsSDValidSelfRelative.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14071C110 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14071C358 (PiAuGetStateDirectorySecurityObject.c)
 *     CMFCreateSecurityDescriptor @ 0x1407B3370 (CMFCreateSecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1408107AC (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1408140A8 (DrvDbGetSecurityDescriptor.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     ObpSetObjectAuditInfo @ 0x140919544 (ObpSetObjectAuditInfo.c)
 *     ObpAdjustAccessMask @ 0x1409196D0 (ObpAdjustAccessMask.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14094D4D0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpOpenPropertiesKey @ 0x140953450 (_PnpOpenPropertiesKey.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x140A65E38 (PnpInitializeInheritedRestrictedSd.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140A6AB54 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140A77500 (_PnpGetPropertiesSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140C132D0 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140C13470 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140C13C4C (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     RtlValidSid @ 0x140918DF0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x14092A320 (RtlValidAcl.c)
 */

BOOLEAN __stdcall RtlValidSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v2; // di
  __int64 v3; // rax
  unsigned int *v4; // rax
  char *v5; // rcx
  char *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  ACL *v9; // rcx
  __int16 v10; // ax
  __int64 v12; // rax
  ACL *v13; // rcx
  char *v14; // rcx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return 0;
  v2 = *((_WORD *)SecurityDescriptor + 1);
  if ( v2 >= 0 )
  {
    v6 = (char *)SecurityDescriptor + 8;
    v5 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v3 = *((unsigned int *)SecurityDescriptor + 1);
    if ( !(_DWORD)v3 )
    {
      v4 = (unsigned int *)((char *)SecurityDescriptor + 8);
      goto LABEL_8;
    }
    v5 = (char *)SecurityDescriptor + v3;
    v6 = (char *)SecurityDescriptor + 8;
  }
  if ( v5 && !RtlValidSid(v5) )
    return 0;
  v4 = (unsigned int *)v6;
  if ( v2 >= 0 )
  {
    v14 = (char *)*((_QWORD *)SecurityDescriptor + 2);
    goto LABEL_24;
  }
LABEL_8:
  v7 = *v4;
  if ( !(_DWORD)v7 )
    goto LABEL_9;
  v14 = (char *)SecurityDescriptor + v7;
LABEL_24:
  if ( v14 && !RtlValidSid(v14) )
    return 0;
LABEL_9:
  if ( (v2 & 4) == 0 )
    goto LABEL_14;
  if ( v2 >= 0 )
  {
    v9 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
  }
  else
  {
    v8 = *((unsigned int *)SecurityDescriptor + 4);
    if ( !(_DWORD)v8 )
      goto LABEL_14;
    v9 = (ACL *)((char *)SecurityDescriptor + v8);
  }
  if ( v9 && !RtlValidAcl(v9) )
    return 0;
LABEL_14:
  v10 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v10 & 0x10) == 0 )
    return 1;
  if ( v10 >= 0 )
  {
    v13 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v12 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v12 )
      return 1;
    v13 = (ACL *)((char *)SecurityDescriptor + v12);
  }
  if ( !v13 )
    return 1;
  return RtlValidAcl(v13) != 0;
}
