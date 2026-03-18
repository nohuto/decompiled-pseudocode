/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x140454080
 * Callers:
 *     ObCleanupSecurityDescriptor @ 0x140742E54 (ObCleanupSecurityDescriptor.c)
 *     ObpCreateDosDevicesDirectory @ 0x14074375C (ObpCreateDosDevicesDirectory.c)
 *     RtlReplaceSidInSd @ 0x140780E60 (RtlReplaceSidInSd.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140783AD4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     ExpInitFullProcessSecurityInfo @ 0x1407B4A70 (ExpInitFullProcessSecurityInfo.c)
 *     CmpCopySaclToVirtualKey @ 0x1407DCB7C (CmpCopySaclToVirtualKey.c)
 *     MiInitializeMemoryEvents @ 0x1407FFF3C (MiInitializeMemoryEvents.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x140836D2C (ExpWnfSpecializeSecurityDescriptor.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140862DB8 (LocalConvertSDToStringSD_Rev1.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1409946EC (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14099C6D0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     IopGetSecurityDescriptorInformation @ 0x1409A1904 (IopGetSecurityDescriptorInformation.c)
 *     ObpInsertOrLocateNamedObject @ 0x1409E45C0 (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN DaclPresent,
        PACL *Dacl,
        PBOOLEAN DaclDefaulted)
{
  ACL *v4; // rax
  __int16 v5; // dx
  __int64 v6; // rdx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = 0LL;
  if ( (*((_BYTE *)SecurityDescriptor + 2) & 4) != 0 )
  {
    *DaclPresent = 1;
    v5 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v5 & 4) != 0 )
    {
      if ( v5 >= 0 )
      {
        v4 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else
      {
        v6 = *((unsigned int *)SecurityDescriptor + 4);
        if ( (_DWORD)v6 )
          v4 = (ACL *)((char *)SecurityDescriptor + v6);
      }
    }
    *Dacl = v4;
    *DaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 8) != 0;
  }
  else
  {
    *DaclPresent = 0;
  }
  return 0;
}
