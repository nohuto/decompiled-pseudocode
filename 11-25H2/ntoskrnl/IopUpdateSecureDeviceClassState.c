/*
 * XREFs of IopUpdateSecureDeviceClassState @ 0x14099C75C
 * Callers:
 *     IoCreateDeviceSecure @ 0x14099CC50 (IoCreateDeviceSecure.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1404749A0 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwCreateKey @ 0x14069B4E0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14069BD40 (ZwSetValueKey.c)
 *     RtlLengthSecurityDescriptor @ 0x14091B2A0 (RtlLengthSecurityDescriptor.c)
 *     RtlStringFromGUIDEx @ 0x140965070 (RtlStringFromGUIDEx.c)
 *     RtlGetPersistedStateLocation @ 0x1409B3D60 (RtlGetPersistedStateLocation.c)
 *     IopOpenRegistryKeyEx @ 0x140A3E608 (IopOpenRegistryKeyEx.c)
 *     IopCreateRegistryKeyEx @ 0x140A6FC5C (IopCreateRegistryKeyEx.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopUpdateSecureDeviceClassState(PGUID Guid, __int64 a2)
{
  void *v2; // r14
  void *v3; // r12
  ULONG BufferLengthIn; // r15d
  WCHAR *TargetPath; // rdi
  NTSTATUS PersistedStateLocation; // eax
  NTSTATUS inited; // ebx
  int v9; // eax
  ULONG v10; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-41h] BYREF
  void *v14; // [rsp+50h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-31h] BYREF
  UNICODE_STRING GuidString; // [rsp+68h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-11h] BYREF
  ULONG BufferLengthOut; // [rsp+100h] [rbp+77h] BYREF
  void *v20; // [rsp+108h] [rbp+7Fh] BYREF

  Handle = 0LL;
  v2 = 0LL;
  KeyHandle = 0LL;
  v3 = 0LL;
  BufferLengthOut = 0;
  memset(&ObjectAttributes, 0, 44);
  BufferLengthIn = 256;
  v20 = 0LL;
  DestinationString = 0LL;
  v14 = 0LL;
  GuidString = 0LL;
  while ( 1 )
  {
    TargetPath = (WCHAR *)ExAllocatePool2(0x100uLL);
    if ( !TargetPath )
    {
      inited = -1073741670;
      goto LABEL_19;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"SecureDeviceClass",
                               0LL,
                               L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Class",
                               LocationTypeRegistry,
                               TargetPath,
                               BufferLengthIn,
                               &BufferLengthOut);
    inited = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
      break;
    if ( BufferLengthOut <= BufferLengthIn )
    {
      inited = -1073741595;
LABEL_8:
      ExFreePoolWithTag(TargetPath, 0);
      TargetPath = 0LL;
      goto LABEL_19;
    }
    BufferLengthIn = BufferLengthOut;
    ExFreePoolWithTag(TargetPath, 0);
  }
  if ( PersistedStateLocation < 0 )
    goto LABEL_8;
  inited = RtlInitUnicodeStringEx(&DestinationString, TargetPath);
  if ( inited >= 0 )
  {
    inited = IopOpenRegistryKeyEx(&Handle, 0LL, &DestinationString, 983103LL);
    if ( inited >= 0 )
    {
      inited = RtlStringFromGUIDEx(Guid, &GuidString, 1u);
      if ( inited >= 0 )
      {
        inited = IopCreateRegistryKeyEx(&v20, Handle, &GuidString, 983103LL, 0, 0LL);
        if ( inited < 0 )
        {
          v2 = v20;
        }
        else
        {
          v9 = SeConvertStringSecurityDescriptorToSecurityDescriptor(
                 (__int64)L"D:PAI(A;OICI;GA;;;SY)",
                 1,
                 (__int64)&v14,
                 0LL);
          v3 = v14;
          if ( v9 < 0 )
            v3 = 0LL;
          RtlInitUnicodeString(&DestinationString, L"Properties");
          v2 = v20;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = v20;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.SecurityDescriptor = v3;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          inited = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
          if ( inited >= 0 )
          {
            v10 = RtlLengthSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a2 + 8));
            RtlInitUnicodeString(&DestinationString, L"Security");
            inited = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, *(PVOID *)(a2 + 8), v10);
          }
        }
      }
    }
  }
LABEL_19:
  if ( Handle )
    ZwClose(Handle);
  if ( v2 )
    ZwClose(v2);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( TargetPath )
    ExFreePoolWithTag(TargetPath, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( GuidString.Buffer )
    ExFreePool(GuidString.Buffer);
  return (unsigned int)inited;
}
