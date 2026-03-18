/*
 * XREFs of ObpCreateDosDevicesDirectory @ 0x14074375C
 * Callers:
 *     ObpInitializeRootNamespace @ 0x140743CA8 (ObpInitializeRootNamespace.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x140349B30 (PsGetEffectiveServerSilo.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     PsIsHostSilo @ 0x14043E2E0 (PsIsHostSilo.c)
 *     RtlGetDaclSecurityDescriptor @ 0x140454080 (RtlGetDaclSecurityDescriptor.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140484160 (PdcCreateWatchdogAroundClientCall.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwCreateDirectoryObjectEx @ 0x1406A79B0 (ZwCreateDirectoryObjectEx.c)
 *     ZwCreateSymbolicLinkObject @ 0x1406A7D10 (ZwCreateSymbolicLinkObject.c)
 *     ObpGetDosDevicesProtection @ 0x1407439DC (ObpGetDosDevicesProtection.c)
 *     ObpSetDeviceMap @ 0x140A79B78 (ObpSetDeviceMap.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCreateDosDevicesDirectory(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int DirectoryObject; // ebx
  void *EffectiveServerSilo; // rax
  char v11; // bl
  BOOLEAN DaclPresent; // [rsp+38h] [rbp-49h] BYREF
  BOOLEAN DaclDefaulted[7]; // [rsp+39h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-41h] BYREF
  HANDLE v15; // [rsp+48h] [rbp-39h] BYREF
  int v16; // [rsp+50h] [rbp-31h]
  int v17; // [rsp+54h] [rbp-2Dh]
  HANDLE v18; // [rsp+58h] [rbp-29h]
  __int64 *v19; // [rsp+60h] [rbp-21h]
  int v20; // [rsp+68h] [rbp-19h]
  int v21; // [rsp+6Ch] [rbp-15h]
  _OWORD *v22; // [rsp+70h] [rbp-11h]
  __int64 v23; // [rsp+78h] [rbp-9h]
  PACL Dacl; // [rsp+80h] [rbp-1h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+88h] [rbp+7h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+27h]
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp+2Fh] BYREF

  v15 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v26 = 0LL;
  v17 = 0;
  v21 = 0;
  Handle = 0LL;
  DestinationString = 0LL;
  if ( PsIsHostSilo(a1) && a3 )
    return 3221225485LL;
  result = ObpGetDosDevicesProtection(SecurityDescriptor);
  if ( (int)result >= 0 )
  {
    v16 = 48;
    v19 = &ObpGlobalDirectoryName;
    v18 = a2;
    v22 = SecurityDescriptor;
    v20 = 528;
    v23 = 0LL;
    DirectoryObject = ZwCreateDirectoryObjectEx((__int64)&v15, 983055LL);
    if ( DirectoryObject >= 0 )
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
      DirectoryObject = ObpSetDeviceMap(EffectiveServerSilo, v11, a4);
      if ( DirectoryObject >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, &word_140AEA890);
        v18 = v15;
        v16 = 48;
        v19 = &ObpGlobalRootNameString;
        v20 = 528;
        v22 = SecurityDescriptor;
        v23 = 0LL;
        DirectoryObject = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
        if ( DirectoryObject >= 0 )
        {
          ZwClose(Handle);
          v18 = v15;
          v16 = 48;
          v19 = &ObpGlobalNameString;
          v20 = 528;
          v22 = SecurityDescriptor;
          v23 = 0LL;
          DirectoryObject = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
          if ( DirectoryObject >= 0 )
          {
            ZwClose(Handle);
            v16 = 48;
            v19 = &ObpDosDevicesNameString;
            v18 = a2;
            v22 = SecurityDescriptor;
            v20 = 528;
            v23 = 0LL;
            DirectoryObject = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
            if ( DirectoryObject >= 0 )
              ZwClose(Handle);
          }
        }
      }
    }
    else
    {
      v15 = 0LL;
    }
    DaclPresent = 0;
    Dacl = 0LL;
    RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, DaclDefaulted);
    ExFreePoolWithTag(Dacl, 0x6C636144u);
    if ( v15 )
      ZwClose(v15);
    return (unsigned int)DirectoryObject;
  }
  return result;
}
