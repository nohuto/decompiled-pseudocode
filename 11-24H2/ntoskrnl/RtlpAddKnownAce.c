/*
 * XREFs of RtlpAddKnownAce @ 0x140911480
 * Callers:
 *     DbgkpCreateNotificationEvent @ 0x140704940 (DbgkpCreateNotificationEvent.c)
 *     PiAuCheckTokenMembership @ 0x140725A78 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140725C20 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140725E68 (PiAuGetStateDirectorySecurityObject.c)
 *     ObCreateKernelObjectsSD @ 0x140740DF8 (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x14074190C (ObpGetDosDevicesProtection.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14074264C (ObpCreateDefaultObjectTypeSD.c)
 *     PfpCreateEventInternal @ 0x140746AD0 (PfpCreateEventInternal.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407505BC (PopCreateHiberFileSecurityDescriptor.c)
 *     PspSessionObjectCreate @ 0x14077BC7C (PspSessionObjectCreate.c)
 *     RtlAddAccessAllowedObjectAce @ 0x14077F9C0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedAceEx @ 0x14077FA20 (RtlAddAccessDeniedAceEx.c)
 *     RtlAddAccessDeniedObjectAce @ 0x14077FA50 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x14077FCB0 (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessAceEx @ 0x14077FCF0 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x14077FD40 (RtlAddAuditAccessObjectAce.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x140783D34 (RtlpSysVolCreateSecurityDescriptor.c)
 *     SepInitializationPhase1 @ 0x14078EEB0 (SepInitializationPhase1.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14079B2CC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpInitFullProcessSecurityInfo @ 0x1407B4EC0 (ExpInitFullProcessSecurityInfo.c)
 *     NtSetUuidSeed @ 0x1407C1270 (NtSetUuidSeed.c)
 *     CMFCreateSecurityDescriptor @ 0x1407C2AB0 (CMFCreateSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407DC538 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407DD50C (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407DD764 (CmpHiveRootSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x1407EE934 (MiCreatePagingFile.c)
 *     MiCreateMemoryEventSD @ 0x140800380 (MiCreateMemoryEventSD.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140820DEC (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140824610 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x14082B8D0 (ObpGetSilosRootDirectory.c)
 *     SepCreateImpersonationTokenDacl @ 0x140852130 (SepCreateImpersonationTokenDacl.c)
 *     PiUEventInitClientRegistrationContext @ 0x14085835C (PiUEventInitClientRegistrationContext.c)
 *     BiCreateKeySecurityDescriptor @ 0x140858674 (BiCreateKeySecurityDescriptor.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140858A1C (PspAllocateAndQueryNotificationChannel.c)
 *     LocalGetAclForString @ 0x140869D60 (LocalGetAclForString.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1408ABD7C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IoCreateDevice @ 0x1408ABEC0 (IoCreateDevice.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140912870 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 *     PopCreateNotificationName @ 0x1409A07D8 (PopCreateNotificationName.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1409CEE40 (PiDevCfgGetKeySecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140A40460 (ObpVerifyAccessToBoundaryEntry.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140A66A24 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140A73678 (_PnpGetPropertiesSecurityDescriptor.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlValidAcl @ 0x140910580 (RtlValidAcl.c)
 */

__int64 __fastcall RtlpAddKnownAce(ACL *a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src, UCHAR a6)
{
  UCHAR v7; // si
  unsigned __int8 AclRevision; // r14
  __int64 result; // rax
  ACL *v11; // rcx
  unsigned int i; // edx
  ACL *v13; // r8
  USHORT v14; // dx
  unsigned int v15; // eax

  v7 = a3;
  if ( (unsigned __int64)Src <= 0x7FFFFFFF0000LL || (*Src & 0xF) != 1 || Src[1] > 0xFu )
    return 3221225592LL;
  AclRevision = a1->AclRevision;
  if ( a2 > 4 || AclRevision > 4u )
    return 3221225561LL;
  if ( AclRevision <= (unsigned __int8)a2 )
    AclRevision = a2;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a6 == 2 )
    {
      v15 = a3 & 0xFFFFFF20;
    }
    else
    {
      if ( a6 )
        return 3221225485LL;
      v15 = a3 & 0xFFFFFFC0;
    }
    if ( !v15 )
      goto LABEL_12;
    return 3221225485LL;
  }
LABEL_12:
  if ( !RtlValidAcl(a1) )
    return 3221225591LL;
  v11 = a1 + 1;
  for ( i = 0; i < a1->AceCount; ++i )
  {
    if ( v11 >= (ACL *)((char *)a1 + a1->AclSize) )
      return 3221225591LL;
    v11 = (ACL *)((char *)v11 + v11->AclSize);
  }
  v13 = (ACL *)((char *)a1 + a1->AclSize);
  if ( v11 > v13 )
    v11 = 0LL;
  v14 = 4 * (Src[1] + 4);
  if ( !v11 || (ACL *)((char *)v11 + v14) > v13 )
    return 3221225625LL;
  v11->AclSize = v14;
  v11->Sbz1 = v7;
  v11->AclRevision = a6;
  *(_DWORD *)&v11->AceCount = a4;
  memmove(&v11[1], Src, 4LL * Src[1] + 8);
  ++a1->AceCount;
  result = 0LL;
  a1->AclRevision = AclRevision;
  return result;
}
