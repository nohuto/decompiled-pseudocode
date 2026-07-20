/*
 * XREFs of SmpInitializeDosDevices @ 0x140015700
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140015DF4 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     SmpFreeSavedRegistryEntry @ 0x14000D6BC (SmpFreeSavedRegistryEntry.c)
 */

__int64 SmpInitializeDosDevices()
{
  __int16 v0; // r14
  NTSTATUS v1; // ebx
  __int64 v2; // r8
  unsigned int v3; // edx
  __int64 v4; // rdi
  struct _UNICODE_STRING *v5; // r15
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v8; // [rsp+28h] [rbp-38h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *SymbolicLinkHandle; // [rsp+90h] [rbp+30h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 208LL;
  v8 = L"\\??";
  SymbolicLinkHandle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v7;
  v7 = 524294LL;
  ObjectAttributes.RootDirectory = 0LL;
  v0 = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = NtOpenDirectoryObject(&SmpDosDevicesObjectDirectory, 0xF000Fu, &ObjectAttributes);
  if ( v1 >= 0 )
  {
    v4 = SmpDosDevicesList;
    while ( (__int64 *)v4 != &SmpDosDevicesList )
    {
      v5 = (struct _UNICODE_STRING *)v4;
      ObjectAttributes.RootDirectory = SmpDosDevicesObjectDirectory;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)(v4 + 16);
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 208;
      ObjectAttributes.SecurityDescriptor = SmpPrimarySecurityDescriptor;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      if ( SmpPrimarySecurityDescriptor )
      {
        v0 = *((_WORD *)SmpPrimarySecurityDescriptor + 1) & 8;
        *((_WORD *)SmpPrimarySecurityDescriptor + 1) |= 8u;
      }
      v1 = NtCreateSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes, (PUNICODE_STRING)(v4 + 32));
      if ( v1 == 0x40000000 )
      {
        NtMakeTemporaryObject(SymbolicLinkHandle);
        NtClose(SymbolicLinkHandle);
        if ( *(_WORD *)(v4 + 32) )
        {
          ObjectAttributes.Attributes &= ~0x80u;
          v1 = NtCreateSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes, (PUNICODE_STRING)(v4 + 32));
        }
        else
        {
          v1 = 0;
        }
      }
      if ( ObjectAttributes.SecurityDescriptor )
        *((_WORD *)ObjectAttributes.SecurityDescriptor + 1) ^= (v0 ^ *((_WORD *)ObjectAttributes.SecurityDescriptor + 1)) & 8;
      if ( v1 < 0 )
      {
        v2 = *(_QWORD *)(v4 + 24);
        v3 = 3646;
        goto LABEL_16;
      }
      NtClose(SymbolicLinkHandle);
      v4 = *(_QWORD *)v4;
      SmpFreeSavedRegistryEntry(v5);
    }
  }
  else
  {
    v2 = (__int64)v8;
    v3 = 3594;
LABEL_16:
    SmpLogFailureString((__int64)"SmpInitializeDosDevices", v3, v2, v1);
  }
  return (unsigned int)v1;
}
