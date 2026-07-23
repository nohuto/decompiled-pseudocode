/*
 * XREFs of IopGetSecurityDescriptorInformation @ 0x140A6073C
 * Callers:
 *     IoCreateDeviceSecure @ 0x140A603E0 (IoCreateDeviceSecure.c)
 *     IopQuerySecureDeviceClassState @ 0x140A9FB70 (IopQuerySecureDeviceClassState.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140449130 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140A211D0 (RtlGetSaclSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140A71F80 (RtlGetGroupSecurityDescriptor.c)
 */

__int64 __fastcall IopGetSecurityDescriptorInformation(_WORD *SecurityDescriptor, BOOLEAN *a2, _DWORD *a3)
{
  NTSTATUS GroupSecurityDescriptor; // ecx
  __int16 v7; // cx
  __int64 v8; // rax
  char *v9; // rax
  int v10; // ebx
  BOOLEAN SaclPresent; // [rsp+50h] [rbp+30h] BYREF
  BOOLEAN GroupDefaulted; // [rsp+58h] [rbp+38h] BYREF
  PSID Group; // [rsp+68h] [rbp+48h] BYREF

  *a2 = 0;
  SaclPresent = 0;
  *a3 = 0;
  if ( *(_BYTE *)SecurityDescriptor == 1 )
  {
    v7 = SecurityDescriptor[1];
    if ( v7 >= 0 )
    {
      v9 = (char *)*((_QWORD *)SecurityDescriptor + 1);
    }
    else
    {
      v8 = *((unsigned int *)SecurityDescriptor + 1);
      if ( (_DWORD)v8 )
        v9 = (char *)SecurityDescriptor + v8;
      else
        v9 = 0LL;
    }
    Group = v9;
    GroupDefaulted = v7 & 1;
    v10 = v9 != 0LL;
    GroupSecurityDescriptor = RtlGetGroupSecurityDescriptor(SecurityDescriptor, &Group, &GroupDefaulted);
    if ( GroupSecurityDescriptor >= 0 )
    {
      if ( Group )
        v10 |= 2u;
      GroupSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                                  SecurityDescriptor,
                                  &SaclPresent,
                                  (PACL *)&Group,
                                  &GroupDefaulted);
      if ( GroupSecurityDescriptor >= 0 )
      {
        if ( SaclPresent )
          v10 |= 8u;
        GroupSecurityDescriptor = RtlGetDaclSecurityDescriptor(
                                    SecurityDescriptor,
                                    &SaclPresent,
                                    (PACL *)&Group,
                                    &GroupDefaulted);
        if ( GroupSecurityDescriptor >= 0 )
        {
          if ( SaclPresent )
            v10 |= 4u;
          *a2 = GroupDefaulted;
          *a3 = v10;
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741736;
  }
  return (unsigned int)GroupSecurityDescriptor;
}
