/*
 * XREFs of RtlpAddKnownAce @ 0x14091DA10
 * Callers:
 *     DbgkpCreateNotificationEvent @ 0x140706D80 (DbgkpCreateNotificationEvent.c)
 *     PiAuCheckTokenMembership @ 0x140727EE8 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140728090 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1407282D8 (PiAuGetStateDirectorySecurityObject.c)
 *     ObCreateKernelObjectsSD @ 0x140742EC8 (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x1407439DC (ObpGetDosDevicesProtection.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14074435C (ObpCreateDefaultObjectTypeSD.c)
 *     PfpCreateEventInternal @ 0x1407487E0 (PfpCreateEventInternal.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14075229C (PopCreateHiberFileSecurityDescriptor.c)
 *     PspSessionObjectCreate @ 0x14077BDCC (PspSessionObjectCreate.c)
 *     RtlAddAccessAllowedObjectAce @ 0x14077FA90 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedAceEx @ 0x14077FAF0 (RtlAddAccessDeniedAceEx.c)
 *     RtlAddAccessDeniedObjectAce @ 0x14077FB20 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x14077FD80 (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessAceEx @ 0x14077FDC0 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x14077FE10 (RtlAddAuditAccessObjectAce.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x140783E04 (RtlpSysVolCreateSecurityDescriptor.c)
 *     SepInitializationPhase1 @ 0x14078EEE0 (SepInitializationPhase1.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14079B1BC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpInitFullProcessSecurityInfo @ 0x1407B4A70 (ExpInitFullProcessSecurityInfo.c)
 *     NtSetUuidSeed @ 0x1407C0E20 (NtSetUuidSeed.c)
 *     CMFCreateSecurityDescriptor @ 0x1407C187C (CMFCreateSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407DBFE8 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407DCFBC (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407DD214 (CmpHiveRootSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x1407EE364 (MiCreatePagingFile.c)
 *     MiCreateMemoryEventSD @ 0x1407FFC40 (MiCreateMemoryEventSD.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1408206AC (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140823ED0 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x14082B0A0 (ObpGetSilosRootDirectory.c)
 *     SepCreateImpersonationTokenDacl @ 0x140855E70 (SepCreateImpersonationTokenDacl.c)
 *     PiUEventInitClientRegistrationContext @ 0x14085C5EC (PiUEventInitClientRegistrationContext.c)
 *     BiCreateKeySecurityDescriptor @ 0x14085C904 (BiCreateKeySecurityDescriptor.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14085CCAC (PspAllocateAndQueryNotificationChannel.c)
 *     LocalGetAclForString @ 0x140865750 (LocalGetAclForString.c)
 *     sub_140973C40 @ 0x140973C40 (sub_140973C40.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14099C6D0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1409A33EC (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IoCreateDevice @ 0x1409A3530 (IoCreateDevice.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1409B2350 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PopCreateNotificationName @ 0x1409BA188 (PopCreateNotificationName.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140A49740 (ObpVerifyAccessToBoundaryEntry.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140A6D364 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140A79378 (_PnpGetPropertiesSecurityDescriptor.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     RtlValidAcl @ 0x14091CB10 (RtlValidAcl.c)
 */

__int64 __fastcall RtlpAddKnownAce(__int64 a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src, char a6)
{
  char v7; // si
  unsigned __int8 v9; // r14
  __int64 result; // rax
  unsigned __int64 v11; // rcx
  unsigned int i; // edx
  unsigned __int64 v13; // r8
  unsigned __int16 v14; // dx
  unsigned int v15; // eax

  v7 = a3;
  if ( (unsigned __int64)Src <= 0x7FFFFFFF0000LL || (*Src & 0xF) != 1 || Src[1] > 0xFu )
    return 3221225592LL;
  v9 = *(_BYTE *)a1;
  if ( a2 > 4 || v9 > 4u )
    return 3221225561LL;
  if ( v9 <= (unsigned __int8)a2 )
    v9 = a2;
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
  v11 = a1 + 8;
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 4); ++i )
  {
    if ( v11 >= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
      return 3221225591LL;
    v11 += *(unsigned __int16 *)(v11 + 2);
  }
  v13 = a1 + *(unsigned __int16 *)(a1 + 2);
  if ( v11 > v13 )
    v11 = 0LL;
  v14 = 4 * (Src[1] + 4);
  if ( !v11 || v11 + v14 > v13 )
    return 3221225625LL;
  *(_WORD *)(v11 + 2) = v14;
  *(_BYTE *)(v11 + 1) = v7;
  *(_BYTE *)v11 = a6;
  *(_DWORD *)(v11 + 4) = a4;
  memmove((void *)(v11 + 8), Src, 4LL * Src[1] + 8);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = v9;
  return result;
}
