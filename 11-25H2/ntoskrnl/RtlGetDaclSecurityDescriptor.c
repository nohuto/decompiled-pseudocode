/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x140457450
 * Callers:
 *     ObCleanupSecurityDescriptor @ 0x140736E34 (ObCleanupSecurityDescriptor.c)
 *     ObpCreateDosDevicesDirectory @ 0x14073773C (ObpCreateDosDevicesDirectory.c)
 *     RtlReplaceSidInSd @ 0x140771C10 (RtlReplaceSidInSd.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140774824 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     ExpInitFullProcessSecurityInfo @ 0x1407A56A0 (ExpInitFullProcessSecurityInfo.c)
 *     CmpCopySaclToVirtualKey @ 0x1407CD3BC (CmpCopySaclToVirtualKey.c)
 *     MiInitializeMemoryEvents @ 0x1407F007C (MiInitializeMemoryEvents.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x1408977AC (ExpWnfSpecializeSecurityDescriptor.c)
 *     ObpInsertOrLocateNamedObject @ 0x140915990 (ObpInsertOrLocateNamedObject.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14094D4D0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     IopGetSecurityDescriptorInformation @ 0x14099CA18 (IopGetSecurityDescriptorInformation.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1409ABF7C (PipChangeDeviceObjectFromRegistryProperties.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1409E8690 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN DaclPresent,
        PACL *Dacl,
        PBOOLEAN DaclDefaulted)
{
  __int64 v5; // rdx
  ACL *v6; // rax
  __int16 v7; // dx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v6 = 0LL;
  if ( (*((_BYTE *)SecurityDescriptor + 2) & 4) != 0 )
  {
    *DaclPresent = 1;
    v7 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v7 & 4) != 0 )
    {
      if ( v7 >= 0 )
      {
        v6 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else
      {
        v5 = *((unsigned int *)SecurityDescriptor + 4);
        if ( (_DWORD)v5 )
          v6 = (ACL *)((char *)SecurityDescriptor + v5);
      }
    }
    *Dacl = v6;
    *DaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 8) != 0;
  }
  else
  {
    *DaclPresent = 0;
  }
  return 0;
}
