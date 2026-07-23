/*
 * XREFs of RtlValidSecurityDescriptor @ 0x14086BB60
 * Callers:
 *     AdtpIsSDValidSelfRelative @ 0x14069854C (AdtpIsSDValidSelfRelative.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140725C20 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140725E68 (PiAuGetStateDirectorySecurityObject.c)
 *     CMFCreateSecurityDescriptor @ 0x1407C2AB0 (CMFCreateSecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140820DEC (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140824610 (DrvDbGetSecurityDescriptor.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObpSetObjectAuditInfo @ 0x14086B968 (ObpSetObjectAuditInfo.c)
 *     ObpAdjustAccessMask @ 0x14086BAF0 (ObpAdjustAccessMask.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 *     _PnpOpenPropertiesKey @ 0x14097E830 (_PnpOpenPropertiesKey.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1409CEE40 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x140A61D70 (PnpInitializeInheritedRestrictedSd.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140A66A24 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140A73678 (_PnpGetPropertiesSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140C26390 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140C26530 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140C26D0C (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     RtlValidSid @ 0x14086B530 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140910580 (RtlValidAcl.c)
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
