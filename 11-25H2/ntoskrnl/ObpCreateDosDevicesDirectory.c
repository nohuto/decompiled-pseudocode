/*
 * XREFs of ObpCreateDosDevicesDirectory @ 0x14073773C
 * Callers:
 *     ObpInitializeRootNamespace @ 0x140737C88 (ObpInitializeRootNamespace.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x140310610 (PsGetEffectiveServerSilo.c)
 *     PsIsHostSilo @ 0x14043DF70 (PsIsHostSilo.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlGetDaclSecurityDescriptor @ 0x140457450 (RtlGetDaclSecurityDescriptor.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwCreateDirectoryObjectEx @ 0x14069C6E0 (ZwCreateDirectoryObjectEx.c)
 *     ZwCreateSymbolicLinkObject @ 0x14069CA40 (ZwCreateSymbolicLinkObject.c)
 *     ObpGetDosDevicesProtection @ 0x1407379BC (ObpGetDosDevicesProtection.c)
 *     ObpSetDeviceMap @ 0x140A77D08 (ObpSetDeviceMap.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCreateDosDevicesDirectory(__int64 a1, void *a2, void *a3, __int64 a4)
{
  __int64 result; // rax
  NTSTATUS v9; // ebx
  void *EffectiveServerSilo; // rax
  char v11; // bl
  BOOLEAN DaclPresent; // [rsp+38h] [rbp-49h] BYREF
  BOOLEAN DaclDefaulted[7]; // [rsp+39h] [rbp-48h] BYREF
  HANDLE LinkHandle; // [rsp+40h] [rbp-41h] BYREF
  HANDLE DirectoryHandle; // [rsp+48h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-31h] BYREF
  PACL Dacl; // [rsp+80h] [rbp-1h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+88h] [rbp+7h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+27h]
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp+2Fh] BYREF

  DirectoryHandle = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v19 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  LinkHandle = 0LL;
  DestinationString = 0LL;
  if ( PsIsHostSilo(a1) && a3 )
    return 3221225485LL;
  result = ObpGetDosDevicesProtection(SecurityDescriptor);
  if ( (int)result >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpGlobalDirectoryName;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
    ObjectAttributes.Attributes = 528;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v9 = ZwCreateDirectoryObjectEx(&DirectoryHandle, 0xF000Fu, &ObjectAttributes, a3, 0);
    if ( v9 >= 0 )
    {
      EffectiveServerSilo = (void *)PdcCreateWatchdogAroundClientCall();
      if ( (void *)a1 == EffectiveServerSilo )
      {
        v11 = 3;
      }
      else
      {
        v11 = 4;
        EffectiveServerSilo = (void *)PsGetEffectiveServerSilo(a1);
      }
      v9 = ObpSetDeviceMap(EffectiveServerSilo, v11, a4);
      if ( v9 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, &word_140AD8570);
        ObjectAttributes.RootDirectory = DirectoryHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpGlobalRootNameString;
        ObjectAttributes.Attributes = 528;
        ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        v9 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &DestinationString);
        if ( v9 >= 0 )
        {
          ZwClose(LinkHandle);
          ObjectAttributes.RootDirectory = DirectoryHandle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpGlobalNameString;
          ObjectAttributes.Attributes = 528;
          ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          v9 = ZwCreateSymbolicLinkObject(
                 &LinkHandle,
                 0xF0001u,
                 &ObjectAttributes,
                 (PUNICODE_STRING)&ObpGlobalDosDevicesShortName);
          if ( v9 >= 0 )
          {
            ZwClose(LinkHandle);
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpDosDevicesNameString;
            ObjectAttributes.RootDirectory = a2;
            ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
            ObjectAttributes.Attributes = 528;
            ObjectAttributes.SecurityQualityOfService = 0LL;
            v9 = ZwCreateSymbolicLinkObject(
                   &LinkHandle,
                   0xF0001u,
                   &ObjectAttributes,
                   (PUNICODE_STRING)&ObpDosDevicesShortNameRootString);
            if ( v9 >= 0 )
              ZwClose(LinkHandle);
          }
        }
      }
    }
    else
    {
      DirectoryHandle = 0LL;
    }
    DaclPresent = 0;
    Dacl = 0LL;
    RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, DaclDefaulted);
    ExFreePoolWithTag(Dacl, 0x6C636144u);
    if ( DirectoryHandle )
      ZwClose(DirectoryHandle);
    return (unsigned int)v9;
  }
  return result;
}
